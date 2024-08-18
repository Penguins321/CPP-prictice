#include<iostream>
void countdown(int n);

int main() {
	using namespace std;

	int n = 5;
	countdown(n);
	return 0;
}

void countdown(int n) {
	using namespace std;

	if (n > 0) {
		countdown(n - 1);
	}
	cout << n << endl;
}