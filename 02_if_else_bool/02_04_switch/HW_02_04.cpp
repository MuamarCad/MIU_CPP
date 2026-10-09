#include <iostream>
#include "math.h"

using namespace std;

//Объявление функций (задач)
//void task_1(); //Медаль
//void task_2(); //Гуманоиды
//void task_3(); //Оценка
//void task_4(); //День недели - 2
//void task_5(); //Времена года
//void task_6(); //Светофор
//void task_7(); //Гороскоп

int main() {
    //Вызов функций(задач)
    //task_1(); //Медаль
    //task_2(); //Гуманоиды
    //task_3(); //Оценка
    //task_4(); //День недели - 2
    //task_5(); //Времена года
    //task_6(); //Светофор
    //task_7(); //Гороскоп

    return 0;
}

void task_1() { //Медаль
    int n = 0;

    cin >> n;

    switch (n) {
        case 1:
            cout << "GOLD" << endl;
            break;
        case 2:
            cout << "SILVER" << endl;
            break;
        case 3:
            cout << "BRONZE" << endl;
            break;
        default:
            cout << "NO MEDAL" << endl;
    }
}

void task_2() { //Гуманоиды
    int x = 0;

    cin >> x;

    switch (x) {
        case 1:
            cout << "Cyclop" << endl;
            break;
        case 2:
            cout << "Earthman" << endl;
            break;
        default:
            cout << "Multieye" << endl;
    }
}

void task_3() { //Оценка
    int k = 0;

    cin >> k;

    switch (k) {
        case 1:
            cout << "very poor" << endl;
            break;
        case 2:
            cout << "less than satisfactory" << endl;
            break;
        case 3:
            cout << "satisfactory" << endl;
            break;
        case 4:
            cout << "good" << endl;
            break;
        case 5:
            cout << "excellent" << endl;
            break;
        default:
            cout << "error" << endl;
    }
}

void task_4() { //День недели - 2
    int d = 0;

    cin >> d;

    switch (d) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TUESDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THURSDAY" << endl;
            break;
        case 5:
            cout << "FRIDAY" << endl;
            break;
        case 6:
            cout << "SATURDAY" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
    }
}

void task_5() { //Времена года
    int m = 0;

    cin >> m;

    switch (m) {
        case 12:
        case 1:
        case 2:
            cout << "WINTER" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "SPRING" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "SUMMER" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "AUTUMN" << endl;
            break;
    }
}

void task_6() { //Светофор
    int t = 0;

    cin >> t;

    switch (t % 6) {
        case 0:
        case 1:
        case 2:
            cout << "GREEN" << endl;
            break;
        case 3:
            cout << "YELLOW" << endl;
            break;
        case 4:
        case 5:
            cout << "RED" << endl;
            break;
    }
}

void task_7() { //Гороскоп
    int D = 0;
    int M = 0;

    cin >> D >> M;

    switch (M) {
        case 1:
            if (D <= 19)
                cout << "Capricorn" << endl;
            else
                cout << "Aquarius" << endl;
            break;

        case 2:
            if (D <= 18)
                cout << "Aquarius" << endl;
            else
                cout << "Pisces" << endl;
            break;

        case 3:
            if (D <= 20)
                cout << "Pisces" << endl;
            else
                cout << "Aries" << endl;
            break;

        case 4:
            if (D <= 19)
                cout << "Aries" << endl;
            else
                cout << "Taurus" << endl;
            break;

        case 5:
            if (D <= 20)
                cout << "Taurus" << endl;
            else
                cout << "Gemini" << endl;
            break;

        case 6:
            if (D <= 21)
                cout << "Gemini" << endl;
            else
                cout << "Crayfish" << endl;
            break;

        case 7:
            if (D <= 22)
                cout << "Crayfish" << endl;
            else
                cout << "Leo" << endl;
            break;

        case 8:
            if (D <= 22)
                cout << "Leo" << endl;
            else
                cout << "Virgo" << endl;
            break;

        case 9:
            if (D <= 22)
                cout << "Virgo" << endl;
            else
                cout << "Libra" << endl;
            break;

        case 10:
            if (D <= 22)
                cout << "Libra" << endl;
            else
                cout << "Scorpio" << endl;
            break;

        case 11:
            if (D <= 21)
                cout << "Scorpio" << endl;
            else
                cout << "Sagittarius" << endl;
            break;

        case 12:
            if (D <= 21)
                cout << "Sagittarius" << endl;
            else
                cout << "Capricorn" << endl;
            break;
    }
}