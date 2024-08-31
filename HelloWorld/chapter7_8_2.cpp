#include<iostream>

using namespace std;
const int Seasons = 4;
const char* Snames[Seasons] = { "spring","summer","fall","winter" };
struct spend {
	double ar[4];
};

void fill(spend* sp);
void show(const spend* sp);

int main() {
	spend sp;
	fill(&sp);
	show(&sp);
	return 0;
}

void fill(spend* sp) {

	for (int i = 0; i < Seasons; i++) {
		cout << "enter " << Snames[i] << " expenses: ";
		cin >> sp->ar[i];
	}
}

void show(const spend* sp) {

	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << sp->ar[i] << endl;
		total += sp->ar[i];
	}
	cout << "total expense: $" << total << endl;
}