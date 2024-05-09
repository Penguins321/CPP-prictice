#pragma warning( disable : 4996)  
#include<iostream>
#include<cstring>
using namespace std;
int main() {

	char firstname[20];
	char lastname[20];

	cout << "Enter your first name:";
	cin.getline(firstname, 21);
	cout << "Enter your last name:";
	cin.getline(lastname, 21);

	strcat(lastname, ", ");
	strcat(lastname, firstname);
	cout << "Here's the information in a single string:  " << lastname << endl;
	return 0;
}