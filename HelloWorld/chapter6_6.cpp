#include<iostream>
#include<string>
using namespace std;
/*编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来储存姓名的字符数组（或string对象）和用来存储款项的double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款者是重要捐款人（Grand Patrons）。然后，程序将列出其他的捐款者，该列表要以Patrons开头。如果某种类别没有捐款者，则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。*/
struct donate {
	string name;
	double money;
};

int main() {
	
	int ArSize = 0;
	int countup = 0;
	int countdown = 0;
	int i = 0;

	cout << "please enter the number: " << endl;
	cin >> ArSize;

	
	donate* arr = new donate[ArSize];
	for (i; i < ArSize; i++) {
		cout << "enter the " << i + 1 << "data: " << endl;
		cin >> arr[i].name;
		cin >> arr[i].money;
		if (arr[i].money > 10000) {
			countup++;
		}else
		{
			countdown++;
		}
	}
	int j = 0;
	if (countup > 0) {
		cout << "Grand patrons : " << endl;
		for (j; j < ArSize; j++) {
			if (arr[j].money > 10000) {
				cout << arr[j].name << " " << arr[j].money << endl;
			}
		}
	}
	else {
		cout << "Grand patrons : None" << endl;
	}
	int k = 0;
	if (countdown > 0) {
		cout << " patrons : " << endl;
		for (k; k < ArSize; k++) {
			if (arr[k].money <= 10000) {
				cout << arr[k].name << " " << arr[k].money << endl;
			}
		}
	}
	else {
		cout << " patrons : None" << endl;
	}
	return 0;
	 
}