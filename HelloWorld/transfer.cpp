#include<iostream>
int main() {
	using namespace std;


	const int chi_per_cun = 12;
	int enter;
	int chi;
	int cun;

	cout << "plase enter your number:______\b\b\b\b\b\b";
	cin >> enter;
	chi = enter / chi_per_cun;
	cun = enter % chi_per_cun;
	cout << "your high is " << chi << "chi" << cun << "cun" << endl;
	cin.get();
	return 0;
}