#include<iostream>
int main() {

	using namespace std;

	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds:___\b\b\b";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;

	cout << lbs << " pounds are " << stone << " stone "
		<< pounds << " pounds.\n";
	cin.get();
	cin.get();
	return 0;

}