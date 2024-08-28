#include<iostream>
double betsy(int);
double pam(int);
void estimate(int lines, double (*pf)(int));

int main() {
	using namespace std;

	int code;
	cout << "enter the code: " << endl;
	cin >> code;
	cout << "the betsy: " << endl;
	estimate(code, betsy);
	cout << "the pam: \n";
	estimate(code, pam);
	return 0;
}

double betsy(int lns) {
	return 0.05 * lns;
}

double pam(int lns) {
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {

	using namespace std;

	cout << lines << " will be take";
	cout << endl;
	cout << (*pf)(lines) << " hours\n";

}