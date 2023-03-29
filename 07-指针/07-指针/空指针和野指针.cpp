//#include<iostream>
//using namespace std;
//
//int main() {
//	// 空指针
//	// 指针变量p指向内存地址编号为0的空间
//	int* p = NULL;
//
//	// 访问空指针报错
//	// 内存编号0-255为系统占用内存，不允许用户访问
//	//cout << *p << endl;
//
//	// 野指针：指针变量指向非法的内存空间
//	// 指针变量p指向内存地址编号为0x1100的空间
//	p = (int*)0x1100;
//
//	// 访问野指针报错
//	//cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}