#include<iostream>
char* buildstr(char c, int n);
int main() {
	using namespace std;
	char ch;
	int times;
	cout << "enter a characator: \n";
	cin >> ch;
	cout << "enter times: \n";
	cin >> times;
	char* pt = buildstr(ch, times);
	cout << pt << endl;
	delete[] pt;
	return 0;
}

char* buildstr(char c, int n) {
	char* ps = new char[n + 1];
	ps[n] = '\0';
	while (n-- > 0)
	{
		ps[n] = c;
	}

	return ps;
}