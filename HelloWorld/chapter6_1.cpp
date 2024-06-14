#include<iostream>
#include<cctype>
int main() {
	using namespace std;

	char ch;
	while ((cin >> ch )&& ch != '@') {
		if (!isdigit(ch)) {
			if (islower(ch))
				ch = toupper(ch);
			else if (isupper(ch))
				ch = tolower(ch);
			cout << "ch is: " << ch << endl;
		}
		else
		{
			cout << "dont enter integer";
		}
	}
	return 0;
}