#include<iostream>
int main() {
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	float tree = 3;
	int guess(3.9823);
	int debt = 7.2E12;

	cout << "tree = " << tree << endl
		<< "guess = " << guess << endl
		<< "debt = " << debt << endl;
	return 0;
}