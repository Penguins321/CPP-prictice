#include<iostream>
int main() {
	using namespace std;

	int rats = 10;
	int& rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	rodents++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	// 地址也相同
	cout << "&rats = " << &rats << endl;
	cout << "&rodents = " << &rodents << endl;
	return 0;
}