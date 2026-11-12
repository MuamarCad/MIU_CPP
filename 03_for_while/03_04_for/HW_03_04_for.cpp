#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Объявление функций (задач)
void task_1_1(); //Циклы. Строим город - 1
void task_1_2(); //Циклы. Строим город - 2
void task_1_3(); //Циклы. Строим город - 3
void task_1_4(); //Циклы. Строим город - 4
//-------------------------------
void task_2_1(); //Циклы. Строим город - 5
void task_2_3(); //Циклы. Строим город - 6
void task_2_4(); //Циклы. Строим город - 7
void task_2_5(); //Циклы. Строим город - 8
//-------------------------------
void task_3_1(); //Циклы. Строим город - 9
void task_3_2(); //Циклы. Строим город - 10
void task_3_3(); //Циклы. Строим город - 11
void task_3_4(); //Циклы. Строим город - 12
//-------------------------------
void task_4_1(); //Циклы. Строим город - 13
void task_4_2(); //Циклы. Строим город - 14
void task_4_3(); //Циклы. Строим город - 15
void task_4_4(); //Циклы. Строим город - 16

int main() {
    //Вызов функций (задач)
    //task_1_1(); //Циклы. Строим город - 1
    //task_1_2(); //Циклы. Строим город - 2
    //task_1_3(); //Циклы. Строим город - 3
    //task_1_4(); //Циклы. Строим город - 4
//-------------------------------
    //task_2_1(); //Циклы. Строим город - 5
    //task_2_3(); //Циклы. Строим город - 6
    //task_2_4(); //Циклы. Строим город - 7
    //task_2_5(); //Циклы. Строим город - 8
//-------------------------------
    //task_3_1(); //Циклы. Строим город - 9
    //task_3_2(); //Циклы. Строим город - 10
    //task_3_3(); //Циклы. Строим город - 11
    //task_3_4(); //Циклы. Строим город - 12
//-------------------------------
    //task_4_1(); //Циклы. Строим город - 13
    //task_4_2(); //Циклы. Строим город - 14
    //task_4_3(); //Циклы. Строим город - 15
    //task_4_4(); //Циклы. Строим город - 16

    return 0;
}

void task_1_1() { //Циклы. Строим город - 1
    int n;
    if (!(cin >> n)) return;
    for (int i = 1; i <= n; ++i) {
        cout << "Number of pigs: " << i << "\n";
    }
}

void task_1_2() { //Циклы. Строим город - 2
    int n;
    if (!(cin >> n)) return;
    for (int i = 0; i < n; ++i) {
        cout << "[_]";
    }
    cout << "\n";
}

void task_1_3() { //Циклы. Строим город - 3
    int n;
    if (!(cin >> n)) return;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 != 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

void task_1_4() { //Циклы. Строим город - 4
    long long x, n;
    if (!(cin >> x >> n)) return;
    for (int i = 0; i < n; ++i) {
        x *= 2;
    }
    cout << x << "\n";
}

void task_2_1() { //Циклы. Строим город - 5
    int x;
    if (!(cin >> x)) return;
    for (int i = x; i >= 50; i -= 5) {
        cout << i << "\n";
    }
}

void task_2_3() { //Циклы. Строим город - 6
    long long x;
    if (!(cin >> x)) return;
    long long sum = x * (x + 1) / 2;
    cout << sum << "\n";
}

void task_2_4() { //Циклы. Строим город - 7
    long long x;
    if (!(cin >> x)) return;
    for (long long i = 1; i <= x; ++i) {
        if (x % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

void task_2_5() { //Циклы. Строим город - 8
    int n;
    if (!(cin >> n)) return;
    int count = 0;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        long long k;
        cin >> k;
        if (k > 1000) {
            count++;
            total += k;
        }
    }
    cout << count << " " << total << "\n";
}

void task_3_1() { //Циклы. Строим город - 9
    int n;
    if (!(cin >> n)) return;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        long long k;
        cin >> k;
        total += k;
    }
    int x, m;
    cin >> x >> m;
    for (int i = 0; i < x; ++i) {
        total *= m;
    }
    cout << total << "\n";
}

void task_3_2() { //Циклы. Строим город - 10
    int n;
    if (!(cin >> n)) return;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        int age, edu;
        cin >> age >> edu;
        if (age > 22 && age < 30 && edu >= 5) {
            found = true;
        }
    }
    cout << (found ? "YES" : "NO") << "\n";
}

void task_3_3() { //Циклы. Строим город - 11
    int n;
    if (!(cin >> n)) return;
    int first_teeth = -1;
    bool same = true;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        if (i == 0) {
            first_teeth = m;
        } else if (m != first_teeth) {
            same = false;
        }
    }
    cout << (same ? "YES" : "NO") << "\n";
}

