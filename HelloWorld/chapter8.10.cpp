#include<iostream>

using namespace std;
// char* left(const char* str, int n = 1);
unsigned long left(unsigned long num, unsigned int ct);

int main() {

	unsigned long num = 1234567;
	cout << "original num: " << num << endl;
	cout << left(num, 2) << endl;
	return 0;
}

/*
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
}*/

// ȡ����ǰ��λ
unsigned long left(unsigned long num, unsigned int ct) {
	unsigned long n = num;
	int digits = 1;
	//��ȡnum�ĳ���
	while (n /= 10)
		digits++;

	// ���Ǳ߽�����
	if (num == 0 || ct == 0)
		return 0;
	if (ct >= digits)
		return num;

	ct = digits - ct;
	while (ct--)
		num /= 10;
	return num;
}