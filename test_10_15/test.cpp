#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�������캯���ĵ���ʱ��

//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "person��Ĭ�Ϲ��캯������" << endl;
//	}
//	//�вι���
//	Person(int age)
//	{
//		cout << "person���вι��캯������" << endl;
//		m_age = age;
//	}
//	~Person()
//	{
//		cout << "person��������������" << endl;
//	}
//	int m_age;
//	//�������캯��
//	Person(const Person &p)
//	{
//		m_age = p.m_age;
//		cout << "person�Ŀ������캯��" << endl;
//	}
//
//};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2.age=" <<p2.m_age<< endl;
//}
//2.ֵ���ݵķ�ʽ������������ֵ
//void  doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.ֵ��ʽ���ؾֲ�����
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//���캯���ĵ��ù���
//Ĭ������£�C++���������ٸ�һ�������3������
//1.Ĭ�Ϲ��캯�����޲� ������Ϊ�գ�
//2.Ĭ�������������޲� ������Ϊ�գ�--�����Է�����������
//3.Ĭ�Ͽ������캯���������Խ���ֵ������
//���ù���
//1.�������Լ��ṩ���вι��캯���������������ṩĬ���޲ι��캯��������Ȼ���ṩ�������캯��
//�������ṩ�˿������캯���������������ṩ���캯��
//int main()
//{
//	system("pause");
//	return 0;
//}

//������򵥵ĸ�ֵ��������
//ǳ�������ڶ�����������ռ䣬���п�������
//class person 
//{
//public:
//	//Ĭ�Ϲ��캯��
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯��" << endl;
//	}
//	//�вι��캯��
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height=new int(height);//�������ٵ������ɳ���Ա�ֶ����٣�Ҳ��Ҫ�ɳ���Ա�ֶ��ͷ�
//		cout << "person���вι��캯��" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�������������������
//	person(const person &p)
//	{
//		cout << "person�Ŀ������캯��" << endl;
//		m_age = p.m_age;
//		//m_height=p.m_height;������Ĭ��ʵ�����д���
//		//���
//		m_height=new int(*p.m_height);
//	}
//	//��������
//	~person()
//	{
//		//�������룺���������ٵ��������ͷŲ���
//		if (m_height!=NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//
//		}
//		cout << "person����������" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "p1�����䣺"<<p1.m_age <<"���Ϊ��"<<*p1.m_height << endl;
//	person p2(p1);
//	cout << "p2�����䣺" << p2.m_age <<"���Ϊ��" << *p1.m_height << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//ǳ����������������ǣ��������ڴ��ظ��ͷ�
//����취��ǳ����������Ҫ����������


//��ʼ���б�
//class person 
//{
//public:
//	int m_a;
//	int m_b;
//	int m_c;
//	//�в����Ĺ��캯��
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
//	//�в����Ĺ��캯��
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
//�������Ϊ���Ա
//�ֻ���
//class Phone
//{
//public:
//	//�вι��캯��
//	Phone(string pName)
//	{
//		m_PName = pName;
//	}
//	//�ֻ�Ʒ��
//	string m_PName;
//};
//����
//class person
//{
//public:
//	person(string name, string pName):m_Name(name),m_phone(pName)
//	{
//
//	}
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_phone;
//};
//void test01()
//{
//	person p("����", "ƻ��MAX");
//	cout << p.m_Name << "����:"<< p.m_phone.m_PName << "�ֻ�" << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//�������������Ϊ�����Ա�������ʱ���ȹ���������ٹ�������
//������˳�����ͷ����� �����ͷ������
//���߸պ��෴


//��̬��Ա����
//class person
//{
//public:
//	//1.���ж��󶼹���ͬһ������
//	//2.����׶ξͷ����ڴ�
//	//���������������ʼ������
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
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//	//1.ͨ��������з���
//	person p;
//	//cout << p.m_A << endl;
//	
//	//2.ͨ���������з���
//	cout << person::m_A << endl;//��̬��Ա����ר��
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//��̬��Ա����
//1���ж�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
	static void func()
	{
		m_a = 100;
		//m_b = 200;���� �Ǿ�̬
		cout << "static void func()�ĵ���" << endl;
	}
	static int m_a;
	int m_b;//�Ǿ�̬��Ա����
};
int person:: m_a = 10;
void test01()
{
	//ͨ��������з���
	person p;
	p.func();
	//ͨ���������з���
	person::func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}