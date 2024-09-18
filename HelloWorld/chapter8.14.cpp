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

// ģ�����ؽ���
int main() {

	int things[6] = { 13,31,103,301,310,130 };
	Show(things,6);

	debts mr_E[3] = {
		{"Rick",2400.00},
		{"rose",1300.0},
		{"jack",1800.0}
	};

	double* pd[3];
	for (int i = 0; i < 3; i++) 
		pd[i] = &mr_E[i].amount;
	Show(pd, 3);

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