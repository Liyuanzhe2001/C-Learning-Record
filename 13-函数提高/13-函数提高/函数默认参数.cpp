//#include<iostream>
//using namespace std;
//
//// ��C++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��
//int func(int a, int b = 10, int c = 10) {
//	return a + b + c;
//}
//
//// 1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//// 2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
//int func2(int a = 10, int b = 10);
//int func2(int a, int b) {
//	return a + b;
//}
//int main() {
//
//	cout << "ret = " << func(20, 20) << endl;
//	cout << "ret = " << func(100) << endl;
//
//	cout << "ret = " << func2(20, 20) << endl;
//	cout << "ret = " << func2() << endl;
//
//	return 0;
//}