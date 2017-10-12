/*
Ray Chen - Period 1
Three Digit Ascend Descend Selection
3 digit number and find stuff about it.
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include <math.h>

// Namespaces
using namespace std;

//variables
int x; // number user inputs
int A; // hundreds digit
int B; // tens digit
int C; // ones digit

// Functions()
void pause() {

	cout << "Press any key to check another number . . . \n";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN
void main() {
	for (int iguess = 0; iguess < 30; iguess = iguess + 1) {
		cout << "Enter a three digit number. \n";
		cin >> x;

		A = (x / 100);
		B = (x - A * 100) / 10;
		C = (x - A * 100 - (B * 10));

		if (A < B && B < C) {
			cout << "Ascending \n";
		}
		else if (A > B && B > C) {
			cout << "Descending \n";
		}
		else {
			cout << "Neither \n";
		}
		_getch(); // pauses to see the displayed text
	}
	}
