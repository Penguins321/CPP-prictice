#include<iostream>

const int Maxsize = 10;

int input(double ar[],int size);
void show(double ar[],int count);
double calculateAverage(double ar[],int count);


int main() {
	using namespace std;

	double golfcore[Maxsize];

	// ��������
	int count = input(golfcore[Maxsize], Maxsize);

	//չʾ����
	show(golfcore[Maxsize], count);

	//��ȡƽ��ֵ
	if (count > 0) {
		double average = calculateAverage(golfcore[Maxsize],int count);
		cout << average << endl;
	}
	else
		cout << "no score" << endl;

	return 0;

	
}


int input(double ar[], int size) {
	int i = 0;
	while (i< size && cin >> ar[i]) {
		cout << "next value: " << endl;
		i++;
	}
	return i;
}

void show(double ar[], int count) {
	if (cout > 0) {
		for (int i = 0; i < count; i++) {
			cout << ar[i] << endl;
		}
	}
}

double calculateAverage(double ar[],int count) {
	double sum = 0;
	
		for (int i = 0; i < count; i++) {
			sum += ar[i];
		}
		return  sum / count;
}