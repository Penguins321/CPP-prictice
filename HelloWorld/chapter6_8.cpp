#include<iostream>
#include<fstream>
/*��дһ����������һ���ļ��ļ�������ַ��ض�ȡ���ļ���ֱ�������ļ�ĩβ��Ȼ��ָ�����ļ��а������ٸ��ַ���*/

int main() {
	using namespace std;

	ifstream ifs;
	ifs.open("chapter6_8.txt");
	char str;
	int count = 0;
	while (ifs>>str)
	{
		count++;
	}
	cout << count << endl;
	ifs.close();
	return 0;
	
	
}