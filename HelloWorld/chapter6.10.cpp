#include<iostream>
#include<cctype>
using namespace std;
void showmenu();
void report();
void comfort();
void test();

int main() {
	showmenu();
	int choice;
	cin >> choice;
		while (5 != choice)
		{
			switch (choice)
			{
			case 1: cout << "\a\n";
				break;
			case 2: report();
				break;
			case 3: cout << "The boss was in all day.\n";
				break;
			case 4: comfort();
				break;
			default:cout << "that is not a choice.\n";
			}
			showmenu();
			cin >> choice;
		}
	cout << "bye!\n";
	return 0;
}

void showmenu() {
	cout << "please enter 1,2,3,4, or 5:\n"
		"1)alarm               2)report\n"
		"3)alibi                4)comfort\n"
		"5)quit\n";
}

void report() {
	cout << "it is been an excellent week for business.\n"
		"sales are up 120%. expenses are down 35%.\n";
}

void comfort() {
	cout << "your employees think you are the dinest CEO\n"
		"in the industry. the board od diewctores think\n"
		"you are the finest CEO in the industry.\n";
}

void test() {
	char choice;
	cin >> choice;
	while (choice != 'Q' && choice != 'q') {
		switch (choice)
		{
		case 'a':
		case 'A':cout << "\a\n";
			break;
		case 'b':
		case 'B':report();
			break;
		default:
			break;
		}
	}
}