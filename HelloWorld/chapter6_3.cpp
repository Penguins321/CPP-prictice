#include<iostream>
#include<string>
int main() {
	using namespace std;

	cout << "enter the choice: \n"
		"c)carnivore           p)pianist \n"
		"t) tree               g)game\n";
	cout << "please enter a c,p,t, or g: ";

	char ch;
	cin >> ch;
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g') {
		cout << "please enter a c,p,t, or g: ";
		cin >> ch;
	}


	string temp;
	switch (ch) {
	case 'c': temp = "carnivore";
		break;
	case 'p': temp = "poanist";
		break;
	case 't': temp = "tree";
		break;
	case 'g': temp = "game";
	default:
		break;
	}
	cout << "A maple is a " << temp << "." << endl;
	return 0;
}