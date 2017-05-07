#include "func.h"
/*
Morgan Knowles
11/21/2016
Microsoft Visual Studio
Write each of the following functions RECURSIVELY , and code a main that tests the  functions.

int sumDig(int n)   // returns the sum of the digits in the integer n

void printRev(int n)  .//prints the int value n, in reverse

bool isThere(int n, int dig)  returns true if the digit occurs at least once in the int n, false otherwise*/

int main() {
	cout << "sumDig(123): " << sumDig(123) << endl;
	cout << "printRev(97531): ";
	printRev(97531);

	cout << endl << "isThere(25, 5): ";
	if (isThere(25, 5)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	cout << "isThere(25, 1): ";
	if (isThere(25, 1)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
}