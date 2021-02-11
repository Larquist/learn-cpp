#include <iostream>

int getUserInput() {
	std::cout << "Enter an integer: ";

	int input{};
	std::cin >> input;

	return input;
}

char getOperation() {
	std::cout << "Enter an operator: ";

	char input{};
	std::cin >> input;

	return input;
}

void calculateResult(int num1, char operation, int num2) {
	int result{0};

	switch (operation) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	case '%':
		result = num1 % num2;
		break;
	}

	std::cout << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
}

int main() {
	//Get first number
	int num1 = { getUserInput() };

	//Get operation
	//getOperation()
	char operation = { getOperation() };

	//Get second number
	//getUserInput()
	int num2 = { getUserInput() };

	//Calculate
	calculateResult(num1, operation, num2);

	return 0;
}