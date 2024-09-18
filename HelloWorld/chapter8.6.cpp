#include<iostream>
#include<string>

struct free_throws {
	std::string name;
	int made;
	int attempts;
	float percent;
};
   
void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main() {
	free_throws one = { "xxx",13,14 };
	free_throws two = { "sdf",10,14 };
	free_throws three = { "gdf",6,14 };
	free_throws four = { "gfdg",3,14 };
	free_throws five = { "fghfd",14,14 };
	free_throws team = { "xsdferxx",9,14 };

	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team,one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	dup = accumulate(team, five);
	std::cout << "displaying team:\n";
	display(team);
	std::cout << "displaying dup after assignment:\n";
	display(team);
	set_pc(four);

	accumulate(dup, five) = four;
	std::cout << "displaying dup after ill-advised assignment:\n";
	display(dup);
	return 0;
}

void display(const free_throws& ft) {
	using std::cout;
	cout << "name: " << ft.name << '\n';
	cout << "Made: " << ft.made << '\t';
	cout << "Attampts: " << ft.attempts << '\t';
	cout << "percent: " << ft.percent << std::endl;
}

void set_pc(free_throws& ft) {
	if (ft.attempts != 0) {
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	}
	else {
		ft.percent = 0;
	}
}

free_throws& accumulate(free_throws& target, const free_throws& source) {
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}