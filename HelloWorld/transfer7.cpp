#include<iostream>
int main() {
	using namespace std;

	// ŷ��   L/100km
	// ����   length/gallon
	const double length = 62.14;
	const double ranliao = 3.785;
	
	double uk;
	double us;

	cout << "Enter the mpg: ";
	cin >> uk;

	// 8.7L/     100km    uk
	// ԭ����ȼ������
	double gallon = uk / ranliao;

	// 62.14 / gallon
	us = length / gallon;

	// ��Ҫ��  ����  /  ȼ��  gallon
	cout << "The us is :" << us << "mpg" << endl;
	
	return 0;
}