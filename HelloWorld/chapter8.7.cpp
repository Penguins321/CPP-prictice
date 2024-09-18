#include<iostream>
#include<string>

using namespace std;
string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3( string& s1, const string& s2);

int main() {

	string input;
	string result;
	string copy;
	cout << "enter your str: " << endl;
	cin >> input;
	copy = input;

	result = version1(input, "***");
	cout << "your original string is : " << input << endl;
	cout << "your changed string is : " << result << endl;

	cout << "------------------------------" << endl;

	result = version2(input, "###");
	cout << "your original string is : " << input << endl;
	cout << "your changed string is : " << result << endl;

	cout << "------------------------------" << endl;

	input = copy;
	result = version3(input, "@@@");
	cout << "your original string is : " << input << endl;
	cout << "your changed string is : " << result << endl;
	return 0;
}

string version1(const string& s1,const string& s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string& version2(string& s1, const string& s2) {
	s1 = s2 + s1 + s2;
	return s1;
}

const string& version3( string& s1, const string& s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}