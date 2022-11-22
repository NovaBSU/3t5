#include <iostream>

using namespace std;

int countInt = 1;

int main() {
	for (int i = 0; i < 50; i++) { // loop to pull the check against the array
		cout << countInt << endl;
		countInt++;
	}
	cout << endl;
	for (int i = 0; i < 50; i++) { // loop to pull the check against the array
		countInt--;
		cout << countInt << endl;
	}
	cout << endl;
	countInt = 29;
	for (int i = 0; i < 21; i++) { // loop to pull the check against the array
		countInt++;
		cout << countInt << endl;
	}
	cout << endl;
	countInt = 52;
	for (int i = 0; i < 21; i++) { // loop to pull the check against the array
		countInt = countInt - 2;
		cout << countInt << endl;
	}
	cout << endl;
	countInt = 95;
	for (int i = 0; i < 21; i++) { // loop to pull the check against the array
		countInt = countInt + 5;
		cout << countInt << endl;
	}
}