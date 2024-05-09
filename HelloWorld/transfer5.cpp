#include<iostream>
int main() {
	using namespace std;

	long long worldPopulation;
	long long usPopulation;
	

	cout << "Enter the world`s population:";
	cin >> worldPopulation;
	cout << "Enter the US`s population:";
	cin >> usPopulation;

	long double persent = long double(usPopulation) / long double(worldPopulation) *100;

	cout << "The population of the US is " << persent << "% of the world population." << endl;
	cin.get();
	return 0;
}