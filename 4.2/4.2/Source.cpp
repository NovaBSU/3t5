#include <iostream>

using namespace std;

int user = 8888;
int iteratorNum = 0;

int main() {
	while (user != iteratorNum) {
		iteratorNum++;
		if (iteratorNum > 10) {
			cout << "You are more patient than I thought" << endl;
			break;
		}

		cout << "Don't enter the number of numbers you've been asked to enter" << endl;
		cin >> user;
	}
	if (user == iteratorNum) {
		cout << "YOU WEREN'T SUPPOSED TO DO THAT!" << endl << "YOU'VE DOOMED US ALL!!!" << endl;
	}
}