#include<iostream>
#include<array>
using namespace std;

struct run {
	int times;
	double speed;
};

int main() {
	array<run, 3> arr;

	cout << "enter your grade 1;:";
	cin >> arr[0].speed;
	arr[0].times = 1;

	cout << "enter your grade 2:";
	cin >> arr[1].speed;
	arr[1].times = 2;

	cout << "enter your grade 3:";
	cin >> arr[2].speed;
	arr[2].times = 3;

	double grade = (arr[0].speed + arr[1].speed + arr[2].speed) / 3;
	cout << "average grade:" << grade << endl;
	return 0;
}