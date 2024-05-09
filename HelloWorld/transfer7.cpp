#include<iostream>
int main() {
	using namespace std;

	// 欧洲   L/100km
	// 美国   length/gallon
	const double length = 62.14;
	const double ranliao = 3.785;
	
	double uk;
	double us;

	cout << "Enter the mpg: ";
	cin >> uk;

	// 8.7L/     100km    uk
	// 原本的燃料消耗
	double gallon = uk / ranliao;

	// 62.14 / gallon
	us = length / gallon;

	// 需要的  距离  /  燃料  gallon
	cout << "The us is :" << us << "mpg" << endl;
	
	return 0;
}