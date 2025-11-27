//#include <iostream>
//using namespace std;
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//template <class T>
//class Myclass
//{
//public:
//	T obj;
//	//类模板中成员函数
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//	
//};
////成员函数调用时才生成
//void test01()
//{
//	Myclass<Person1>m;
//	m.func1();
//	//m.func2();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}