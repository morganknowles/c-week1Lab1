#include "func.h"
/*
Morgan Knowles
11/21/2016
Microsoft Visual Studio
Write each of the following functions RECURSIVELY , and code a main that tests the  functions.

int sumDig(int n)   // returns the sum of the digits in the integer n

void printRev(int n)  .//prints the int value n, in reverse

bool isThere(int n, int dig)  returns true if the digit occurs at least once in the int n, false otherwise*/

int sumDig(int n) { // returns the sum of the digits in the integer n
	if (n < 10) {
		return n;
	}
	else {
		return sumDig(n / 10) + (n % 10);
	}
}
void printRev(int n) { //prints the int value n, in reverse
	if (n < 10) {
		cout << n;
	}
	else {
		cout << n % 10;
		printRev(n / 10);
		
	}
}
bool isThere(int n, int dig) { //returns true if the digit occurs at least once in the int n, false otherwise
	if (n == dig) {
		return true;
	}
	else if(n >= 10) {
		int x = isThere(n / 10, dig);
		if (x) {
			return true;
		}
		else {
			return isThere(n % 10, dig);
		}
		
	}
else {
		return false;
	}
}