#include<iostream>
long double probability(unsigned numbers1, unsigned number2, unsigned picks1, unsigned picks2);

int main() {
	using namespace std;

	double total1, choices1,total2,choice2;
	cout << "enter: " << endl;
	while ((cin >> total1 >> choices1 >> total2 >> choice2) && choices1 <= total1 && choice2 <= total2) {
		cout << "you have one chance in ";
		cout << probability(total1, choices1,total2, choice2);
		cout << " of winning.\n";
		cout << "next four numbers(q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers1,unsigned picks1, unsigned numbers2,unsigned picks2) {
	long double result1 = 1.0;
	long double result2 = 1.0;
	long double n1,n2;
	unsigned p1,p2;

	for (n1 = numbers1, p1 = picks1; p1 > 0; n1--, p1--) {
		result1 = result1 / n1;
	}

	for (n2 = numbers2, p2 = picks2; p2 > 0; n2--, p2--) {
		result2 = result2  / n2;
	}
	return result1 * result2;

}
