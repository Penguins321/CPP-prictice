#include<iostream>
#include<cmath>

int main() {
	using namespace std;

	double area;
	cout << "Enter the floor area,in square feet , of your home ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "that`s the equivalent if a square " << side
		<< "feet to the side," << endl
		<< "How fascinating! " << endl;
	return 0;


}