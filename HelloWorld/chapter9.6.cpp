#include "support.h"
using namespace std; 

void update(double dt) {
	warming += dt;
	cout << "Updating warming to " << warming << " degrees." << endl;
}

void local() {
	double warming = 0.8;
	cout << "Local warming is " << warming << " degrees." << endl;
		cout << "Globle warming is: " << warming << " degrees." << endl;

}