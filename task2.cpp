#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*У неудачливого бухгалтера всё опять идёт наперекосяк: 
ему приносят такие большие счета, что числа не помещаются на бумаге. 
Напишите программу, которая считала бы для него, сколько цифр (знаков) во вводимом числе.*/
void task2() {
	int number;
	cout << "Введите число: ";
	cin >> number;

	int temp = 0;
	while (number !=0) {
		number /= 10;
		temp += 1;
	}
	
	if (temp == 1) 	cout << "В числе " << temp << " число";
	else if (temp >= 2 && temp <= 4) cout << "В числе " << temp << " числа";
	else cout << "В числе " << temp << " чисел";
}