#include "chapter9_1.h"

const int SIZE = 2;
int main() {
	using namespace std;

	golf g[SIZE];
	int count = 0;
	cout << "enter the golf players: " << endl;
	
	while ((count < SIZE) && (setgolf(g[count]))) {
		cout << "please enter next player information: " << endl;
		count++;
	}

	cout << endl;
	std::cout << "show all golf players information: " << endl;
	for (int i = 0; i < count; i++) {
		showgolf(g[i]);
	}

	return 0;
}