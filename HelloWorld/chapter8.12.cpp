#include<iostream>
using namespace std;

template <typename  T>
void Swap(T& a, T& b);

const int LIM = 8;
template<typename T>
void Swap(T a[], T b[], int n);

void show(int a[], int n);

int main() {
	

	int i = 10;
	int j = 20;
	cout << "i = " << i << "  j = " << j << endl;
	Swap(i, j);
	cout << "after Swap,i = " << i << "  j = " << j << endl;

	// ½»“Q”µ½M 
	int d1[LIM] = { 1,2,3,4,5,6,7,8 };
	int d2[LIM] = { 2,4,6,7,8,9,4,5 };
	cout << "original arrays: " << endl;
	show(d1, LIM);
	show(d2, LIM);
	cout << "swaped arrays: " << endl;
	Swap(d1, d2, LIM);
	show(d1, LIM);
	show(d2, LIM);

	return 0;
}

template <typename T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap(T a[], T b[], int n) {
	T temp;
	for (int i = 0; i < n, i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int a[],int n ) {
	using namespace std;

	for (int i = 0, i < n, i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}

/*
void show(int a[], int b[], int n) {
	for (int i = 0, i < n, i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << b[i] << "  ";
	}
	cout << endl;
}*/