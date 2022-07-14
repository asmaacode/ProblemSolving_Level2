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
void sumDigitsOfNumbers(int number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number = number /10;
	}
	cout << sum;
}

int main() {
	sumDigitsOfNumbers(readPositiveNumber());
	return 0;
}
