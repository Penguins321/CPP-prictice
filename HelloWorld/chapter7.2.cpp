#include<iostream>
void cheers(int);
double cube(double x);
int main() {
	using namespace std;
	cheers(5);
	cout << "give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " vubic feet.\n";
	cheers(cube(2));
	return 0;


}

void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! " << endl;
	}
}

double cube(double x) {
	return x * x * x;
}