//This project will serve calculator some mathematical basic.
#include <iomanip>
#include <iostream>
int main() {
	std::cout << "			Welcome to the Calculator two number program simplify!" << std::endl;
	while (1) {
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "		Primarily Function : " << std::endl;
		std::cout << "		1. Addiction." << std::endl;
		std::cout << "		2. Subtraction." << std::endl;
		std::cout << "		3. Multiplication." << std::endl;
		std::cout << "		4. Division" << std::endl;
		std::cout << "		5. Exit" << std::endl;
		int x;
		std::cout << "	Enter your choice(1-5): ";
		std::cin >> x;
		//Implement some function you have choose
		if (x == 1) {
			std::cout << "	Enter any two Number: ";
			double a, b;
			std::cin >> a >> b;
			std::cout << "	Result = ";
			double sum = a + b;
			std::cout << sum;
		}
		else if (x == 2) {
			std::cout << "	Enter any two Number: ";
			double a, b;
			std::cin >> a >> b;
			std::cout << "	Result = ";
			double sub123 = a - b;
			std::cout << sub123;
		}
		else if (x == 3) {
			std::cout << "	Enter any two Number: ";
			double a, b;
			std::cin >> a >> b;
			std::cout << "	Result = ";
			double mul = a * b;
			std::cout << mul;
		}
		else if (x == 4) {
			std::cout << "	Enter any two Number: ";
			double a, b;
			std::cin >> a >> b;
			std::cout << "	Result = ";
			double divi = a / b;
			std::cout << divi;
		}
		else if (x == 5){
			std::cout << "	Thanks you have use and see you again!";
			break;
		}
		else {
			std::cout << "	Maybe you have just choose function invalid in menu. This loop will be repeat." << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}
