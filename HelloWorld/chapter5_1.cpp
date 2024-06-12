#include<iostream>
int main() {
	using std::cout;
	using std::cin;

	int min,i;
	int max;
	int sum =0;
	cout << "ENter the min value:";
	cin >> min;
	cout << "Enter the max value:";
	cin >> max;
	
	for (i = min; i <= max; ++i) {
		sum = sum + i;
	}
	cout << sum;
	return 0;
}