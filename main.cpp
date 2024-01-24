#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>
#include "iostream"

using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к пятой лекции. Логические операторы и сложные условия" << endl;


    while (true)
    {
        cout << "1: Кукушка." << endl;
        cout << "2: Слишком большие числа." << endl;
        cout << "3: Коллекторы." << endl;
        cout << "4: Счастливый билетик." << endl;
        cout << "5: Числа Фибоначчи." << endl;
        cout << "6: Вклады." << endl;
        cout << "Введите число от 1 до 6 или что-то другое для выхода: ";
        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Задача №1: " << endl;
            task1();
            _getch();
            system("cls");
        }
        
        else if (task == 2) {
            system("cls");
            cout << "Задача №2: " << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Задача №3: " << endl;
            task3();
            _getch();
            system("cls");
        }

        else if (task == 4) {
            system("cls");
            cout << "Задача №4: " << endl;
            task4();
            _getch();
            system("cls");
        }

        else if (task == 5) {
            system("cls");
            cout << "Задача №5: " << endl;
            task5();
            _getch();
            system("cls");
        }

        else if (task == 6) {
            system("cls");
            cout << "Задача №6: " << endl;
            task6();
            _getch();
            system("cls");
        }
        
        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
