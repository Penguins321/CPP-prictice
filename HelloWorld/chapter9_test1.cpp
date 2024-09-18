#include<iostream>
#include "chapter9_test1.h"

int main(void) {
	using std::cout;

	int a = 1;
	int b = 2;

	cout << "return int " << test1::average(a,b) << std::endl;
	cout << "return double " << test2::average(a,b) << std::endl;

	return 0;
}