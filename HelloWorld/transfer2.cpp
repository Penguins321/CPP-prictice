#include<iostream>
int main() {
	using namespace std;

	const int chi_per_cun = 12;
	const double cun_per_mi = 0.0254;
	const double kg_per_pound = 2.2;

	int cun;
	int chi;
	int pound;
	cout << "please enter your chi:" << endl;
	cin >> chi;
	cout << "please enter your cun;:" << endl;
	cin >> cun;
	cout << "please enter your pound:" << endl;
	cin >> pound;

	int high = chi_per_cun * chi + cun;

	cout << "your high is :" << high << "cun" << endl;
	double bmi = (pound / kg_per_pound) / (high * cun_per_mi) * (high * cun_per_mi);
	cout << "your BMI is " << bmi << endl;
	cin.get();
	return 0;

}