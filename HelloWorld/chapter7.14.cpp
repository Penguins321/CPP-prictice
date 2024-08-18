#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string arr[], int size);
int main() {


	string arr[SIZE];
	cout << "enter " << SIZE << "value: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "the " << i + 1 << " : " << endl;
		getline(cin, arr[i]);
	}
	cout << "display: " << endl;
	display(arr, SIZE);
	return 0;
}

void display(const string arr[], int size) {

	for (int i = 0; i < size; i++) {   
		cout << arr[i] << endl;
	}
}