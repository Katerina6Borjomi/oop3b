#include <iostream>
#include <cstring>
#include "functions.h"
#include "menu.h"
#include <iostream>

int main() {
    oop3b::Vector_3 vector_a;
    oop3b::Vector_3 vector_b;
    oop3b::Vector_3 vector_res;
    int a, b;
    int v1, v2;
    std::string str1;
    std::string str2;
    std::string str_cmp;

    cout << "Первый вектор" << endl;
    cout << "Введите количество значащих элементов" << endl;
    a = oop3b::input_int();
    vector_a.set_fact(a);
    vector_menu();
    v1 = oop3b::input_int();
    switch (v1) {
        case 1:
            vector_a = oop3b::Vector_3(a);
            break;
        case 2:
            cout << "Введите элементы вектора" << endl;
            cin >> str1;
            while (str1.length() != a) {
                cout << "Введено неверное количество элементов. Попробуйте ещё раз." << endl;
                cin >> str1;
            }
            vector_a = oop3b::Vector_3(str1);
            break;
        default:
            break;
    }

    cout << "Второй вектор" << endl;
    cout << "Введите количество значащих элементов" << endl;
    b = oop3b::input_int();
    vector_b.set_fact(b);
    vector_menu();
    v2 = oop3b::input_int();
    switch (v2) {
        case 1:
            vector_b = oop3b::Vector_3(b);
            break;
        case 2:
            cout << "Введите элементы вектора" << endl;
            cin >> str2;
            while (str2.length() != b) {
                cout << "Введено неверное количество элементов. Попробуйте ещё раз." << endl;
                cin >> str2;
            }
            vector_b = oop3b::Vector_3(str2);
            break;
        default:
            break;
    }
    int m;
    int w = 1;
    while (w) {
        menu();
        m = oop3b::input_int();
        switch (m) {
            case 0:
                w = 0;
                break;
            case 1:
                vector_res = vector_a * vector_b;
                std::cout << "Результат: " << endl;
                vector_res.print_vector();
                break;
            case 2:
                vector_res = vector_a + vector_b;
                std::cout << "Результат: " << endl;
                vector_res.print_vector();
                break;
            case 3:
                std::cout << "Вектора: " << endl;
                vector_a.print_vector();
                vector_b.print_vector();
                break;
            case 4:
                cout << "Введите по какому принципу сравниванть вектора: =, <, >, <=, >=" << endl;
                cin >> str_cmp;
                while ((str_cmp != "=") && (str_cmp != "<") && (str_cmp != ">") && (str_cmp != "<=") &&
                       (str_cmp != ">=")) {
                    cout << "Неверна введена операция. Попробуйте ещё раз." << endl;
                    cin >> str_cmp;
                }
                if (str_cmp == "=") {
                    vector_res = vector_a == vector_b;
                } else if (str_cmp == ">") {
                    vector_res = vector_a > vector_b;
                } else if (str_cmp == "<") {
                    vector_res = vector_a < vector_b;
                } else if (str_cmp == ">=") {
                    vector_res = vector_a >= vector_b;
                } else {
                    vector_res = vector_a <= vector_b;
                }
                cout << "Результат: " << endl;
                vector_res.print_vector();
                break;
            case 5:
                vector_res = ~vector_a;
                cout << "Результат:" << endl;
                cout << "A:" << endl;
                vector_res.print_vector();
                vector_res = ~vector_b;
                cout << "B:" << endl;
                vector_res.print_vector();

                break;
            case 6:
                int fa, fb;
                fa = vector_a.positiveness();
                fb = vector_b.positiveness();//1 - with, 0 - without
                cout << "А:";
                oop3b::printf_flag(fa);
                cout << "B";
                oop3b::printf_flag(fb);
                break;
            default:
                break;
        }
    }

    return 0;
}