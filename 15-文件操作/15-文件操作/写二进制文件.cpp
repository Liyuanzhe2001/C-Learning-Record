//#include<fstream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//// �������ļ� д�ļ�
//void test01() {
//	// 1. ����ͷ�ļ�
//
//	// 2. �������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	// 3. �������
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "����",18 };
//
//	// 4. д�ļ�
//	ofs.write((const char*)&p, sizeof(p));
//
//	ofs.close();
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