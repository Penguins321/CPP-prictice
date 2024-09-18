#include<iostream>

using namespace std;

struct chaff {
	char dross[20];
	int slag;
};

const int BUF = 512;
int buffer[BUF];

void showchaff(const chaff& a);
int main() {

	char dross[20];
	int slag;
	chaff* dp1 = new chaff[2];
	chaff* dp2 = new(buffer) chaff[2];
	
	// 填充结构体数组
	for (int i = 0; i < 2; i++) {
		cout << "enter dross : " << endl;
		cin.getline(dross, 20);
		cout << "enter slag: ";
		cin >> slag;
		cin.get();
		strcpy_s(dp1[i].dross, dross);
		strcpy_s(dp2[i].dross, dross);
		dp1[i].slag = dp2[i].slag = slag;
	}

	for (int i = 0; i < 2; i++) {
		showchaff(dp1[i]);
		showchaff(dp2[i]);
	}
	delete[] dp1;
	return 0;
}

void showchaff(const chaff& a) {
	cout << "dross: " << a.dross << endl;
	cout << "slag: " << a.slag  << endl;
}