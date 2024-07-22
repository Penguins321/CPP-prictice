#include<iostream>
#include<cctype>

int main() {
	using namespace std;

	int countothers = 0;
	int vowels = 0;
	int consonants = 0;

	char arr[10];

	cout << "enter words:(q to quit)" << endl;
	cin.getline(arr, 10);
	if (sizeof(arr)>0) {
		while (arr[0] != 'q') {
			if (!isalpha(arr[0])) {
				countothers++;
			}
			else {
				if (arr[0] == 'a' || arr[0] == 'e' || arr[0] == 'i' || arr[0] == 'o' || arr[0] == 'u') {
					vowels++;
				}
				else {
					consonants++;
				}
			}
			cout << "vowels: " << vowels << endl
				<< "consonants: " << consonants << endl
				<< "othes: " << countothers << endl
				<< "============" << endl;
			cin.getline(arr, 10);
		}

	}
	cout << "vowels: " << vowels << endl
		<< "consonants: " << consonants << endl
		<< "othes: " << countothers << endl;

	return 0;

	  
}