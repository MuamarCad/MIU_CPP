#include <iostream>
#include "math.h"

using namespace std;

//Объявление функций (задач)
//void task_1(); //Поменяй местами
//void task_2(); //Равны?
//void task_3(); //Измени число - 1
//void task_4(); //Футбол
//void task_5(); //Положительные в квадрат!
//void task_6(); //Сумма положительных
//void task_7(); //Уменьшить большее из трех
//void task_8(); //Измени число - 3
//void task_9(); //Минус 100
//void task_10(); //Бассейн

int main() {
    //Вызов функций(задач)
    //task_1(); //Поменяй местами
    //task_2(); //Равны?
    //task_3(); //Измени число - 1
    //task_4(); //Футбол
    //task_5(); //Положительные в квадрат!
    //task_6(); //Сумма положительных
    //task_7(); //Уменьшить большее из трех
    //task_8(); //Измени число - 3
    //task_9(); //Минус 100
    //task_10(); //Бассейн

    return 0;
}

void task_1() { //Поменяй местами
    long long a = 0;
    long long b = 0;

    cin >> a >> b;

    if (a < b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    cout << a << " " << b << endl;
}

void task_2() { //Равны?
    long long a = 0;
    long long b = 0;

    cin >> a >> b;

    if (a == b) {
        a += 1;
        b += 2;
    }

    cout << a << " " << b << endl;
}

void task_3() { //Измени число - 1
    long long a = 0;

    cin >> a;

    if (a > 0) {
        a += 1;
    }

    cout << a << endl;
}

void task_4() { //Футбол
    int s = 0;

    cin >> s;

    if (s == 3) {
        cout << "WIN" << endl;
    }
    else if (s == 0) {
        cout << "LOSE" << endl;
    }
    else {
        cout << "DRAW" << endl;
    }
}

void task_5() { //Положительные в квадрат!
    long long a = 0;
    long long b = 0;
    long long c = 0;

    cin >> a >> b >> c;

    if (a > 0) {
        a *= a;
    }

    if (b > 0) {
        b *= b;
    }

    if (c > 0) {
        c *= c;
    }

    cout << a << " " << b << " " << c << endl;
}

void task_6() { //Сумма положительных
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long sum = 0;

    cin >> a >> b >> c;

    if (a > 0) {
        sum += a;
    }

    if (b > 0) {
        sum += b;
    }

    if (c > 0) {
        sum += c;
    }

    cout << sum << endl;
}

void task_7() { //Уменьшить большее из трех
    long long a = 0;
    long long b = 0;
    long long c = 0;

    cin >> a >> b >> c;

    if (a > b && a > c) {
        a -= 5;
    }
    else if (b > a && b > c) {
        b -= 5;
    }
    else {
        c -= 5;
    }

    cout << a << " " << b << " " << c << endl;
}

void task_8() { //Измени число - 3
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long maximum = 0;

    cin >> a >> b >> c;

    if (a <= b && b <= c) {
        a *= a;
        b *= b;
        c *= c;
    }
    else if (a > b && b > c) {
        maximum = a;

        if (b > maximum) {
            maximum = b;
        }

        if (c > maximum) {
            maximum = c;
        }

        a = maximum;
        b = maximum;
        c = maximum;
    }
    else {
        a = -a;
        b = -b;
        c = -c;
    }

    cout << a << " " << b << " " << c << endl;
}

void task_9() { //Минус 100
    long long n = 0;
    long long m = 0;

    cin >> n >> m;

    if (abs(n) > abs(m)) {
        n -= 100;
    }

    cout << n << " " << m << endl;
}

void task_10() { //Бассейн
    int N = 0;
    int M = 0;
    int x = 0;
    int y = 0;
    int result = 0;

    cin >> N >> M >> x >> y;

    if (x < N - x) {
        result = x;
    }
    else {
        result = N - x;
    }

    if (y < result) {
        result = y;
    }

    if (M - y < result) {
        result = M - y;
    }

    cout << result << endl;
}