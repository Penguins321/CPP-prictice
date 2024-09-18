#include<iostream>
#include<cstring>

using namespace std;

struct stringy {
	char* str;
	int ct;
};

void set(stringy& a, const char arr[]);

void show(const stringy& a, int n = 1);
void show(const char arr[], int n = 1);

int main() {
	stringy beany;
	char testing[] = "Reality isn`t what it used to be.";

	set(beany, testing);

	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	// 动态内存空间用完记得清除
	delete[] beany.str;
	return 0;
}

void set(stringy& a,const char arr[]) {
	a.ct = strlen(arr);
	// 动态内存的开辟不熟练
	a.str = new char[a.ct + 1];
	strcpy_s(a.str,a.ct + 1, arr);
	
}

void show(const stringy& a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "# " << i + 1 << " print: " << endl;
		cout << a.str << "  " << a.ct << "  " << endl;
	}
}


void show(const char arr[], int n) {
	int i = 0;
	while (n--) {
			// 错用for循环来输出多次，字符数组可直接输出
			cout << "# " << i + 1 << " print: " << endl;
			i++;
			cout << arr << endl;
			cout << endl;
	}
}