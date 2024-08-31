#include<iostream>
int factoril(int x);

int main() {
	using namespace std;

	int i,n;
	cout << "enter the value: " << endl;
	cin >> i;
	n = factoril(i);
	cout << "the factoril is : " << n << endl;
	return 0;
}

int factoril(int x) {

	if (x == 1) {
		return 1;
	}
	else if (x < 0) {
		std::cout << "bad value!";
	}
	else {
		return x * factoril(x - 1);
	}
}