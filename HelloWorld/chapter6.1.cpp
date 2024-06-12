#include<iostream>

int main() {
	using namespace std;
	char ch;
	int count = 0;
	int nullcount = 0;
	char dot = '.';
	char nullstr = ' ';
	cin.get(ch);
	while (ch != dot) {
		count++;
		if (ch == nullstr) {
			nullcount++;
		}
		cin.get(ch);
	}
	cout << "count is : " << count << " nullcount is : " << nullcount << endl;
	return 0;
}