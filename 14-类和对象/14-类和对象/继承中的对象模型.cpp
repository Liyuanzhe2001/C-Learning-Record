//#include<iostream>
//using namespace std;
//
//class Base {
//public: 
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; // 私有成员知识被隐藏了，但是还是会继承下去
//};
//
//// 公共继承
//class Son :public Base {
//public:
//	int m_D;
//};
//
//void test01() {
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}