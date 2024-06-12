#include<iostream>
const int Fave = 27;

int main() {
	using namespace std;
	int n;
	cout << "enter the number: " << endl;

	do {
		cin >> n;
		if (n < Fave)
			cout << "is too low ,please guess again." << endl;
		else if (n > Fave)
			cout << "is too high,please guess agin." << endl;
		else
			cout << "you got it!" << endl;

	} while (Fave != n);
	return 0;

}