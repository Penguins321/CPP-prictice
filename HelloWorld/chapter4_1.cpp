#include<iostream>
#include<array>
#include<string>
using namespace std;
struct fish {
	char pingzong[20];
	int heiwght;
	double length;
};

enum Response {
	No = 0, Yes, Maybe;
};
int main() {
	using namespace std;

	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];

	array<char, 30> actor;
	array<short, 100> betsie;
	array<float, 13> chuck;
	array<long double, 64> dipsea;

	int arr[5] = { 1,3,5,7,9 };

	int even;
	even = arr[0];
	even = arr[0 + strlen(arr)];

	float ideas[3] = { 1.2,3.4,5.3 };
	std::cout << ideas[1] << std::endl;

	char arr[20] = "cheeseburger";
	string str = "WaldorfSalad";

	fish ff = { "xoahuangyu",13,14.5 };

	double ted = 2.3;
	double* ps = &ted;
	std::cout << *ps << std::endl;

	float treacle[10];
	float* pa = treacle;
	cout << *pa << endl;
	cout << *(pa + 9) << endl;


}