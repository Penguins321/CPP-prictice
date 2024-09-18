#include "chapter9_11.h"

namespace pers {
	//ע��˴���using������debts�в�δ����
	using std::cin;
	using std::cout;

	void getPerson(Person& rp) {
		cout << "enter the first name: ";
		cin >> rp.fname;
		cout << "enter the last name: ";
		cin >> rp.lname;
	}

	void showPerson(const Person& rp) {
		cout << rp.lname << " , " << rp.fname << std::endl;
	}
}

namespace debts {
	void showDebts(const Debts& rd) {
		showPerson(rd.name);
		cout << "amount : " << rd.amount << std::endl;
	}
}