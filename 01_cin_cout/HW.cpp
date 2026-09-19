#include <iostream>

using namespace std;

//Объявление функций (задач)
//void task_1();//1 A+B
void task_2();//Сколько тебе лет?

int main () {

    //Вызов функций(задач)
    //task_1(); //1 A+B
    task_2();//Сколько тебе лет?

    return 0;
}

void task_1() {//1 A+B
    int a = 0;
    int b = 0;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    
    int result = a + b;

    cout << "Ответ: " << result << "\n";
}

void task_2(){;//Сколько тебе лет?
    int b = 0;
    int n = 0;

    cout << "Введите год рождения: ";
    cin >> b;
    cout << "Введите текущий год: ";
    cin >> n;
    
    int result = n - b;

    cout << "Ответ: " << result << "\n";

}