#include<iostream>

extern int tom;
static int dick = 20;
int harry = 200;

void remote_access(){
	using namespace std;

	cout << "remote_access() reports the following addresses: " << endl;
	cout << "&tom = " << &tom << "  " << "&dick = " << &dick << "  " << "&harray = " << &harry << endl;
}