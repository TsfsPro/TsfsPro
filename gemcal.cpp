#include<iostream>
#include<windows.h>

using namespace std;

class Figure{
 	public:
 		int width;
 		int height;
 		int rad;
 		int osn;
 		const float pi = 3.14;
 		int prug(int width, int height);
 		int ptreg(int osn, int height);
 		int ptrap(int width, int height, int osn);
 		int pkrug(int rad);
		int paral(int width, int height, int osn);


};

int Figure::prug(int width, int height){
	return width* height;
}
int Figure::ptreg(int osn, int height){
	return 0,5*osn*height;
}
int Figure::ptrap(int width, int height, int osn){
	return (width + osn)/2 * height;
}
int Figure::pkrug(int rad){
	rad = rad*rad;
	return pi * rad;
}
int Figure::paral(int width, int height, int osn){
	return width * height * osn;
}


int main(){
	Figure fig;
	setlocale(LC_ALL, "Rus");
	cout<<"Добро пожаловать в геометрический калькулятор\n";
	cout<<"------------------------------------------------\n";
	cout<<"Выберите цифру 1 для расчета площади прямоугольника.\n";
	cout<<"Выберите цифру 2 для расчета площади треугольника.\n";
	cout<<"Выберите цифру 3 для расчета площади трапеции\n";
	cout<<"Выберите цифру 4 для расчета площади круга.\n";
	cout<<"Выберите цифру 5 для расчета объема параллепипеда.\n";
	char znac;
	int sum, chi1, chi2, chi3;
	cin>>znac;

	switch(znac){
		case '1':
		cout<<"Введите ширину прямоугольника: \n";
		cin>>chi1;
		cout<<"Введите высоту прямоугольника: \n";
		cin>>chi2;
		sum = fig.prug(chi1,chi2);
		cout<<"Площадь прямоугольника равна: "<<sum;
		break;
		case '2':
		cout<<"Введите длину основания треугольника: \n";
		cin>>chi1;
		cout<<"Введите высоту треугольника: \n";
		cin>>chi2;
		sum = fig.ptreg(chi1,chi2);
		cout<<"Площадь треугольника равна: "<<sum;
		break;
		case '3':
		cout<<"Введите длину основания трапеции: \n";
		cin>>chi1;
		cout<<"Введите длину основания трапеции: \n";
		cin>>chi2;
		cout<<"Введите высоту трапеции: \n";
		cin>>chi3;
		sum = fig.ptrap(chi1,chi2,chi3);
		cout<<"Площадь трапеции равна: "<<sum;
		break;
		case '4':
		cout<<"Введите радиус круга: \n";
		cin>>chi1;
		sum = fig.pkrug(chi1);
		cout<<"Площадь круга равна: "<<sum;
		break;
		case '5':
		cout<<"Введите основание параллепипеда а: \n";
		cin>>chi1;
		cout<<"Введите основание параллепипеда б: \n";
		cin>>chi2;
		cout<<"Введите основание параллепипеда с: \n";
		cin>>chi3;
		sum = fig.paral(chi1, chi2, chi3);
		cout<<"Обьём параллепипеда равен: "<<sum;
		break;
		default:
		cout<<"Введите правильное число.";

	}
	return 0;
}
