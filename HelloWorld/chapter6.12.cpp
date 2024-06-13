#include<iostream>
const int ArSize = 68;
int main() {  
	using namespace std;
	char line[ArSize];
	int spaces = 0;

	cout << "enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "complete line:\n" << line << endl;
	cout << "line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;

	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
	return 0;
}