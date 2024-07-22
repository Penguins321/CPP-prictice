#include <iostream>
#include <string>

using namespace std;

const int strsize = 50; // 定义字符串长度常量

// 定义 BOP 成员结构体
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
    // 初始化 BOP 成员数据
    bop members[] = {
        {"Alice Johnson", "Senior Developer", "AlphaFox", 0},
        {"Bob Smith", "Project Manager", "BetaTiger", 1},
        {"Charlie Brown", "Data Scientist", "GammaEagle", 2},
        {"Diana Prince", "Lead Designer", "DeltaSwan", 1},
        {"Evan Stone", "Systems Architect", "EpsilonWolf", 0}
    };

    int num_members = sizeof(members) / sizeof(bop);
    char choice;

    while (true) {
        // 显示菜单
        cout << "\nBenevolent Order of Programmers Report\n";
        cout << "a. display by name\n";
        cout << "b. display by title\n";
        cout << "c. display by bopname\n";
        cout << "d. display by preference\n";
        cout << "q. quit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
        case 'a':
            cout << "\nDisplaying by name:\n";
            for (int i = 0; i < num_members; ++i) {
                cout << members[i].fullname << endl;
            }
            break;
        case 'b':
            cout << "\nDisplaying by title:\n";
            for (int i = 0; i < num_members; ++i) {
                cout << members[i].title << endl;
            }
            break;
        case 'c':
            cout << "\nDisplaying by bopname:\n";
            for (int i = 0; i < num_members; ++i) {
                cout << members[i].bopname << endl;
            }
            break;
        case 'd':
            cout << "\nDisplaying by preference:\n";
            for (int i = 0; i < num_members; ++i) {
                switch (members[i].preference) {
                case 0:
                    cout << members[i].fullname << endl;
                    break;
                case 1:
                    cout << members[i].title << endl;
                    break;
                case 2:
                    cout << members[i].bopname << endl;
                    break;
                default:
                    cout << "Unknown preference" << endl;
                    break;
                }
            }
            break;
        case 'q':
            cout << "Quitting...\n";
            return 0;
        default:
            cout << "Invalid choice. Please enter a, b, c, d, or q.\n";
        }
    }

    return 0;
}
