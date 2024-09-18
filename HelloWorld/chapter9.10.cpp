// 使用new定位运算符
#include<iostream>
#include<new>

const int BUF = 512;
const int N = 5;
double buffer[BUF];

int main() {
	using namespace std;

	double* pd1, * pd2;

	cout << "Calling new and placement new;\n";
	pd1 = new double[N];
	pd2 = new(buffer) double[N];
	int i;
	for (i = 0; i < N; i++) {
		pd1[i] = pd2[i] = 1000.0 + 20.0 * i;
		cout << "pd1 value: " << pd1[i] << " &pd1 = " << &pd1[i] << "  " << "pd2 value: " << pd2[i] << " &pd2 = " << &pd2[i] << endl;
	}

	cout << "Calling new and placement new a second time;\n";
	double* pd3, * pd4;
	pd3 = new double[N];
	pd4 = new(buffer) double[N];
	for (i = 0; i < N; i++) {
		pd3[i] = pd4[i] = 1000.0 + 40.0 * i;
		cout << "pd3 value: " << pd3[i] << " &pd3 = " << &pd3[i] << "  " << "pd4 value: " << pd4[i] << " &pd4 = " << &pd4[i] << endl;
	}

	cout << "Calling new and placement new a third time;\n";
	delete[] pd1;
	pd1 = new double[N];
	pd2 = new(buffer + N*sizeof(double)) double[N];
	for (i = 0; i < N; i++) {
		pd1[i] = pd2[i] = 1000.0 + 20.0 * i;
		cout << "pd1 value: " << pd1[i] << " &pd1 = " << &pd1[i] << "  " << "pd2 value: " << pd2[i] << " &pd2 = " << &pd2[i] << endl;
	}
	delete[] pd1;
	delete[] pd3;
	return 0;
}