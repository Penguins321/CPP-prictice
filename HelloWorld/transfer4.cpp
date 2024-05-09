#include<iostream>
int main() {
	using namespace std;

	const int day_per_hour = 24;
	const int hour_per_minutes = 60;
	const int minutes_per_seconds = 60;
	const long day_per_seconds = day_per_hour * hour_per_minutes * minutes_per_seconds;

	long  inputSeconds;

	cout << "Enter the number of seconds:";
	cin >> inputSeconds;

	long day = inputSeconds / day_per_seconds;
	long hour = inputSeconds % day_per_seconds / (hour_per_minutes * minutes_per_seconds);
	long minutes = inputSeconds % day_per_seconds % (hour_per_minutes * minutes_per_seconds) / minutes_per_seconds;
	long seconds = inputSeconds % day_per_seconds % (hour_per_minutes * minutes_per_seconds) % minutes_per_seconds;

	cout << inputSeconds << " seconds = " << day << " days, " << hour << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
	cin.get();
	return 0;
}