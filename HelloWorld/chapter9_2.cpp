#include "chapter9_1.h"

void setgolf(golf& g, const char* name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g) {
	using namespace std;
	int flag = 1;
	cout << "please enter fullname : " << endl;
	cin.getline(g.fullname, Len);
	if (strcmp(g.fullname, "") == 0) {
		flag = 0;
		return flag;
	}
	else {
		cout << "enter the handicp: " << endl;
		cin >> g.handicap;
		// ÏûºÄ»»ÐÐ·û
		cin.get();
		return flag;
	}
};
void handicap(golf& g, int hc) {};

void showgolf(const golf& g) {
	std::cout << g.fullname << std::endl;
	std::cout << g.handicap << std::endl;
}