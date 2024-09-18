#include<iostream>
#include<string>
// 获取字符输入  判断每行输入多少字符，并统计total
using namespace std;

void strcount(string str);

int main() {

	string input;
	cout << "enter the character: " << endl;
	getline(cin, input);
	while (cin) {
		// string类包含的empty函数，const char* str 使用strcmp函数比较
		if (input.empty()) {
			break;
		}
		strcount(input);
		cout << "enter next line: (empty line to quit)" << endl;
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;

}

void strcount(string str) {
	static int total = 0;
	int count = 0;
	// 注意此处*str++ 的解引用
	int index = 0;
	while (str[index++]) {
		count++;
	}
	total += count;
	cout << "every line have : " << count << " character." << endl;
	cout << "total: " << total << " total." << endl;
}