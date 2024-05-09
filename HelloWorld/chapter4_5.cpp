#include<iostream>

int main() {
	using namespace std;
	char namef[20];
	char namel[20];
	char grade;
	int age;

	cout << "What is your first name: ";
	cin.getline(namef, 20);
	cout << "What is your last name: ";
	cin.getline(namel, 20);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	grade++;
	cout << "Name: " << namel << ", " << namef << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age;
	return 0;

}