#include<iostream>
int main() {
	using namespace std;

	const char* months[12] = {
		"一月",
		"二月",
		"三月",
		"四月",
		"五月",
		"六月",
		"七月",
		"八月",
		"九月",
		"十月",
		"十一月",
		"十二月"
	};

	int sales[12];
	int i,x;
	int sum = 0;
	for (i = 0; i < 12; ++i) {
		cout << "enter the sales in " << months[i] << endl;
		cin >> x;
		sales[i] = x;
		sum += x;
	}
	cout << "all sales in years is " << sum << endl;
	return 0;
}