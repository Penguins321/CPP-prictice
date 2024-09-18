#include<iostream>

double cube(double a);
double recube(double& ra);

int main() {
	using namespace std;

	double x = 3.0;
	

	cout << cube(x) << " cube of " << x << endl;
	cout << recube(x) << " recube of " << x << endl;

	return 0;
}

double cube(double a) {
	a *= a * a;
	return a;
}

double recube(double& ra) {
	//return ra * ra * ra;
	ra *= ra * ra;
	return ra;
}