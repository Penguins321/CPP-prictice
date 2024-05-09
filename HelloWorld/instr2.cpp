#include<iostream>
int main() {
	using namespace std;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name : ";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: ";
	cin.getline(dessert, ArSize);

	cout << "I have some dilicous " << dessert << " for you," << name << endl;
	return 0;
}