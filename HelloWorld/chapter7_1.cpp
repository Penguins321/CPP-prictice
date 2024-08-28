#include<iostream>
double average_test(double x, double y);

int main() {
	using namespace std;

	double x, y;
	double sum = 0;
	cin >> x;
	cin >> y;
	while (x != 0 && y != 0) {
		sum = average_test(x, y);
		cout << "sum is : " << sum << endl;
		cin >> x;
		cin >> y;
	}
	return 0;
}

double average_test(double x, double y) {
	return 2.0 * x * y / (x + y);
}