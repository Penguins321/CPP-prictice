#include<iostream>
struct box
{
	char maker[40];
	float height;
	float widght;
	float length;
	float volume;
};
using namespace std;

void show(box x);
void set(box* y);

int main() {
	 box b;
	 strcpy_s(b.maker,40, "ouyang");
	 b.height = 3;
	 b.widght = 4;
	 b.length = 5;
	 b.volume = 0;
	 show(b);
	 set(&b);
	 cout << "=======================" << endl;
	 show(b);
	 return 0;
}

void show(box x) {
	for (int i = 0; i < 40; i++) {
		cout << x.maker[i] ;
	}
	cout << endl;
	cout << x.height << endl;
	cout << x.widght << endl;
	cout << x.length << endl;
	cout << x.volume << endl;
}

void set(box* y) {
	y->volume = y->widght * y->length * y->height;
}


