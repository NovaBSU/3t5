#include <iostream>

using namespace std;

int countInt = 20;

int main() {
	for (int i = 0; i < 5; i++) {
		if (countInt % 2 == 0) {
			cout << countInt << " even" << endl;
		}
		else {
			cout << countInt << " odd" << endl;
		}
		countInt++;
	}
}