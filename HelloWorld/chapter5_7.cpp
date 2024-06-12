
#include<iostream>
#include<string>
using namespace std;

struct car {
	string name;
	int produceYear;
};
int main() {
	int num,i;
	cout << "how many cars do you wish to catalog : "; 
	cin >> num;
	cin.ignore();
	car* pc = new car[num];
	for (i = 0; i < num; ++i) {
		cout << "Car #" << i +1 << " : " << endl;
		cout << "Please enter the make : ";
		getline(cin, pc[i].name);
		cout << "Please enter the year made: ";
		cin >> pc[i].produceYear;
		cin.ignore();
	}
	int j;
	cout << "Here is your collection: " << endl;
	for (j = 0; j < num; ++j) {
		cout << pc[j].produceYear << " " << pc[j].name << endl;
	}
	return 0;
}