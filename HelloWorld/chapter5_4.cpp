#include<iostream>
int main() {
	using namespace std;

	// 单利 复利 
	// 分别计算两种的值
	// 每年增长的只是利息
	const double money = 100.0;
	int year = 1;
	double li1, li2;
	double singlem = 110;
	double  rem = 105.0;

	while (rem <= singlem)
	{
		li1 = 0.1 * money;
		li2 = +0.05 * rem;
		singlem = singlem + li1;
		rem = rem + li2;
		year++;
	}
	cout << year << endl;
	cout << rem << " and " << singlem << endl;
	return 0;

}