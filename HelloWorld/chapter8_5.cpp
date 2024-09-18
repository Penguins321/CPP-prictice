#include<iostream>

using namespace std;

template<typename T>
T max5(T arr[]);

int main() {

	int arr1[5] = { 1,2,3,4,5 };
	double arr2[5] = { 1.0,3.0,2.0,4.0,5.5 };

	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;

	return 0;
}

template<typename T>
T max5(T arr[5]) {
	T max = arr[0];
	for (int i = 1; i < 5; i++) {
		max = arr[i] > max ? arr[i] : max;
	}
	return max;
}