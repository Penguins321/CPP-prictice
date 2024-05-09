#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int* test();

int main() {

	int* pss;
	pss = test();
	cout << "value is : " << *pss  << " at " << pss << endl;
	//delete[] pss;
	vector<int> aa(*pss);
	aa[0] = *pss;
	cout << aa[0] << endl;
	return 0;
}

int* test() {

	int pp;
	cout << "Enter your date: ";
	cin >> pp;
	int* pa = new int[pp];
	pa[0] = pp;
	return pa;
}