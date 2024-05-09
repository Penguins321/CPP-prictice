#include<iostream>
int main() {
	using namespace std;
	int carrots;
	int a;
	int b;
	int c;
	carrots = a = b = c = 25;
	cout << "i have ";
	cout << carrots;
	cout << "carrots. ";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch,crunch . now i have " << carrots << " carrots." << endl;
	cout << a << " " << b << " " << c << " ";
	cin.get();
	return 0;
}