#include<iostream>
int main() {
	using namespace std;

	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	int bunnies = 50;
	// 并没有改变引用的绑定，而是变成了赋值
	rodents = bunnies;
	cout << "bunnies = " << bunnies << endl;
	cout << "rodents = " << rodents << endl;
	cout << "rats = " << rats << endl;

	// 检查地址
	cout << "&bunnies = " << &bunnies << endl;
	cout << "&rodents = " << &rodents << endl;
	cout << "&rats = " << &rats << endl;
	return 0;
}