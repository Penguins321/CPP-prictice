#include<iostream>
#include<cstring>
int main() {
	using namespace std;


	char inputStr[20];
	char doneStr[101] = {"done"};
	int count = 0;
	
	cout << "Enter words (to stop , type the word done)" << endl;
	cin.getline(inputStr,20);
	while (strcmp(inputStr, doneStr) != 0) {
		count++;
		cin.getline(inputStr, 20);
	}
	cout << "you enterd a total of " << count << " words." << endl;
	cin.get();
	return 0;
}