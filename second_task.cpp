#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Введите день недели: " << endl;
    int u_num;
    cin >> u_num;

    switch (u_num) 
    {
    case 1:
        cout << "Понедельник: " << endl;
        cout << "[1] Дойти до коллежда (желательно)" << endl;
        cout << "[2] Выжить" << endl;

    case 2:
        cout << "Вторник: " << endl;
        cout << "[1] Сходить на физ-ру (ну хотя бы раз в месяц)" << endl;
        cout << "[2] Сделать дз по БД" << endl;

    case 3:
        cout << "Среда: " << endl;
        cout << "[1] Завтра всего две пары, можно ничего не делать" << endl;

    case 4:
        cout << "Четверг: " << endl;
        cout << "[1] Набраться моральных сил на пять пар" << endl;
        cout << "[2] Дописать конспект" << endl;

    case 5:
        cout << "Пятница: " << endl;
        cout << "[1] Дожить до конца пар" << endl;
        cout << "[2] Добраться до дома (сложно - пробки)" << endl;

    case 6:
        cout << "Суббота: " << endl;
        cout << "[1] Ура выходные" << endl;
        cout << "[2] Поиграть в геншин" << endl;

    case 7:
        cout << "Воскресенье: " << endl;
        cout << "[1] О нет, выходные заканчиваются" << endl;
        cout << "[2] Сделать дз на понедельник (если это домашка которую нельзя сделать на паре)" << endl;
    }

    
    return 0;
}
