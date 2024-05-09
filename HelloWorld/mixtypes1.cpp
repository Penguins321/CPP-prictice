#include<iostream>
struct antarctica_year_end {
	int year;
};

int main() {
	antarctica_year_end s01, s02, s03;
	s01.year = 1998;
	antarctica_year_end* pa = &s02;
	pa->year = 1999;

	antarctica_year_end trio[3];
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;

	const antarctica_year_end* arp[3] = { &s01,&s02,&s03 };   // 指针数组
	std::cout << arp[1]->year << std::endl;

	// 指向指针数组的指针(此处两种表示，可以指向整个指针数组，也可以指向指针数组的首地址)
	const antarctica_year_end** ppa = arp;    //指向指针的指针，第一个*表示指针类型
	//const antarctica_year_end*(* ppa)[3] = &arp;
	auto ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppa + 1))->year << std::endl;
	return 0;
}