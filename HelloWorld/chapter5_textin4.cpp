#include<iostream>
int main() {
	using namespace std;

	int ch;
	int count = 0;
	ch = cin.get();
	while (ch != EOF)
	{
		cout.put(ch);
		++count;
		ch = cin.get();
	}
	cout << "count is " << count;
	return 0;
}