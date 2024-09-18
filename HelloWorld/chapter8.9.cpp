#include<iostream>

using namespace std;
const int argSize = 80;
char* left(const char* str, int n = 1);

int main() {

	char sample[argSize];
	cout << "enter the str: " << endl;
	cin.get(sample, argSize);

	char* ps = left(sample, 4);
	cout << "after str is : " << ps << endl;
	delete[] ps;

	ps = left(sample);
	cout << "after str is : " << ps << endl;
	delete[] ps;
	return 0;
}

char* left(const char* str, int n) {
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}