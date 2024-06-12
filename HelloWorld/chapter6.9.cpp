#include<iostream>
int main() {
	using namespace std;
	int a, b;
	cout << "enter two integers: ";
	cin >> a >> b;
	cout << " the laeger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
	return 0;


}