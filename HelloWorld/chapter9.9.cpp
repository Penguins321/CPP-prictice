#include<iostream>
// 获取字符输入  判断每行输入多少字符，并统计total

using namespace std;
const int ArSize = 10;

void strcount(const char* str);

int main() {
	
	char input[ArSize];
	char next;
	cout << "enter the character: " << endl;
	cin.get(input,ArSize);
	while (cin) {
		cin.get(next);
		while (next != '\n')
			cin.get(next); 
		strcount(input);
		cout << "enter next line: (empty line to quit)" << endl;
		cin.get(input,ArSize);
	}
	cout << "Bye\n";
	return 0;

 }

void strcount(const char* str) {
	static int total = 0;
	int count = 0;
	// 注意此处*str++ 的解引用
	while (*str++) {
		count++;
	}
	total += count;
	cout << "every line have : " << count << " character." << endl;
	cout << "total: " << total << " total." << endl;
}