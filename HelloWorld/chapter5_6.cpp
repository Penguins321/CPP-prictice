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

	int sales[3][12];
	int i, j,k;
	int sumYear = 0;
	int sumAll = 0;
	for (i = 0; i < 3; ++i) {
		cout << "enter the "<< i+1 << " year:" << endl;
		for (j = 0; j < 12; ++j) {
			cout << "enter the sales in " << months[j] << " : " << endl;
			cin >> sales[i][j];
			sumYear += sales[i][j];
		}
		sumAll += sumYear;
		cout << "every years sales is : " << sumYear << endl;
	}
	cout << "all sales in three years is " << sumAll << endl;
	return 0;
}