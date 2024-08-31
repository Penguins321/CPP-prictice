#include<iostream>
const int Max = 5;
double* fill_array(double* start, double* end);          
void show_array( double* start,  double* end);
void revalue(double r, double* start, double* end);

int main() {
	using namespace std;
	double properties[Max];
	double* pt;

	pt = fill_array(properties, properties+Max);
	show_array(properties, pt);
	if (pt > properties) {
		cout << "enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input;please enter a number: ";
		}
		revalue(factor, properties, pt);
		show_array(properties, pt);
	}
	cout << "done,\n";
	cin.get();
	cin.get();
	return 0;
}



double* fill_array(double* start, double* end) {
	using namespace std;
	double temp;
	double* pt;
	double* pr;
	for (pt = start,pr = end; pt != pr; ++pt) {
		cout << "enter value #" << (pt-start +1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;input ptocess terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*pt = temp;
	}
	return pt;
}

void show_array(double* start, double* end) {
	using namespace std;
	double* pt;
	double* pr;
	int i = 0;
	for (pt = start, pr = end; pt != pr; ++pt, i++) {
		cout << "property #" << (i + 1) << ": $";
		cout << *pt << endl;
	}
}

void revalue(double r, double* start, double* end) {
	double* pt;
	double* pr;
	for (pt = start, pr = end; pt != pr; ++pt)
		*pt *= r;
}