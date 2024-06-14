#include<iostream>
#include<fstream>
int main() {
	using namespace std;

	char automobile[50];
	int year;
	double a_peice;
	double d_peice;

	ofstream outFile;
	outFile.open("outFileTest.txt");

	cout << "enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "enter the model year: ";
	cin >> year;
	cout << "enter the original asking price: ";
	cin >> a_peice;
	d_peice = 0.913 * a_peice;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "year: " << year << endl;
	cout << " was asking $" << a_peice << endl;
	cout << "now asking $" << d_peice << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "make and model: " << automobile << endl;
	outFile << "year: " << year << endl;
	outFile << "was asking $" << a_peice << endl;
	outFile << "now asking $" << d_peice << endl;

	outFile.close();
	return 0;

	
}