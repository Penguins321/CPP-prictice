#include<iostream>
int main() {
	using namespace std;

	int nights = 1001;
	int* pt = new int;
	//delete pt;
	*pt = 1001;

	cout << "night value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int " << " Value = " << *pt << ": location " << pt << endl;
	double* pd = new double;
	*pd = 10000001.0;

	cout << "double value = " << *pd << ": location " << pd << endl;
	cout << "location of pointer:" << &pd << endl;

	cout << "sizeof pt = " << sizeof(pt) << endl
		<< "sizeof *pt = " << sizeof(*pt) << endl
		<< "sizeof pd = " << sizeof(pd) << endl
		<< "sizeof *pd = " << sizeof(*pd) << endl;
	return 0;
}