#include<iostream>
int main() {
	using namespace std;

	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	int bunnies = 50;
	// ��û�иı����õİ󶨣����Ǳ���˸�ֵ
	rodents = bunnies;
	cout << "bunnies = " << bunnies << endl;
	cout << "rodents = " << rodents << endl;
	cout << "rats = " << rats << endl;

	// ����ַ
	cout << "&bunnies = " << &bunnies << endl;
	cout << "&rodents = " << &rodents << endl;
	cout << "&rats = " << &rats << endl;
	return 0;
}