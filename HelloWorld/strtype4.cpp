#include<iostream>
#include<string>
#include<cstring>
int main() {
	using namespace std;

	char charr[20];
	string str;

	wchar_t title[] = L"Chief Astrongator";
	char16_t name[] = u"Felonia Ripova";
	char32_t car[] = U"Humber Super Snipe";

	cout << "Length of string in charr before input: " << strlen(charr) << endl;
	cout << "length of string in str before input: " << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	cout << "Enter another line text£º\n";
	getline(cin, str);
	cout << "You entered:" << str << endl;
	cout << "Length of sting in charr after input:" << strlen(charr) << endl;
	cout << "Length of string in str after input;" << str.size() << endl;
	return 0;
}