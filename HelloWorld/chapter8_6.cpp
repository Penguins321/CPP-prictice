#include<iostream>
#include<cstring>

template<typename T>
T maxn(T arr[], int n);

template<>
const char* maxn<const char*>(const char* arr[], int n);

int main() {
	using namespace std;

	int arr1[6] = { 1,3,4,5,6,76 };
	double arr2[4] = { 2.3,4.4,56.5,765.6 };

	const char* arr3[5] = { "sdf","sf","sdfe","gte","iuh" };

	cout << maxn(arr1,6) << endl;
	cout << maxn(arr2,4) << endl;

	cout << maxn(arr3,5) << endl;

	return 0;
}


template<typename T>
T maxn(T arr[], int n) {
	T max = arr[0];
	for (int i = 1; i < n; i++)
		max = arr[i] > max ? arr[i] : max;
	return max;
}


// 显式具体化模板函数的传参需和返回值一致
//  strlen(*arr[i]) 不需要解引用，因为arr[i]已经是字符串的地址，注意字符串和其他类型的区别
template<>
const char* maxn<const char*>(const char* arr[], int n) {
	using namespace std;

	const char* max = arr[0];
	cout << arr[0] << endl;
	for (int i = 1; i < n; i++) {
		cout << arr[i] << endl;
		max = strlen(arr[i]) > strlen(max) ? arr[i] : max;
	}
	cout << endl;
	return max;
}