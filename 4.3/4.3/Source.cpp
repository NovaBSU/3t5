#include <iostream>
#include <string>

using namespace std;

int main() {
	int age = 0;

	cout << "Your Age: ";
	cin >> age;

	while (cin.fail() or age < 0 or age > 120) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Please input your age in years, using numbers." << endl;
		cin >> age;
	}
	cout << "You are " << age << " years old";

	return 0;
}