#include <iostream>
#include<string>
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
string readPassword() {
	string password = "";
	do{
		cout << "Please enter the password(3 Uppercase Letters i.e: ABC)\n";
		password = "";
		cin >> password;
	} while (password.length() < 3 ||
		(int(password[0]) < 65 || int(password[0]) > 90) ||
		(int(password[1]) < 65 ||int(password[1]) > 90) ||
		(int(password[2]) < 65 || int(password[2]) > 90)
		);
	return  password;
}
string readText(string message) {
	string txt = "";
	cout << message << "\n";
	txt = "";
	cin >> txt;
	return  txt;
}

int readNumberMsg(string msg) {
	int positiveNumber = 0;
	do {
		cout << msg;
		positiveNumber = readNumber();
	} while (positiveNumber <= 0);

	return positiveNumber;
}

int generateRandomNumbers(int from, int to) {
	//in main call 	srand(time(NULL));
	return rand() % (to - from + 1) + from;
}
enum randomOptions { smallLetter, capitalLetter, specialCharacter, digit };

char getRandomCharachter(randomOptions randomType) {
	switch (randomType) {
	case randomOptions::smallLetter:
		return char(generateRandomNumbers(int('a'), int('z')));
		break;
	case randomOptions::capitalLetter:
		return char(generateRandomNumbers(int('A'), int('Z')));
		break;
	case randomOptions::specialCharacter:
		return (char)generateRandomNumbers(int('Z') + 1, 128);
		break;
	case randomOptions::digit:
		return (char)generateRandomNumbers(48, 57);
		break;
	}
}
