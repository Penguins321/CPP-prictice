#include<iostream>
#include<string>

int main() {
	using namespace std;

	cout << "enter number of rows: " << endl;
	int rows;
	string dot = ".";
	string star = "*";
	cin >> rows;
	int i, j,k;
	for (i = 0; i < rows; ++i) {
		for (j =  rows-i-1; j > 0;j--) {
			cout << dot;
		}
		for (k = 0; k < i+1; ++k) {
			cout << star;
		}

		cout << endl;
	}

}