#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()

{
    setlocale(LC_ALL, "RU");
    int a = 2, b = 4;
    double E = pow(10, -6), x, x0;
    cout << "Введите любое значение на интервале [2;4]:" << endl;
    cin >> x0;
    if (x0 >= a)
        if (x0 <= b)
        {
            x = x0 - (3 * x0 - 4 * log(x0) - 5) / (3 - 4 / x0);
            cout << x << endl;
            do
            {
                x0 = x;
                x = x0 - (3 * x0 - 4 * log(x0) - 5) / (3 - 4 / x0);
                cout << x << endl;

            } while (abs(x0 - x) >= E);
            cout << "Корень уравнения:" << x << endl;
        }
        else
            cout << "Неверно введено значение" << endl;
    else
        cout << "Неверно введено значение" << endl;
    return 0;
}

