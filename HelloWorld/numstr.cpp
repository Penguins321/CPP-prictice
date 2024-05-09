#include<iostream>
int main() {
	using namespace std;

	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?" << endl;
	char addrees[80];
	cin.getline(addrees, 80);
	cout << "Year built:" << year << endl;
	cout << "Address:" << addrees << endl;
	cout << "Done!";
	return 0;
}