#include<iostream>
using namespace std;

struct job {
	char name[10];
	double salary;
	int floor;
};

void show(job& j);

template<typename T>
void Swap(T& a, T& b);


template<> void Swap<job>(job& j1, job& j2);

void Swap(int a, int b);

int main() {
	using namespace std;

	cout << "hello world!";

	job rose = { "rose",1100,11 };
	job jack = { "jack",1000,10 };
	cout << "before swap: \n";
	show(rose);
	show(jack);
	cout << "after swap: " << endl;
	// Swap(rose, jack);
	// show(rose);
	// show(jack);

	// 显示具体化模板
	Swap(rose, jack);
	show(rose);
	show(jack);

	cout << "  ================";
	int a = 10;
	int b = 20;
	Swap(a, b);


	return 0;
}

void show(job& j) {
	using namespace std;
	cout << j.name << "  " << j.salary << "  " << j.floor << endl;
}


void Swap(int a, int b) {
	cout << "use base : " << endl;
}

template<typename T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<> void Swap<job>(job& j1, job& j2) {
	double a;
	int b;
	a = j1.salary;
	j1.salary = j2.salary;
	j2.salary = a;

	b = j1.floor;
	j1.floor = j2.floor;
	j2.floor = b;
}