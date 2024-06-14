#include<iostream>

const int ArSize = 10;
int main() {
	using namespace std;

	double donation[ArSize];
	double average = 0;
	int i, count = 0;
	double sum = 0;
	int countAboveAverage = 0;
	double temp;

	cout << "enter your number: ";
	while (count < ArSize && cin >> temp) {
		donation[i] = temp;
		count++;

	}

	// ±éÀúÊı×é
	if (count != 0) {
		average = sum / count;
		
		for (int i = 0; i < count; i++)
		{
			if (donation[i] > average)
				countup++;
		}
	}
	cout << "average: " << average << " \n";
	cout << "upper: " << countup << endl;
	return 0;
