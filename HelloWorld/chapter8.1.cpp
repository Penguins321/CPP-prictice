#include<iostream>

inline double square(double x) { return x * x; }

int main() {
	using namespace std;

	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a =" << a << endl << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "square c = " << square(13) << endl;
	cout << "now c =  " << square(c++) << endl;
	cout << "now c =  " << square(++c) << endl;
	return 0;
}