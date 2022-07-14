bool isPerfect(int n) {
	if (n < 6) return false;
	int sum = 0;
	for (int i = 1;i < n;i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	if (sum == n)
		return true;
	else
		return false;
}
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

void printPerfectNumbersInRange(int from,int to) {
	for (;from <= to;from++) {
	if (isPerfect(from))
		cout << from << " Is Perfect" << "\n";
	}
}

int main(){
  int from = readPositiveNumber();
	int to = readPositiveNumber();
	printPerfectNumbersInRange(from, to);
  return 0;
}
