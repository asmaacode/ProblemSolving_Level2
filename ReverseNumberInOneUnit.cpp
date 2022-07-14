#include <iostream>
#include "myLibrary.h"
using namespace std;

int readNumber() {
	int userNumber = 0;
	while (!(cin >> userNumber))
	{
		// Explain error
		cout << "ERROR: A Number must be entered:\n";
		cin.clear();
		cin.ignore(132, '\n');
	}
	return  userNumber;
}

int readPositiveNumber() {
	int positiveNumber = 0;
	do {
		cout << "Please enter a number greater than zero :\n";
		positiveNumber = readNumber();
	} while (positiveNumber <= 0);

	return positiveNumber;
}

void reverseNumberAsInt(int number) {
	int reversed = 0, power = (int)(log10(number));
	int location = pow(10, power);
	while (number > 0) {
		reversed += (number % 10) * location;
		number = number / 10;
		location /= 10;
	}
	cout << reversed << '\n';
}

int main() {
	reverseNumberAsInt(readPositiveNumber());
	return 0;
}
