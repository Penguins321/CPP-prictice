#include<iostream>
#include<string>
using namespace std;
struct Candybar
{
	string name;
	double weight;
	int kalu;
};

int main() {
	

	Candybar* pc = new Candybar[3];
	pc[0] = { "Mocha Munch", 2.3, 350 };
	pc[1] = { "Kit Kat", 1.8, 320 };
	pc[2] = { "Snickers", 2.5, 400 };

	for (int i = 0; i < 3; i++) {
		cout << pc[i].name << endl;
		cout << pc[i].weight << endl;
		cout << pc[i].kalu << endl;
	}

	//cout << (*(pc + 1)).name << endl;
	//cout << (pc + 1)->name << endl;
	//cout << pc[1].name << endl;

	return 0;
}