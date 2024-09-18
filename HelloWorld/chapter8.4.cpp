#include<iostream>

void swapr(int& a, int& b);
void swapp(int* pa, int* pb);
void swapv(int a, int b);

int main() {
	using namespace std;

	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "using reference to swap content: " << endl;
	swapr(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "using pointer to swap content: " << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "trying to use passing to value: " << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1 = " << wallet1 << endl;
	cout << "wallet2 = " << wallet2 << endl;

	return 0;
}

void swapr(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swapv(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}