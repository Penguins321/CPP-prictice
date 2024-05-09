#include<iostream>
int main() {
	using namespace std;

	int higgen = 5;
	int* pt = &higgen;

	int* p;
	p = (int*)0xB0000000;

	cout << "Value of higgen = " << higgen << " ,Address of higgen = " << &higgen << endl;
	cout << "Value of *pt = " << *pt << " ,Address of pt = " << pt << endl;
	return 0;
}