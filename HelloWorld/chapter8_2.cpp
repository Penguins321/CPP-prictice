#include<iostream>
using namespace std;

struct CandyBar {
	char name[40];
	double weight;
	int energe;
};

// 注意：const char* arr = "Millenium"  字符串字面量是常量字符串
void  fill(CandyBar& ca, const char* arr = "Millennium Munch", double a = 2.85, int b = 350);
void Show(const CandyBar& ca);


int main() {

	CandyBar c;
	fill(c);
	Show(c);
	return 0;
}

void fill(CandyBar& ca,const char* arr , double a, int b ) {
	int i = 0;
	while (arr[i] != '\0' && i < 49) {
		ca.name[i] = arr[i];
		i++;
	}
	ca.name[i] = '\0';

	ca.weight = a;
	ca.energe = b;
}

void Show(const CandyBar& ca) {
	cout << ca.name << endl;
	cout << ca.weight << endl;
	cout << ca.energe << endl;
}