#include<iostream>
enum{red, orange, yellow, green, blue, violet, indigo};

int main() {
	using namespace std;
	cout << "enter color code(0-6)";
	int code;
	cin >> code;
	while (code >= red && code <= indigo) {
		switch (code)
		{
		case red: cout << "red "; break;
		case orange: cout << "orange "; break;
		case yellow: cout << "yellow "; break;
		case green: cout << "green "; break;
		case blue: cout << "blue "; break;
		case violet: cout << "violet "; break;
		case indigo: cout << "indigo "; break;
		}
		cout << "enter color code(0-6)";
		cin >> code;
	}
	cout << "bye!\n";
	return 0;
}