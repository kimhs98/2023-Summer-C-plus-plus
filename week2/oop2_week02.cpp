#include <iostream>

int main() {
	int number = 0;
	//int count = 0;
	bool isPrime = true;		// less momory, readability

	std::cout << "Input number: ";
	std::cin >> number;

	for (int i = 2; i < number; i++)
		if (number % i == 0) {
			//count++;
			isPrime = false;		// remove add operation
			break;
		}

	//if (count == 0)
	if (isPrime)
		std::cout << number << " is prime number!\n";
	else
		std::cout << number << " is not prime number!\n";

	return 0;
}