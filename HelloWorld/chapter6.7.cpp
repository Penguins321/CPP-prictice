#include<iostream>
#include<climits>
bool is_int(double);
int main() {
	using namespace std;
	double num;

	cout << "yo,dude! enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "you`ve entered the integer " << val << "\nBye\n";
	return 0;
}

bool is_int(double x) {
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}