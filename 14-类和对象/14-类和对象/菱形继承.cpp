//#include<iostream>
//using namespace std;
//
///*
//���μ̳����⣺
//1.��̳��˶�������ݣ���ͬ���̳��˶�������ݣ���������ʹ������ʱ���ͻ���������ԡ�
//2.������̳��Զ�������ݼ̳������ݣ���ʵ����Ӧ������������������ֻ��Ҫһ�ݾͿ���
//*/
//class Animal {
//public:
//	int m_Age;
//};
//
//// �̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
//// ��ʱ�����ĸ���Animal��Ϊ�����
//class Sheep : virtual public Animal {};
//class Tuo :virtual public Animal {};
//class SheepTuo :public Sheep, public Tuo {};
//
//void test01() {
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
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