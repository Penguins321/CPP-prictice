#include<iostream>

using namespace std;
const int Seasons = 4;
const char* Snames[Seasons]  = { "spring","summer","fall","winter" };

void fill(double pa[]);
void show(double da[]);

int main() {
	double expenses[Seasons] ;
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double pa[]) {
	
	for (int i = 0; i < Seasons; i++) {
		cout << "enter " << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}

void show(double da[]) {
	
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "total expense: $" << total << endl;
}