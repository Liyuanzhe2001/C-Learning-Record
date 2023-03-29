#include<iostream>
using namespace std;

int main() {
	// ·Ç
	int a1 = 10;
	cout << !a1 << endl; // 0
	cout << !!a1 << endl; // 1

	// Óë
	int a2 = 10;
	int b2 = 10;
	cout << (a2 && b2) << endl; // 1

	a2 = 10;
	b2 = 0;
	cout << (a2 && b2) << endl; // 0

	a2 = 0;
	b2 = 0;
	cout << (a2 && b2) << endl; // 0

	// »ò
	int a3 = 10;
	int b3 = 10;
	cout << (a3 || b3) << endl; // 1

	a3 = 10;
	b3 = 0;
	cout << (a3 || b3) << endl; // 1
	
	a3 = 0;
	b3 = 0;
	cout << (a3 || b3) << endl; // 0

	system("pause");
	return 0;
}
