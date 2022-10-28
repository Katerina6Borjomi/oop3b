#include "menu.h"
#include <iostream>

int vector_menu(){
    cout << "1 -- Вектор неопределённых значений" << endl;
    cout << "2 -- Ввести вектор с клавиатуры" << endl;
    return 0;
}

int menu(){
    cout << "0 -- Выйти из программы" << endl;
    cout << "1 -- И" << endl;
    cout << "2 -- ИЛИ" << endl;
    cout << "3 -- Вывести вектора" << endl;
    cout << "4 -- Сравнить вектора" << endl;
    cout << "5 -- НЕ" << endl;
    cout << "6 -- Анализ на неопределённость" << endl;
    return 0;
}