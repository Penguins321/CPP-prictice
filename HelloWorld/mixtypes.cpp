#include<iostream>
struct antarctica_years_end {
	int year;
};
int main() {
	
	antarctica_years_end s01, s02, s03;

	s01.year = 1998;

	antarctica_years_end* pa = &s02;    //ָ��ṹ��ָ��
	pa->year = 1999;				//��ӳ�Ա�����

	antarctica_years_end trio[3]; // �����ṹ����

	trio[0].year = 2003;

	(trio + 1)->year = 2004;
	*(trio + 1)->year = 2004;

	// ����ָ������
	const antarctica_years_end* arp[3] = [&s01, &s02, &s03];
	std::cout << arp[1]->year << std::endl;

	//����ָ�����������ָ��
	const antarctica_years_end** ppa = arp;





}