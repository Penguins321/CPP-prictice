#include<iostream>
#include<array>
int main() {
	using namespace std;

	array<long double, 102> arr;
	int i;
	arr[0] = 1.0;
	arr[1] = 1.0;

	for (i = 2; i <= 100; ++i) {
		arr[i] = i * arr[i - 1];
	}
	for (int i = 0; i < 102; ++i) {
		cout << arr[i] << endl;
	}
	return 0;

}