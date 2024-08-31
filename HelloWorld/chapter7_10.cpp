#include<iostream>

// 根据用户的输入确定不同的操作
double add(double a, double b);
double subtract(double a, double b);
double calculate(double x, double y, double (*func)(double, double));

int main() {
	using namespace std;

	// 函数指针数组
	double (*pf[2])(double, double) = { add,subtract };

	double x, y;
	cout << "enter two numbers: " << endl;
	while (cin >> x >> y) {

		double result;
		for (int i = 0; i < 2; i++) {
			result = pf[i](x, y);
			cout << "result: " << result << endl;
		}
		/*cout << "enter your operator: \n";
		char operat;
		cin >> operat;
		double result;
		switch (operat) {
		case '+':  
			result = calculate(x, y, add);
			break;
		case '-':  
			result = calculate(x, y, subtract);
			break;
		default:
			cout << "enter error ";
			continue;
		}*/
		// cout << "result: " << result << endl;
	}
	return 0;
}


double add(double a, double b) {
	return a + b;
}
double subtract(double a, double b) {
	return a - b;
}

double calculate(double x, double y, double (*func)(double, double)) {
	return func(x, y);
}