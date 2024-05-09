#include<iostream>
void funca(int ,int);
using namespace std;

int main() {
	
	int x;
	int y;
	cout << "Enter the number of hours: " ;
	cin >> x;
	cout << endl;
	cout << "Enter the number of minutes: ";
	cin >> y;
	cout << endl;
	funca(x, y);

	cin.get();
	cin.get();
	return 0;
}

void funca(int n,int m) {
	cout << "Time: " << n << ":" << m << endl;
}

