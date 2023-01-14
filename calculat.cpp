#include <iostream>
//Принимает и возвращает число
int calculate(int one, int two, char oper) {
	switch (oper)
	{
	case '+':
		return one + two;
		break;
	case '-':
		return one - two;
		break;
	case '/':
		return one / two;
		break;
	case '*':
		return one * two;
		break;
	case '%':
		return one % two;
		break;
	default:
		int error;
		error = 0;
		return error;
		break;
	}
}
int getUser() {
	while (true) {
		std::cout << "Введите число А" << std::endl;
		int numberOne;
		std::cin >> numberOne;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
			return numberOne;
		}
	}

}
int getUser2()
{
	while (true) {
		std::cout << "Введите число Б" << std::endl;
		int numberTwo;
		std::cin >> numberTwo;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
			return numberTwo;
		}
	}
}
char mathOper() {
	std::cout << "Введите операцию вычисления, доступно +, - , / , * , %" << std::endl;
	char operation;
	std::cin >> operation;
	return  operation;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Простейший калькулятор!" << std::endl;
	int result;
	int numberOne = getUser();
	int numberTwo = getUser2();
	char operation = mathOper();
	result = calculate(numberOne, numberTwo, operation);
	if (result > 0) {
		std::cout << "Ваше число равно: " << result << std::endl;
	}
	else {
		std::cout << "Ошибка!!!" << std::endl;
	}
}