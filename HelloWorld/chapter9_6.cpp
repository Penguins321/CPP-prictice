#include "chapter9_sales.h"

namespace SALES {

	using namespace std;

	void setSales(Sales& s, const double ar[], int n) {
		if (n == 0) {
			s.max = 0;
			s.min = 0;
			s.average = 0;
		}
		else {
			double sum = 0;
			for (int i = 0; i < n; i++) {
				s.sales[i] = ar[i];
				sum += ar[i];
			}
			s.max = ar[0];
			s.min = ar[0];
			for (int i = 0; i < n; i++) {
				s.max = s.max < ar[i] ? ar[i] : s.max;
				s.min = s.min < ar[i] ? s.min : ar[i];
			}
			s.average = sum / n;
		}
	}
	void setSales(Sales& s) {
		cout << "enter sales: ��s to end input��";
		int index = 0;
		double sum = 0;
		// todo
		while (index < QUARTERS && cin >> s.sales[index]) {
			sum += s.sales[index];
			index++;
		}
		// ���벻��4��ʱ��������0���
		for (int i = index; i < QUARTERS; i++)
			s.sales[i] = 0;

		s.max = s.sales[0];
		s.min = s.sales[0];

		for (int i = 0; i < index; i++) {
			s.max = s.sales[i] < s.max ? s.max : s.sales[i];
			s.min = s.min < s.sales[i] ? s.min : s.sales[i];
		}

		// ����ƽ��ֵ
		if (index > 0) {
			s.average = sum / index;
		}
		else {
			s.average = 0;
		}

		// ����������Ĵ���״̬���Ա�֮����Լ�������
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	void showSales(const Sales& s) {
		cout << "sales: " << endl;
		// �˴�QUATERS�滻Ϊsizeof������ȡ�����С���������ִ���
		for (int i = 0; i < QUARTERS; i++) {
			cout << s.sales[i] << " ";
		}
		cout << endl;
		cout << "average: " << s.average << endl;
		cout << "max: " << s.max << endl;
		cout << "min: " << s.min << endl;
	}
}