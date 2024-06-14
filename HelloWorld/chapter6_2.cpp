#include<iostream>
#include<cctype>

const int ArSize = 10;
int main() {
	using namespace std;

	double donation[ArSize];
	double temp;
	double average = 0;
	int i, count = 0;
	double sum = 0;
	int countup = 0;

	cout << "enter your number: ";
	cin >> temp;
	for (i = 0; i < ArSize; i++) {
		if (isdigit(temp)) {
			donation[i] = temp;
			sum += temp;
			count++;
			cin >> temp;
		}
		else
			break;
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

}