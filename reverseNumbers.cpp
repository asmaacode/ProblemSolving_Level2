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
/****Trial Attempts********************************/
void reverseNumbers_usingString(string s) {
	for (int i = s.length() - 1;i >= 0;i--)
		cout << s[i] << '\n';
}
void readNumbersArray(int arr[],int &length) {
	cout << "How many numbers?\n";
	cin >> length;
	for (int i = 0; i < length;i++) {
		cin >> arr[i];
	}
}
void reverseNumbers_usingArray(int arr[], int length) {
	for (int j = length - 1; j >= 0;j--) {
		cout << arr[j] << "\n";
	}
}
/***************************************************/
void reverseNumbers_usingDividing(int number) {
	while (number > 0) {
		cout << number % 10<<'\n';
		number = number /10;
	}
}

int main() {
	reverseNumbers_usingDividing(readPositiveNumber());
	return 0;
}
