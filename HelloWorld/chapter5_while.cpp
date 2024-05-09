#include<iostream>
const int ArSize = 20;
int main() {
	using std::cin;
	using std::cout;

	char name[ArSize];

	cout << "Enter your name:";
	cin >> name;

	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << " ASCII: " << int(name[i]) << "\n";
		++i;
	}
	return 0; 
}