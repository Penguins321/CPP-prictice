#include<iostream>
#define FLOAT_POINT float*;   // 类型别名
int main() {

	using namespace std;

	int n;
	cout << "enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	} while (n!=7);
	cout << "yes,7 is my favorite.\n";
	return 0;
}