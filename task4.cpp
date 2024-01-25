#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*В старину, когда даже в столице билеты в общественном транспорте выдавали контролёры,
существовало поверье: если на билете сумма первых трёх цифр в номере билета равна сумме трёх последних, то это к удаче.
Напишите программу, которая получала бы на вход шестизначный номер билета и выводила,
счастливый это билет или нет. К примеру, билеты 666 666 и 252 135 — счастливые, а 123 456 — нет.*/
void task4() {
	int number;
	int leftSum = 0;
	int rightSum = 0;
	cout << "Введите число: ";
	cin >> number;

	if (number < 100000 || number > 999999) {
		cout << "у тебя фальшивый билет!!";
	} else {
		
		for (int i = 0; i < 6; i++) {
			int digit = number % 10;
			number /= 10;

			if (i < 3) {
				leftSum += digit;
			}
			else {
				rightSum += digit;
			}
		}
		if (leftSum == rightSum) cout << "Счастье привалило!!";
		else cout << "Увы, повезёт в другой раз";
	}
}