#include <iostream>
#include <string>
using namespace std;

char input = 'X';


int main() {
    cout << "Would you like to continue? (Y/N): " << endl; //ask for input
    cin >> input;//get user input
    switch (input) { //evaluate expression
    case 'Y': //case for Y
        cout << "Continuing..." << endl; //cout message if user enters Y
        break; //break to end case
    case 'N': //case for N
        cout << "Breaking..." << endl; //cout message if user enters N
        break;
    default:
        cout << "Input Failed..." << endl; //default message if neither Y or N entered
    }
        return 0;
}