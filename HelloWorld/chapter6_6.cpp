#include<iostream>
#include<string>
using namespace std;
/*��дһ�����򣬼�¼��������ά���Ϸ�Ȩ�����塱���ʽ𡣸ó���Ҫ���û������������Ŀ��Ȼ��Ҫ���û�����ÿһ�������ߵ������Ϳ����Щ��Ϣ��������һ����̬����Ľṹ�����С�ÿ���ṹ��������Ա�����������������ַ����飨��string���󣩺������洢�����double��Ա����ȡ���е����ݺ󣬳�����ʾ���о���10000�ľ���ߵ�����������������б�ǰӦ����һ�����⣬ָ������ľ��������Ҫ����ˣ�Grand Patrons����Ȼ�󣬳����г������ľ���ߣ����б�Ҫ��Patrons��ͷ�����ĳ�����û�о���ߣ�����򽫴�ӡ���ʡ�none�����ó���ֻ��ʾ��������𣬶�����������*/
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