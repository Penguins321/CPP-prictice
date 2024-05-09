#include<iostream>
struct fish {
	char name[20];
	int weight;
	double length;
};
int main() {
	using namespace std;
	
	fish* ps = new fish;
	strcpy_s(ps->name, 21, "ffish");
	ps->weight = 23;
	ps->length = 23.3;
	cout << ps->name << " name " << endl
		<< (*ps).length << " length " << endl
		<< (*ps).weight << " weight " << endl;

	return 0;
}