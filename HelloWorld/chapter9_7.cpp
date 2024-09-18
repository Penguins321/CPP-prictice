#include "chapter9_sales.h"

using namespace std;
using namespace SALES;

int main() {
	Sales s1;
	Sales s2;

	double arr[QUARTERS] = { 2.0,4.0,6.0,8.0 };

	setSales(s1, arr, QUARTERS);
	setSales(s2);
	showSales(s1);
	showSales(s2);
	return 0;
}