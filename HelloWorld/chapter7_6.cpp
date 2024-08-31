#include<iostream>

const int Max = 10;
int Fill_array(double ar[], int size);
void Show_array(double ar[], int size);
void Reverse_array(double ar[], int size);

int main() {
	using namespace std;
	   
	double testArray[Max];
	int count = 0;
	count = Fill_array(testArray, Max);
	cout << endl;
	if (count > 0) {
		Show_array(testArray, count);
		
		Reverse_array(testArray, count);
		Show_array(testArray, count);
		// 排除第一个和最后一个的反转
		Reverse_array(testArray+1, count-2);
		Show_array(testArray, count);
	}
	return 0;
}

int Fill_array(double ar[], int size) {
	using namespace std;
	double temp;
	int i = 0;
	cout << "enter the value: " << endl;
	while (i < size) {
		// 判断输入状态是否正确
		if (!(cin >> temp)) {
			// 清楚错误状态
			cin.clear();
			// 忽略流中错误输入
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
		ar[i] = temp;
		i++;
	}
	return i;
}

void Show_array(double ar[], int count) {
	for (int i = 0; i < count; i++) {
		std::cout << ar[i] << " ";
	}
	std::cout << "======================\n";
}

// 数组反转
void Reverse_array(double ar[], int size) {
	int i, j;
	double temp;
	for (i = 0, j = size-1; i < j; i++, j--) {
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
	std::cout << "reverse done!\n";
}
