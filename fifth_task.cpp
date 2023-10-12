#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Поверить не могу что кому-то нужна такая программа...Ладно, введите номер: " << endl;
    int u_num;
    cin >> u_num;

    switch (u_num) 
    {
    case 1:
        cout << "Большой палец" << endl;

    case 2:
        cout << "Указательный палец" << endl;

    case 3:
        cout << "Средний палец" << endl;

    case 4: 
        cout << "Безымянный палец" << endl;

    case 5:
        cout << "Мизинец" << endl;
    }

    return 0;
}