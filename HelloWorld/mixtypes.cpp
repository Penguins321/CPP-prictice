#include<iostream>
struct antarctica_years_end {
	int year;
};
int main() {
	
	antarctica_years_end s01, s02, s03;

	s01.year = 1998;

	antarctica_years_end* pa = &s02;    //指向结构的指针
	pa->year = 1999;				//间接成员运算符

	antarctica_years_end trio[3]; // 创建结构数组

	trio[0].year = 2003;

	(trio + 1)->year = 2004;
	*(trio + 1)->year = 2004;

	// 创建指针数组
	const antarctica_years_end* arp[3] = [&s01, &s02, &s03];
	std::cout << arp[1]->year << std::endl;

	//创建指向上述数组的指针
	const antarctica_years_end** ppa = arp;





}