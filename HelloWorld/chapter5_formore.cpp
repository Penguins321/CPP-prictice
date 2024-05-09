#include<iostream>
const int ArSize = 16;
int main() {
	using namespace std;

	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "!=" << factorials[i] << endl;
	





	/*int i;
	long long sum = 1;
	long long arr[16];
	arr[0] = 1;
	for (i = 1; i < 16; i++) {
		sum = i * sum;
		arr[i] = sum;
	}

	for (int j = 0; j < 16; j++) {
		cout << arr[j] << endl;
	}*/
	return 0;
}