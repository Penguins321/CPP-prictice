#include<iostream>
int stonetolb(int);

int main() {
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: " << endl; 
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone =";
	cout << pounds << " pounds ";
	return 0;
}

int stonetolb(int n) {
	return	n = 14 * n;
	
}