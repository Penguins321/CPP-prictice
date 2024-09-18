#include<iostream>
using namespace std;

void Show(const char* str, int n = 1);

int main() {

	const char* s = "hello world";
	Show(s);
	Show(s, 1);

	return 0;
}

void Show(const char* str, int n) {
	if(n != 0)
		cout << str << endl;
}