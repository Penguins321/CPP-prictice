#include<iostream>
#include<ctime>
int main() {
	using namespace std;

	cout << "Enter the delay time,in seconds: ";
	float sec;
	cin >> sec;
	clock_t delay = sec * CLOCKS_PER_SEC;
	clock_t start = clock();

	while (clock()-start < delay)
	{

	}
	cout << "done \a\n";
	return 0;


	/*cout << "start: \n";
	clock_t t = clock();
	long tt = t / CLOCKS_PER_SEC;
	while (tt<10)
	{
		t = clock();
		tt = t / CLOCKS_PER_SEC;
	}
	cout << " stop: \n"; */
	return 0;
}