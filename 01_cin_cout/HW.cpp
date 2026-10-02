#include <iostream>
#include "math.h"

using namespace std;

//Объявление функций (задач)
//void task_1(); //A+B
//void task_2(); //Сколько тебе лет?
//void task_3(); //Билеты
//void task_4(); //Прямоугольник
//void task_5(); //A-B
//void task_6(); //Воздушные шарики
//void task_7(); //Лесенка
//void task_8(); //Возведи в степень
//void task_9(); //Следующее и предыдущее
//void task_10(); //Выражение-1
//void task_11(); //Вывести выражение
//void task_12(); //Дни в неделе
//void task_13(); //Выражение-4
//void task_14(); //Дни недели-1
void task_15(); //Дни недели-2

int main () {
    //Вызов функций(задач)
    //task_1(); //A+B
    //task_2(); //Сколько тебе лет?
    //task_3(); //Билеты
    //task_4(); //Прямоугольник
    //task_5(); //A-B
    //task_6(); //Воздушные шарики
    //task_7(); //Лесенка
    //task_8(); //Возведи в степень
    //task_9(); //Следующее и предыдущее
    //task_10(); //Выражение-1
    //task_11(); //Вывести выражение
    //task_12(); //Дни в неделе
    //task_13(); //Выражение-4
    //task_14(); //Дни недели-1
    task_15(); //Дни недели-2

    return 0;
}
/*
void task_1() { //A+B
    int a = 0;
    int b = 0;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    
    int result = a + b;

    cout << "Ответ: " << result << "\n";
}*/
/*
void task_2() { //Сколько тебе лет?
    int b = 0;
    int n = 0;

    cout << "Введите год рождения: ";
    cin >> b;
    cout << "Введите текущий год: ";
    cin >> n;
    
    int result = n - b;

    cout << "Ответ: " << result << "\n";

}*/
/*
void task_3() { //Билеты
    int s = 0;
    int a = 0;

    cout << "Введите общую стоимость: ";
    cin >> s;
    cout << "Введите стоимость взрослого билета: ";
    cin >> a;
    
    int count = a * 3;
    int result = s - count;

    cout << "Ответ: " << result << "\n";

}*/
/*
void task_4() { //Прямоугольник
    int a = 0;
    int b = 0;

    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    
    int per = (a * 2) + (b * 2);
    int s = a * b;

    cout << "Ответ: " << per << " " << s << "\n";

}*/
/*
void task_5() { //A-B
    int a = 0;
    int b = 0;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    
    int result = a - b;

    cout << "Ответ: " << result << "\n";
}*/
/*
void task_6() { //Воздушные шарики
    int s = 0;
    int n = 0;
    int time = 0;

    cout << "Введите значение для Саши: ";
    cin >> s;
    cout << "Введите значение для Никиты: ";
    cin >> n;
    cout << "Введите время (в часах): ";
    cin >> time;
    
    int result = (s + n) * time;

    cout << "Ответ: " << result << "\n";

}*/
/*
void task_7() { //Лесенка
    int n1 = 0;
    int next1 = 0;
    int next2 = 0;

    cout << "Введите число: ";
    cin >> n1;
    
    next1 = n1 + 1;
    next2 = n1 + 2;

    cout << n1 << "\n    " << next1 << "\n\t" << next2 << "\n";

}*/
/*
void task_8() { //Возведи в степень
    int num = 0;
    int n2 = 0;
    int n3 = 0;
    int n5 = 0;
    

    cout << "Введите число: ";
    cin >> num;
    
    n2 = pow(num, 2); // num * num
    n3 = pow(num, 3); // num * num * num
    n5 = pow(num, 5); // num * num * num * num * num


    cout << n2 << " " << n3 << " " << n5 << "\n";
    
}*/
/*
void task_9() { //Следующее и предыдущее
    int num = 0;
    int nextn = 0;
    int prev = 0;

    cout << "Введите число: ";
    cin >> num;
    
    nextn = num + 1;
    prev = num - 1;

    cout << "The next number for the number " << num << " is " << nextn << "!" << "\n";
    cout << "The previous number for the number " << prev << " is " << prev << "!" << "\n";

}*/
/*
void task_10() { //Выражение-1
    int num = 0;
    int result = 0;

    cout << "Введите число: ";
    cin >> num;
    
    result = (7 * pow(num, 2)) - (3 * num) + 6;

    cout << result << "\n";

}*/
/*
void task_11() { //Вывести выражение
    int A = 0;
    int B = 0;
    int C = 0;
    int result = 0;

    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;
    cout << "Введите число C: ";
    cin >> C;
    
    result = A + B - C;

    cout << A << " + " << B << " - " << C << " = " << result << "\n";

}*/
/*
void task_12() { //Дни в неделе
    int day = 0;
    int result = 0;

    cout << "Введите число дней: ";
    cin >> day;
    
    result = day / 7;

    cout << result << "\n";

}*/
/*
void task_13() { //Выражение-4
    int num = 0;
    int result = 0;

    cout << "Введите число: ";
    cin >> num;
    
    result = (((3 * pow(num, 3)) + (18 * pow(num, 2))) * num) + ((12 * pow(num, 2)) - 5);

    cout << result << "\n";

}*/
/*
void task_14() { //Дни недели-1
    int day = 0;
    int result = 0;

    cout << "Введите номер дня: ";
    cin >> day;
    
    result = day % 7;

    cout << result << "\n";

}*/

void task_15() { //Дни недели-2
    int day = 0;
    int num = 0;
    int result = 0;

    cout << "Введите номер дня года: ";
    cin >> day;
    cout << "Введите номер дня недели: ";
    cin >> num;
    
    result = num / day;

    cout << result << "\n";

}