#include <iostream>
#include "math.h"

using namespace std;

//Объявление функций (задач)
//void task_1(); //Наибольшее
//void task_2(); //Превосходит ли вдвое
//void task_3(); //Шахматная доска
//void task_4(); //Шоколадка

int main() {
    //Вызов функций(задач)
    //task_1(); //Наибольшее
    //task_2(); //Превосходит ли вдвое
    //task_3(); //Шахматная доска
    //task_4(); //Шоколадка

    return 0;
}
/*
void task_1() { //Наибольшее
    long long a = 0;
    long long b = 0;
    long long result = 0;

    cout << "Введите два числа: ";
    cin >> a >> b;

    result = (a > b ? a : b);

    cout << "Ответ: " << result << endl;
}*/
/*
void task_2() { //Превосходит ли вдвое
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long maximum = 0;
    long long sum = 0;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    maximum = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    sum = a + b + c - maximum;

    cout << "Ответ: " << (maximum >= 2 * sum ? "YES" : "NO") << endl;
}*/
/*
void task_3() { //Шахматная доска
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cout << "Введите координаты двух полей: ";
    cin >> a >> b >> c >> d;

    cout << "Ответ: " << ((a + b) % 2 == (c + d) % 2 ? "YES" : "NO") << endl;
}*/
/*
void task_4() { //Шоколадка
    int n = 0;
    int m = 0;
    int k = 0;

    cout << "Введите n, m и k: ";
    cin >> n >> m >> k;

    cout << "Ответ: " << (k < n * m && (k % n == 0 || k % m == 0) ? "YES" : "NO") << endl;
}*/