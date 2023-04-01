//#include<iostream>
//using namespace std;
//
//// 函数调用运算符 ()  也可以重载
//class MyPrint {
//public:
//	void operator()(string text){
//		cout << text << endl;
//	}
//};
//
//void test01() {
//	// 重载的()操作符 可称为仿函数
//	MyPrint myFunc;
//	myFunc("Hello world");
//}
//
//class MyAdd {
//public:
//	int operator()(int v1, int v2) {
//		return v1 + v2;
//	}
//};
//
//void test02() {
//	MyAdd add;;
//	int ret = add(10, 10);
//	cout << "ret = " << ret << endl;
//
//	// 匿名对象调用
//	cout << "MyAdd()(100,100) = " << MyAdd()(100,100) << endl;
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}