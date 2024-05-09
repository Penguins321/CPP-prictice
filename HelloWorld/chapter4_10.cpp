#include<iostream>
struct Piza
{
	char name[20];
	int length;
	double weight;
};

int main() {
	using namespace std;

	Piza* p = new Piza;

	cout << "Enter the length: ";
	cin >> (*p).length;

	cout << "ENter the name:";
	cin.get();
	cin.getline((*p).name, 20);
	
	cout << "Enter the weight:";
	cin >> p->weight;

	cout << "your piza size is : " << p->name << " " << p->length << " " << p->weight << endl;
	delete p;
	return 0;

}