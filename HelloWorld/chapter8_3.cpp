#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void convert(string& str);

int main() {

	string input;

	while (true) {

		getline(cin, input);

		if (input == "q")
			break;
		convert(input);
		cout << "after conset: " << endl;
		cout << input << endl;
	}

	return 0;
}

void convert(string& str) {
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}
}