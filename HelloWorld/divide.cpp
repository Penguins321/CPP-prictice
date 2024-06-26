#include<iostream>
int main() {
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << endl
		<< "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 << endl
		<< "Mixed division: 9.0/5 =  " << 9.0 / 5 << endl
		<< "double constant: 1e7/9.0 =  " << 1.e7 / 9.0 << endl
		<< "double constant: 1e7f/9.0 =  " << 1.e7f / 9.0 << endl
		<< "float constant: 1e7f/9.0f = " << 1.e7f / 9.0f << endl;
	return 0;
}