#include<iostream>
#include<fstream>
/*编写一个程序，它打开一个文件文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个字符。*/

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