void task_3_4() { //Циклы. Строим город - 12
    int n;
    if (!(cin >> n)) return;
    long long sum_new = 0, sum_old = 0;
    for (int i = 0; i < n; ++i) {
        long long x1, x2;
        cin >> x1 >> x2;
        sum_new += x1;
        sum_old += x2;
    }
    //Проверка без использования вещественного типа данных:
    //sum_new / n >= sum_old / n + 20  =>  sum_new >= sum_old + 20 * n
    if (sum_new >= sum_old + 20LL * n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

void task_4_1() { //Циклы. Строим город - 13
    int n;
    if (!(cin >> n)) return;
    int k1 = 0, k2 = 0, k3 = 0;
    long long X = 0;
    for (int i = 0; i < n; ++i) {
        long long p;
        cin >> p;
        X += p;
        if (p > 0) k1++;
        else if (p < 0) k2++;
        else k3++;
    }
    cout << k1 << " " << k2 << " " << k3 << "\n";
    cout << X << "\n";
}

void task_4_2() { //Циклы. Строим город - 14
    int n;
    if (!(cin >> n)) return;
    long long max_older_income = -1;
    int older_idx = 0;
    long long max_youth_income = -1;
    int youth_idx = 0;

    for (int i = 1; i <= n; ++i) {
        int age;
        long long income;
        cin >> age >> income;
        
        if (age >= 1 && age <= 12) continue; //Предложения детей игнорируются
        
        if (age >= 30) {
            if (income > max_older_income) {
                max_older_income = income;
                older_idx = i;
            }
        } else if (age >= 13 && age <= 29) {
            if (income > max_youth_income) {
                max_youth_income = income;
                youth_idx = i;
            }
        }
    }

    if (older_idx == 0 && youth_idx == 0) {
        cout << 0 << "\n";
    } else if (older_idx == 0) {
        cout << youth_idx << "\n";
    } else if (youth_idx == 0) {
        cout << older_idx << "\n";
    } else {
        if (max_youth_income >= max_older_income + 100000) {
            cout << youth_idx << "\n";
        } else {
            cout << older_idx << "\n";
        }
    }
}

void task_4_3() { //Циклы. Строим город - 15
    int n, k;
    if (!(cin >> n >> k)) return;
    
    string months[] = {"", "January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int dow = k;          //День недели (1=Пн - 7=Вс)
    int month = 1;
    int day_of_month = 1;
    
    while (month <= 12) {
        //Суббота (6) 5-го или 6-го числа
        if (dow == 6 && (day_of_month == 5 || day_of_month == 6)) {
            cout << day_of_month << " of " << months[month] << "\n";
        }
        //Четверг (4) числа, кратного n
        if (dow == 4 && (day_of_month % n == 0)) {
            cout << day_of_month << " of " << months[month] << "\n";
        }
        
        day_of_month++;
        dow = (dow % 7) + 1;
        if (day_of_month > days_in_month[month]) {
            month++;
            day_of_month = 1;
        }
    }
}

void task_4_4() { //Циклы. Строим город - 16
    int L;
    if (!(cin >> L)) return;
    
    long long r1 = 100000;
    long long r2 = 200000;
    long long total_income = 0;
    
    for (int i = 0; i < L; ++i) {
        long long current_income = r1 + r2;
        total_income += current_income;
        
        //Инвестируем весь собранный доход в менее доходную область
        if (r1 < r2) {
            r1 = current_income;
        } else {
            r2 = current_income;
        }
    }
    
    cout << max(r1, r2) << " " << total_income << "\n";
}