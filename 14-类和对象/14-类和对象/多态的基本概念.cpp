//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	// Speak���������麯��
//	// ����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ������������
//	virtual void speak() {
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//
//};
//
////����ϣ������ʲô������ô�͵���ʲô����ĺ���
////���������ַ�ڱ���׶ξ���ȷ������ô��̬����
////���������ַ�����н׶β���ȷ�������Ƕ�̬����
//
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
////
////��̬���������� 
////1���м̳й�ϵ
////2��������д�����е��麯��
////��̬ʹ�ã�
////����ָ�������ָ���������
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//
//	Dog dog;
//	DoSpeak(dog);
//
//	Animal animal;
//	animal.speak();
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
