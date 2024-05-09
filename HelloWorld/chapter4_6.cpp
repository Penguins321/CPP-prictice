#include<iostream>
#include<string>
using namespace std;
int main() {
	string name;
	string dessert;
	cout << "Enter your name:" << endl;
	getline(cin, name);
	//cin.get();
	cout << "Enter your favorite dessert: " << endl;
	getline(cin, dessert);
	cout << "I have some delicous " << dessert << " for you " << name << endl;
	return 0;
}