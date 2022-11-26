#include <iostream>
#include <conio.h>
using namespace std;
class Oklad
{
private:
	double first=0; // оклад
	int second=0;// кол-во отработанных дней
public:
	double Display(double first,int second)//функция вывода на экран
	{
		return (first / 30) * second;
	}
};
double proverka()//проверка вводимых данных
{
	double A;
	while (!(cin >> A) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Данные некоректны повторите ввод ";
	}
	return A;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	double oklad = 0, dayrab = 0;
	cout << "Введите Оклад ";
	oklad = proverka();
	cout << "Введите Кол-во отработанных дней ";
	dayrab = proverka();
	Oklad one;
	cout << "Начисленная зарплата " << one.Display(oklad,dayrab)<<endl;
}
