#include<iostream>
#include<string>
// ��ȡ�ַ�����  �ж�ÿ����������ַ�����ͳ��total
using namespace std;

void strcount(string str);

int main() {

	string input;
	cout << "enter the character: " << endl;
	getline(cin, input);
	while (cin) {
		// string�������empty������const char* str ʹ��strcmp�����Ƚ�
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
	// ע��˴�*str++ �Ľ�����
	int index = 0;
	while (str[index++]) {
		count++;
	}
	total += count;
	cout << "every line have : " << count << " character." << endl;
	cout << "total: " << total << " total." << endl;
}