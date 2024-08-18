#include<iostream>
#include<cmath>
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

void rect_to_polar(const rect* dapos,polar* pda);
void show_polar(const polar* dapos);

int main() {
	using namespace std;
	rect rplace;
	polar pplace; 
		show_polar(&pplace);
		cout << "next two numbers (q to quit): ";
	}
	cout << "done.\n";
	return 0;
}

void rect_to_polar(const rect* dapos, polar* pda) {
	using namespace std;
	
	pda->distance = sqrt(dapos->x * dapos->x + dapos->y * dapos->y);
	pda->angle = atan2(dapos->y, dapos->x);
}

void show_polar(const polar* dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance: " << dapos->distance << " ";
	cout << "angle: " << dapos->angle * Rad_to_deg << " ";
}