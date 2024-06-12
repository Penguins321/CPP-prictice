#include<iostream>
int main() {
	using namespace std;

	cout << "enter the number:";
	int num,sum = 0;
	cin >> num;
	while (num != 0)
	{
		sum = sum + num;
		cout << sum << endl;
		cin >> num;
	}
	cout << "you enter the 0 ,program is end";
	return 0;
}