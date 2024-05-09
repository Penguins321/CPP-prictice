#include<iostream>
int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "ENter the step;";
	int step;
	cin >> step;

	cout << "Counting by " << step << "s:\n";
	for (int i = 0; i < 100; i = i + step)
		cout << i << endl;
	return 0;
}