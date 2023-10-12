#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Проверьте свои знания! Введите числа для умножения:  " << endl;
    int u_num1;
    int u_num2;
    cin >> u_num1 >> u_num2;

    cout << "Введите результат умножения " << endl;
    int res = u_num1 * u_num2;
    int u_res;
    cin >> u_res;

    if (u_res == res) 
    {
        cout << "Молодец! Вы еще не забыли таблицу умножения  :]" << endl;
    }

    else 
    {
        cout << "Наверное стоит вспомнить таблицу умножения:[" << endl;
        cout << "Правильным ответом было: " << res;
    }

        return 0;
}
