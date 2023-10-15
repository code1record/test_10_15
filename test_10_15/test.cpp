#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//拷贝构造函数的调用时机

//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//	//有参构造
//	Person(int age)
//	{
//		cout << "person的有参构造函数调用" << endl;
//		m_age = age;
//	}
//	~Person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//	int m_age;
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		m_age = p.m_age;
//		cout << "person的拷贝构造函数" << endl;
//	}
//
//};
//1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2.age=" <<p2.m_age<< endl;
//}
//2.值传递的方式给函数参数传值
//void  doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.值方式返回局部对象
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//构造函数的调用规则
//默认情况下：C++编译器至少给一个类添加3个函数
//1.默认构造函数（无参 函数体为空）
//2.默认析构函数（无参 函数体为空）--不可以发生函数重载
//3.默认拷贝构造函数（对属性进行值拷贝）
//调用规则
//1.当我们自己提供了有参构造函数，编译器则不再提供默认无参构造函数，但依然会提供拷贝构造函数
//当我们提供了拷贝构造函数，编译器则不再提供构造函数
//int main()
//{
//	system("pause");
//	return 0;
//}

//深拷贝：简单的赋值拷贝操作
//浅拷贝：在堆区重新申请空间，进行拷贝操作
//class person 
//{
//public:
//	//默认构造函数
//	person()
//	{
//		cout << "person的默认构造函数" << endl;
//	}
//	//有参构造函数
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height=new int(height);//堆区开辟的数据由程序员手动开辟，也需要由程序员手动释放
//		cout << "person的有参构造函数" << endl;
//	}
//	//自己实现拷贝构造函数解决拷贝带来的问题
//	person(const person &p)
//	{
//		cout << "person的拷贝构造函数" << endl;
//		m_age = p.m_age;
//		//m_height=p.m_height;编译器默认实现这行代码
//		//深拷贝
//		m_height=new int(*p.m_height);
//	}
//	//析构函数
//	~person()
//	{
//		//析构代码：将堆区开辟的数据做释放操作
//		if (m_height!=NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//
//		}
//		cout << "person的析构函数" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "p1的年龄："<<p1.m_age <<"身高为："<<*p1.m_height << endl;
//	person p2(p1);
//	cout << "p2的年龄：" << p2.m_age <<"身高为：" << *p1.m_height << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//浅拷贝带来的问题就是：堆区的内存重复释放
//解决办法：浅拷贝的问题要利用深拷贝解决


//初始化列表
//class person 
//{
//public:
//	int m_a;
//	int m_b;
//	int m_c;
//	//有参数的构造函数
//	person(int a,int b,int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//	}
//};
//void test01()
//{
//	person p(1, 2, 3);
//	cout << "m_a=" << p.m_a << endl;
//	cout << "m_b=" << p.m_b << endl;
//	cout << "m_c=" << p.m_c << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class person
//{
//public:
//	int m_a;
//	int m_b;
//	int m_c;
//	//有参数的构造函数
//	/*person() :m_a(10), m_b(20), m_c(30)
//	{
//
//	}*/
//	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//};
//void test01()
//{
//	person p(34,56,24);
//	cout << "m_a=" << p.m_a << endl;
//    cout << "m_b=" << p.m_b << endl;
//    cout << "m_c=" << p.m_c << endl;
//	
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//#include <string.h>
//类对象作为类成员
//手机类
//class Phone
//{
//public:
//	//有参构造函数
//	Phone(string pName)
//	{
//		m_PName = pName;
//	}
//	//手机品牌
//	string m_PName;
//};
//人类
//class person
//{
//public:
//	person(string name, string pName):m_Name(name),m_phone(pName)
//	{
//
//	}
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_phone;
//};
//void test01()
//{
//	person p("张三", "苹果MAX");
//	cout << p.m_Name << "拿着:"<< p.m_phone.m_PName << "手机" << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//当其他类对象作为本类成员，构造的时候先构造类对象，再构造自身
//析构的顺序：先释放自身 ，再释放类对象
//两者刚好相反


//静态成员变量
//class person
//{
//public:
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//类内声明，类外初始化操作
//	static int m_A;
//};
//int person::m_A=100;
//void test01()
//{
//	person p;
//	cout << p.m_A << endl;//100
//	person p2;
//	p2.person::m_A = 200;//200
//	cout << p.m_A << endl;
//}
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//	//1.通过对象进行访问
//	person p;
//	//cout << p.m_A << endl;
//	
//	//2.通过类名进行访问
//	cout << person::m_A << endl;//静态成员变量专有
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//静态成员函数
//1所有对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
class person
{
public:
	static void func()
	{
		m_a = 100;
		//m_b = 200;报错 非静态
		cout << "static void func()的调用" << endl;
	}
	static int m_a;
	int m_b;//非静态成员变量
};
int person:: m_a = 10;
void test01()
{
	//通过对象进行访问
	person p;
	p.func();
	//通过类名进行访问
	person::func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}