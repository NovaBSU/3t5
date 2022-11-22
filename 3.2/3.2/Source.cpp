#include<iostream>
using namespace std;

int mNum = 0;

int main() {
	cout << "Calender Check Program" << endl;
	cin >> mNum;
	switch (mNum) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "31 Days" << endl;
		break;
	case 4: case 6: case 9: case 11:
		cout << "30 Days" << endl;
		break; // end the case
	case 2:
		cout << "28 Days" << endl;
	}

	return 0;
}