#ifndef __CHAPTER9_11__
#define __CHAPTER9_11__

#include<iostream>
namespace pers {
	struct Person {
		std::string fname;
		std::string lname;
	};

	void getPerson(Person& rp);
	void showPerson(const Person& rp);
}

namespace debts {
	using namespace pers;

	struct Debts {
		Person name;
		double amount;
	};

	void showDebts(const Debts& rd);
}



#endif