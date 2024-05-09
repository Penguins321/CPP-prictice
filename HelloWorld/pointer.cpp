#include<iostream>
int main() {
	using namespace std;

	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Values: updates = " << updates << endl;
	cout << "Values: *p_updates = " << *p_updates << endl;

	cout << "Address: updates = " << &updates << endl;
	cout << "Address: *p_updates = " << p_updates << endl;

	*p_updates = 1 + *p_updates;
	cout << "Now updates = " << updates << endl;
	return 0;

}