#include<iostream>

using namespace std;

class Calc{
public:
	int num1;
	int num2;
	int sum(int num1, int num2);
	int raz(int num1, int num2);
	int mnog(int num1, int num2);
	int del(int num1, int num2);

};
int Calc::sum(int num1, int num2){
	return num1 + num2;
}
int Calc::raz(int num1, int num2){
	return num1 - num2;
}
int Calc::mnog(int num1, int num2){
	return num1 * num2;
}
int Calc::del(int num1, int num2){
	return num1/num2;
}

int main(){
	setlocale(LC_ALL, "Rus");
	Calc calculator;
	char znac;
	int summ, chi1, chi2;
	cout<<"Добро пожаловать в калькулятор!\n";
	cout<<"Введите 1 для сложения\n";
	cout<<"Введите 2 для вычитания\n";
	cout<<"Введите 3 для умножения\n";
	cout<<"Введите 4 для деления\n";
	cin>>znac;
	cout<<"Введите первое число: \n";
	cin>>chi1;
	cout<<"Введите второе число: \n";
	cin>>chi2;
	switch(znac){
		case '1':
		summ = calculator.sum(chi1,chi2);
		cout<<"Сумма чисел: "<<summ;
		break;
		case '2':
		summ = calculator.raz(chi1,chi2);
		cout<<"Разность чисел: "<<summ;
		break;
		case '3':
		summ = calculator.mnog(chi1,chi2);
		cout<<"Умножение чисел: "<<summ;
		break;
		case '4':
		summ = calculator.del(chi1,chi2);
		cout<<"Деление чисел: "<<summ;
		break;
		default:
		cout<<"Введите правильное число";
	}
	return 0;
}