#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

double divide(int a, int b) {
	if (b == 0)
	{
		throw runtime_error("Error. You can't divide by zero.");
	} 
	return static_cast<double>(a) / b;
}

int main() {
	int num1, num2;
	char operation;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;


	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;


	try {
		switch (operation)
		{
		case '+': 
			cout << "Result: " << add(num1, num2) << endl;
			break;

		case '-':
			cout << "Result: " << subtract(num1, num2) << endl;
			break;
		case '*':
			cout << "Result: " << multiply(num1, num2) << endl;
			break;
		case '/':
			cout << "Result: " << divide(num1, num2) << endl;
			break;
		default: 
			cout << "Invalid operation." << endl;
			break;
		}
	}
	catch (const exception& e) {
		cout << e.what() << endl;
	}



	return 0;
}