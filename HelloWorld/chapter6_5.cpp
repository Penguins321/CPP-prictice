#include<iostream>
#include<stdlib.h>
int main() {
	using namespace std;

	int tvarps = 0;

	cout << "please enter your number: " << endl;
	// cin >> tvarps;

	if (!(cin >> tvarps) || tvarps < 0) {
		cout << "please enter right value!" << endl;
		exit(EXIT_FAILURE);
	} 
	if (tvarps <= 5000) {
		cout << "your tvarps is : " << 0 << endl;
	}
	else if (tvarps > 5000 && tvarps <= 15000) {
		cout << "your tvarps is : " << (tvarps - 5000) * 0.1 << endl;
	}
	else if (tvarps > 15000 && tvarps <= 35000) {
		cout << "your tvarps is : " << (tvarps - 15000) * 0.15 + 10000 * 0.1 << endl;
	}
	else {
		cout << "your tvarps is : " << (tvarps - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1 << endl;
		
	}
	return 0;
}