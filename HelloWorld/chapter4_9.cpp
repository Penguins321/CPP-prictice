#include<iostream>
struct Candybar {
	char name[20];
	double weight;
	int kaluli;
};

int main() {
	using namespace std;

	Candybar arr[3];
	 strcpy_s(arr[0].name, 20, "candd");
	 strcpy_s(arr[1].name, 21, "candd2");
	 strcpy_s(arr[2].name, 22, "candd3");

	 arr[0].weight = 23.4;
	 arr[1].weight = 23.4;
	 arr[2].weight = 23.4;
	 arr[0].kaluli = 2;
	 arr[1].kaluli = 2;
	 arr[2].kaluli = 2;


	cout << arr[0].name << endl;
	cout << arr[1].name << endl;
	cout << arr[2].name << endl;
	cout << arr[0].weight << endl;
	cout << arr[1].weight << endl;
	cout << arr[2].weight << endl;
	cout << arr[0].kaluli << endl;
	cout << arr[1].kaluli << endl;
	cout << arr[2].kaluli << endl;
	return 0;
}