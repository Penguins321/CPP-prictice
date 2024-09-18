#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;
const int LIMIT = 5;
void file_it(ostream& os, double fo, const double fe[], int n);

int main() {

	fstream fout;
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open()) {
		cout << "file open filure " << endl;
		exit(EXIT_FAILURE);
	}

	double objective;
	double eps[LIMIT];
	cout << "enter zhe focal length of your objective : ";
	cin >> objective;

	cout << "enter the wujing : " << endl;
	for (int i = 0; i < LIMIT; i++) {
		cout << "eyepieces: # " << i + 1 << endl;
		cin >> eps[i];
	}

	file_it(cout, objective, eps, LIMIT);
	file_it(fout, objective, eps, LIMIT);

	cout << "Done\n";
	return 0;

}

void file_it(ostream& os, double fo, const double fe[], int n) {
	os << "the mujing is " << fo << endl;
	os << "f.1. wujing and beishu is: " << endl;
	for (int i = 0; i < n; i++) {
		os << fe[i] << "		";
		os << int(fo / fe[i] + 0.5) << endl;
	}
}
