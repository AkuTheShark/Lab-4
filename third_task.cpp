#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Введите букву станции: " << endl;

    char u_let;
    cin >> u_let;

    switch (u_let) 
    {
    case 'a':
    case 'A':

        cout << "Время в пути от станции А до станции В составит 10 минут." << endl;
        break;
        
    case 'b':
    case 'B':
        
        cout << "Время в пути от станции В до станции С составит 7 минут " << endl;
        break;

    case 'c':
    case 'C':

        cout << "Время в пути от станции С до станции D составит 9 минут" << endl;
        break;

    case 'd':
    case 'D':

        cout << "Время в пути от станции D до станции Е составит 20 минут" << endl;
        break;

    case 'e':
    case 'E':

        cout << "Время в пути от станции Е до станции А составит 5 минут" << endl;
        break;
    }

    return 0;
}
