#include<iostream>
int main() {
	using namespace std;

	const double degrees_per_minutes = 60;
	const double minutes_per_second = 60;

	int degrees;
	int minutes;
	int seconds;

	cout << "Enter a latitude in degrees,minutes , seconds;" << endl;
	cout << "First,enter the degrees:";
	cin >> degrees;
	cout << "Next,enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally , enter the seconds of arc:";
	cin >> seconds;

	double minutesStamp = seconds / minutes_per_second / degrees_per_minutes;
	double degreesStamp = minutes / degrees_per_minutes;
	double finallyStamp = double(degrees) + minutesStamp + degreesStamp;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
		<< finallyStamp << " degrees" << endl;
	cin.get();
	return 0;
}