#include<iostream>
struct traval_time {
	int hour;
	int mins;
};
const int Mins_per_hr = 60;

traval_time sum(traval_time t1, traval_time t2);
void show_time(traval_time t);
int main() {
	using namespace std;

	traval_time day1 = { 5,45 };
	traval_time day2 = { 4,55 };
	traval_time trip = sum(day1, day2);
	cout << "two-day total: ";
	show_time(trip);

	traval_time day3 = { 4,32 };
	cout << "three-day total: ";
	show_time(sum(trip, day3));
	return 0;
}

traval_time sum(traval_time t1, traval_time t2) {
	traval_time total;
	int hour, mins;
	hour = t1.hour + t2.hour + (t1.mins + t2.mins) / Mins_per_hr;
	mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hour = hour;
	total.mins = mins;
	return total;
}

void show_time(traval_time t) {
	using namespace std;
	cout << "hour: " << t.hour << endl;
	cout << "mins: " << t.mins << endl;
}