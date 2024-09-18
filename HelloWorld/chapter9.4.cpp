#include<iostream>
using namespace std; 
void oil(int x);

int main() {

	int texas = 31;

	cout << "in main,texas = " << texas << " , " << "&texas = " << &texas << endl;

	oil(texas);
	cout << "in main,texas = " << texas << " , " << "&texas = " << &texas << endl;

	return 0;
}

void oil(int x) {

	int texas = 5;
	cout << "in oil,texas = " << texas << " , " << "&texas = " << &texas << endl;
	// Öµ´«µÝ
	cout << "in oil,x = " << x << " , " << "&x = " << &x << endl;

	{
		//int texas = 113;
		cout << "in block,texas = " << texas << " , " << "&texas = " << &texas << endl;
	}
	cout << "Post-block,texas = " << texas << " , " << "&texas = " << &texas << endl;

}
