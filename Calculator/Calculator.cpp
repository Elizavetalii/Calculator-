#include <iostream>
#include <Windows.h>

using namespace std;

int factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    char choice;
    double num1, num2, result;  
    cout << "~~~Добро пожаловать в Супер Калькулятор!~~~\n";
    do 
    {       
        cout << "\nВыберите функцию:\n";
        cout << "1.Сложение\n2.Вычитание\n3.Частное\n4.Произвдение\n";
        cout << "5.Возведение в степень\n6.Квадратный корень числа\n";
        cout << "7.Нахождение 1% от числа\n8.Найти факториал числа\n9.Выход\n";

        cout << "Введите номер функции, которую хотите выполнить: ";
        cin >> choice;

        switch (choice) 
        {
            case '1':
                cout << "Введите первое число для сложения: ";
                cin >> num1;
                cout << "Введите второе число для сложения: ";
                cin >> num2;
                result = num1 + num2;
                cout << "Результат: " << result << endl;
                break;
            case '2':
                cout << "Введите первое число для вычитания: ";
                cin >> num1;
                cout << "Введите второе число для вычитания: ";
                cin >> num2;                
                result = num1 - num2;
                cout << "Результат: " << result << endl;
                break;
            case '3':
                cout << "Введите первое число для деления: ";
                cin >> num1;
                cout << "Введите второе число для деления: ";
                cin >> num2;                
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    cout << "Результат: " << result << endl;
                }
                else 
                {
                    cout << "Ошибка: деление на ноль!" << endl;
                }
                break;
            case '4':
                cout << "Введите первое число для умножения: ";
                cin >> num1;
                cout << "Введите второе число для умножения: ";
                cin >> num2;
                result = num1 * num2;
                cout << "Результат: " << result << endl;
                break;
            case '5':
                cout << "Введите число: ";
                cin >> num1;
                cout << "Введите степень: ";
                cin >> num2;
                result = pow(num1, num2);
                cout << "Результат: " << result;                
                break;
            case '6':
                cout << "Введите число для нахождения квадратного корня: ";
                cin >> num1;
                if (num1 >= 0) 
                {
                    result = sqrt(num1);
                    cout << "Результат: " << result << endl;
                }
                else 
                {
                    cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа!" << endl;
                }
                break;
            case '7':
                cout << "Введите число для нахождения 1% : ";
                cin >> num1;
                result = 0.01 * num1;
                cout << "Результат: " << result << " %\n";
                break;
            case '8':
                cout << "Введите число для нахождения факториала: ";
                cin >> num1;
                result = factorial(static_cast<int>(num1));
                
                cout << "Результат: " << result << endl; 
                if (num1 >= 34)
                {
                    cout << "Ошибка: невозможно высчитать факториал числа больше 34. Пожалуйста, выберите снова." << endl;
                }
                break;
            case '9':
                cout << "Программа завершена." << endl;
                break;
            default:
                cout << "Ошибка: неверный выбор операции. Пожалуйста, выберите снова." << endl;
                break;
        }
    } while (choice != '9');
    return 0;
}
    


