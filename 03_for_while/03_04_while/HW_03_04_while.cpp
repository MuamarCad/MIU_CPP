#include <iostream>
#include "math.h"

using namespace std;

//Объявление функций (задач)
void task_1_1(); //Здоровый сон
void task_1_2(); //Звёздопад
void task_1_3(); //10 квадратов
void task_1_4(); //Использование счётчика
void task_1_5(); //Проверка чисел интервала
void task_1_6(); //Степень пятерки
void task_1_7(); //Найди число-1
void task_1_8(); //Найди число-2
//-------------------------------
void task_2_1(); //Обработка входных данных – 1
void task_2_2(); //Обработка входных данных – 2
//-------------------------------
void task_3_1(); //От A до B – 1
void task_3_2(); //От A до B – 2
void task_3_3(); //Сумма чисел
//-------------------------------
void task_4_1(); //Амёба
void task_4_2(); //Степень пятерки
//-------------------------------
void task_5_1(); //Количество чисел в последовательности
void task_5_2(); //Средний рост
void task_5_3(); //Максимум последовательности
void task_5_4(); //Сколько пятерок?
void task_5_5(); //Равные соседи
void task_5_6(); //Количество чисел, больших предыдущего
void task_5_7(); //На сколько выше?
void task_5_8(); //Потерянная карточка

int main() {
    //Вызов функций(задач)
    //task_1_1(); //Здоровый сон
    //task_1_2(); //Звёздопад
    //task_1_3(); //10 квадратов
    //task_1_4(); //Использование счётчика
    //task_1_5(); //Проверка чисел интервала
    //task_1_6(); //Степень пятерки
    //task_1_7(); //Найди число-1
    //task_1_8(); //Найди число-2
//-------------------------------
    //task_2_1(); //Обработка входных данных – 1
    //task_2_2(); //Обработка входных данных – 2
//-------------------------------
    //task_3_1(); //От A до B – 1
    //task_3_2(); //От A до B – 2
    //task_3_3(); //Сумма чисел
//-------------------------------
    //task_4_1(); //Амёба
    //task_4_2(); //Степень пятерки
//-------------------------------
    //task_5_1(); //Количество чисел в последовательности
    //task_5_2(); //Средний рост
    //task_5_3(); //Максимум последовательности
    //task_5_4(); //Сколько пятерок?
    //task_5_5(); //Равные соседи
    //task_5_6(); //Количество чисел, больших предыдущего
    //task_5_7(); //На сколько выше?
    //task_5_8(); //Потерянная карточка

    return 0;
}

void task_1_1() { //Здоровый сон
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cout << i << (i == 1 ? "" : " ");
    }
    cout << endl;
}

void task_1_2() { //Звёздопад
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

void task_1_3() { //10 квадратов
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        cout << n * n << " " << 4 * n << endl;
    }
}

void task_1_4() { //Использование счётчика
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Number of clouds: " << i << endl;
    }
}

void task_1_5() { //Проверка чисел интервала
    int a, b, c;
    cin >> a >> b >> c;
    bool first = true;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

void task_1_6() { //Степень пятерки
    long long n;
    cin >> n;
    if (n <= 0) {
        cout << "NO" << endl;
        return;
    }
    while (n % 5 == 0 && n > 1) {
        n /= 5;
    }
    cout << (n == 1 ? "YES" : "NO") << endl;
}

void task_1_7() { //Найди число-1
    long long n;
    cin >> n;
    long long res = (n / 19 + 1) * 19;
    cout << res << endl;
}

void task_1_8() { //Найди число-2
    long long n, d;
    cin >> n >> d;
    cout << (n / d) * d << endl;
}

void task_2_1() { //Обработка входных данных – 1
    for (int i = 0; i < 10; i++) {
        long long x;
        cin >> x;
        cout << 2 * x * x << endl;
    }
}

void task_2_2() { //Обработка входных данных – 2
    for (int i = 0; i < 10; i++) {
        long long x;
        cin >> x;
        cout << 25 + abs(x) << endl;
    }
}

void task_3_1() { //От A до B – 1
    long long a, b;
    cin >> a >> b;
    long long start = min(a, b);
    long long end = max(a, b);
    for (long long i = start; i <= end; i++) {
        cout << i << endl;
    }
}

void task_3_2() { //От A до B – 2
    long long a, b;
    cin >> a >> b;
    if (a <= b) {
        for (long long i = a; i <= b; i++) cout << i << endl;
    } else {
        for (long long i = a; i >= b; i--) cout << i << endl;
    }
}

void task_3_3() { //Сумма чисел
    long long a, b;
    cin >> a >> b;
    long long min_v = min(a, b);
    long long max_v = max(a, b);
    long long sum = (min_v + max_v) * (max_v - min_v + 1) / 2;
    cout << sum << endl;
}

void task_4_1() { //Амёба
    int n;
    cin >> n;
    long long amoebas = 1;
    for (int i = 0; i < n / 3; i++) {
        amoebas *= 2;
    }
    cout << amoebas << endl;
}

void task_4_2() { //Степень пятерки
    long long n;
    cin >> n;
    if (n <= 0) {
        cout << "NO" << endl;
        return;
    }
    while (n % 5 == 0 && n > 1) {
        n /= 5;
    }
    cout << (n == 1 ? "YES" : "NO") << endl;
}

void task_5_1() { //Количество чисел в последовательности
    int count = 0;
    long long x;
    while (cin >> x && x != 0) {
        count++;
    }
    cout << count << endl;
}

void task_5_2() { //Средний рост
    int n;
    cin >> n;
    long long sum_boys = 0, count_boys = 0;
    long long sum_girls = 0, count_girls = 0;
    for (int i = 0; i < n; i++) {
        long long h;
        cin >> h;
        if (h < 0) {
            sum_boys += (-h);
            count_boys++;
        } else {
            sum_girls += h;
            count_girls++;
        }
    }
    cout << (count_boys > 0 ? sum_boys / count_boys : 0) << " " 
         << (count_girls > 0 ? sum_girls / count_girls : 0) << endl;
}

void task_5_3() { //Максимум последовательности
    long long x;
    long long max_val = -2000000000;
    bool first = true;
    while (cin >> x && x != 0) {
        if (first || x > max_val) {
            max_val = x;
            first = false;
        }
    }
    cout << max_val << endl;
}

void task_5_4() { //Сколько пятерок?
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m == 5) count++;
    }
    cout << count << endl;
}

void task_5_5() { //Равные соседи
    long long prev, curr;
    bool found = false;
    if (cin >> prev && prev != -1) {
        while (cin >> curr && curr != -1) {
            if (curr == prev) {
                found = true;
            }
            prev = curr;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}

void task_5_6() { //Количество чисел, больших предыдущего
    long long prev, curr;
    int count = 0;
    if (cin >> prev && prev != 0) {
        while (cin >> curr && curr != 0) {
            if (curr > prev) {
                count++;
            }
            prev = curr;
        }
    }
    cout << count << endl;
}

void task_5_7() { //На сколько выше?
    int n;
    cin >> n;
    long long min_h = 1000, max_h = -1000;
    for (int i = 0; i < n; i++) {
        long long h;
        cin >> h;
        if (h < min_h) min_h = h;
        if (h > max_h) max_h = h;
    }
    cout << max_h - min_h << endl;
}

void task_5_8() { //Потерянная карточка
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    long long actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long c;
        cin >> c;
        actual_sum += c;
    }
    cout << sum - actual_sum << endl;
}