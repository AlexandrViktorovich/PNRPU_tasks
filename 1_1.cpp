// Программа выводит максимольное число из трех вводимых путем сравнения каждого с каждым.
#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cin >> a; //Ввод 1-го числа
    cin >> b; //Ввод 2-го числа
    cin >> c; //Ввод 3-го числа
    if (a > c) //Сравниваем 1-ое и 3-е число, если 1-ое число больше то
    {
        if (a > b) //  Если 1-ое число больше 2-го, то
        {
            cout << a; // Выводим 1-ое число
        }
        else // если нет, то
        {
            cout << b; // выводим 2-ое
        }

    }
    else
    {
        if (b>c) //если 2-ое больше 3-го, то
        {
            cout << b; //выводим 2-ое
        }
        else 
        {
            cout << c; //если нет, то выводим 3-е
        }
    }
    
    return 0;
}
