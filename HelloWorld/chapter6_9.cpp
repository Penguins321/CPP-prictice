#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct donate {
    string name;
    double money;
};

int main() {
    int ArSize = 0;
    int countup = 0;
    int countdown = 0;

    cout << "Start: " << endl;
    ifstream itest("chapter6_9.txt");

    if (!itest.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    itest >> ArSize;
    itest.ignore(); // ºöÂÔ»»ÐÐ·û

    donate* arr = new donate[ArSize];

    for (int i = 0; i < ArSize; i++) {
        getline(itest, arr[i].name);
        itest >> arr[i].money;
        itest.ignore(); // ºöÂÔ»»ÐÐ·û

        if (arr[i].money > 10000) {
            countup++;
        }
        else {
            countdown++;
        }
    }

    if (countup > 0) {
        cout << "Grand Patrons:" << endl;
        for (int i = 0; i < ArSize; i++) {
            if (arr[i].money > 10000) {
                cout << arr[i].name << " " << arr[i].money << endl;
            }
        }
    }
    else {
        cout << "Grand Patrons: None" << endl;
    }

    if (countdown > 0) {
        cout << "Patrons:" << endl;
        for (int i = 0; i < ArSize; i++) {
            if (arr[i].money <= 10000) {
                cout << arr[i].name << " " << arr[i].money << endl;
            }
        }
    }
    else {
        cout << "Patrons: None" << endl;
    }

    delete[] arr;
    return 0;
}
