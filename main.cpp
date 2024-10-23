// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "validateInput.h"
using namespace std;

int main() {
	char alphaOne;
	char alphaTwo;
	int fourNumbers;

	cout << "Enter customer ID \n(2 alphabetical letters follwed by 4 whole numbers) -> ";
	cin >> alphaOne >> alphaTwo >> fourNumbers;

	validateInput(alphaOne, alphaTwo, fourNumbers);
}

