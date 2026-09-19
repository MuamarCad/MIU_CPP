#include <iostream>

using namespace std;

//Объявление функций (задач)
void task_1();//1 A+B

int main () {

    //Вызов функций(задач)
    task_1(); //1 A+B

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