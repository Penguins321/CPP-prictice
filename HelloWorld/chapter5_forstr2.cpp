#include<iostream>
#include<string>
int main(){
	using namespace std;

	cout << "enter a word: ";
	string word;
	cin >> word;
	int i, j;
	char temp;
	for ( i = 0,j = word.size() - 1; i < j; ++i, --j) {
		temp = word[j];
		word[j] = word[i];
		word[i] = temp;
	}
	cout << word << endl;
	return 0;
}