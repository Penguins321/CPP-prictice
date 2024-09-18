#include<iostream>
using namespace std;

struct debts {
	char name[50];
	double amount;
};

template<typename T>
void Show(T arr[], int n);
template<typename T>
void Show(T* arr[], int n);

int SumArray(int arr[], int n);
double SumArray(const debts a[], int n);

// Ä£°åÖØÔØ½âÎö
int main() {

	int things[6] = { 13,31,103,301,310,130 };
	Show(things, 6);

	debts mr_E[3] = {
		{"Rick",2400.00},
		{"rose",1300.0},
		{"jack",1800.0}
	};

	double* pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	Show(pd, 3);
	cout << "================" << endl;
	cout << SumArray(things, 6) << endl;
	cout << SumArray(mr_E,3) << endl;

	return 0;
}


template<typename T>
void Show(T arr[], int n) {
	cout << "using templateA: " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << "  ";
	cout << endl;
}

template<typename T>
void Show(T* arr[], int n) {
	cout << "using templateB: " << endl;
	for (int i = 0; i < n; i++)
		cout << *arr[i] << "  ";
	cout << endl;
}

int SumArray(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

double SumArray(const debts a[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i].amount;
	return sum;
}