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

	/*const char x[2][20] = {"Jason ","at your service\n"};
	const char* y = "Quillstone ";

	for (int i = 0; i < 3; i++) {
		cout << ((i < 2) ? !i ? x[i] : y : x[1]);
	}*/
}