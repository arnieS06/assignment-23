#include <iostream>
#include <string>
#include <cctype>

void validateInput(char alphaOne, char alphaTwo, int fourNumbers) {
	char customerInput[7];
	customerInput[6] = { '\0' };
	bool alphaConditionsSatisfied = false;
	bool numConditionsSatisfied = false;

	if (isalpha(alphaOne) && isalpha(alphaTwo)) {
		alphaConditionsSatisfied = true;

		customerInput[0] = alphaOne;
		customerInput[1] = alphaTwo;

	}
	else {
		std::cout << "\nRestart the program. Your alphabetical input was invalid.";
	}

	if (std::to_string(fourNumbers).length() == 4) {
		numConditionsSatisfied = true;

		std::string numbersToString = std::to_string(fourNumbers);

		customerInput[2] = numbersToString[0];
		customerInput[3] = numbersToString[1];
		customerInput[4] = numbersToString[2];
		customerInput[5] = numbersToString[3];

	}
	else {
		std::cout << "\nRestart the program. numerical input from the customer ID was invalid. ";
	}

	if (alphaConditionsSatisfied == true && numConditionsSatisfied == true) {
		std::cout << "\nCustomer ID input was correct! \nit was " << customerInput << std::endl;
	}

	else {
		std::cout << "\nYou didn't follow the instructions. ";
	}

}