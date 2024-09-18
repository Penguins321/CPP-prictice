#include<iostream>


template <typename  T>
void Swap(T& a, T& b);

int main() {
	using namespace std;

	int i = 10;
	int j = 20;
	cout << "i = " << i << "  j = " << j << endl;
	Swap(i, j);
	cout << "after Swap,i = " << i << "  j = " << j << endl;


	double x = 12.0;
	double y = 23.0;
	cout << "x = " << x << "  y = " << y << endl;  
	Swap(x, y);
	cout << "after Swap,x = " << x << "  y = " << y << endl;

	return 0;
}

template <typename T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}