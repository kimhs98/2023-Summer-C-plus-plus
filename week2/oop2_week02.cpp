#include <iostream>

int main() {
	int number = 0;
	bool isPrime = true;		// less momory, readability

	std::cout << "Input number: ";
	std::cin >> number;

	if (number < 2)
		isPrime = false;
	else
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				isPrime = false;		// remove add operation
				break;		// loop terminates as soon as a divisor is found.
			}
		}

	if (isPrime == true)
		std::cout << number << " is prime number!\n";
	else
		std::cout << number << " is not prime number!\n";

	return 0;
}