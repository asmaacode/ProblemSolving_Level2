
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
bool isPrime(int n) {
	if (n == 1) return true;
	int sqRoot = ceil(sqrt(n));
	for (int i = 2;i <= sqRoot;i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void printPrimesInRange(int from, int to) {
	for (int c = from; c <= to;c++) {
		if (isPrime(c)) cout << c << "\n";
	}
}

void main(){
  int from = readPositiveNumber();
	int to = readPositiveNumber();
	printPrimesInRange(from, to);
}
