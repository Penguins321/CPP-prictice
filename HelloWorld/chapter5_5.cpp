#include<iostream>
int main() {
	using namespace std;

	const char* months[12] = {
		"һ��",
		"����",
		"����",
		"����",
		"����",
		"����",
		"����",
		"����",
		"����",
		"ʮ��",
		"ʮһ��",
		"ʮ����"
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