#include<iostream>

int main() {
	using namespace std;

	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: \b" << endl;
	cin >> hats;
	cout << "Enter another number: \b" << endl;
	cin >> heads;

	cout << "hats = " << hats << endl << "heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl
		<< "hats - heads = " << hats - heads << endl
		<< "hats * heads = " << hats * heads << endl
		<< "hats / heads = " << hats / heads << endl;
	return 0;
 
}