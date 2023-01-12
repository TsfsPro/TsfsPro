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

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Простейший калькулятор!" << std::endl;
	std::cout << "Введите число А" << std::endl;
	int numberOne = 0;
	std::cin >> numberOne;
	std::cout << "Введите число Б" << std::endl;
	int numberTwo = 0;
	std::cin >> numberTwo;
	std::cout << "Введите операцию вычисления, доступно +, - , / , * , %" << std::endl;
	char operation;
	std::cin >> operation;
	int result;
	result = calculate(numberOne, numberTwo, operation);
	if (result > 0) {
		std::cout << "Ваше число равно: " << result << std::endl;
	}
	else {
		std::cout << "Ошибка!!!" << std::endl;
	}
}