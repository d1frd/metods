
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;


int main() 
{
    setlocale(LC_ALL, "RU");
    double x0, x1, E = pow(10, -6);
    cout << "Введите начальное значение: " << endl;
    cin >> x0;
    x1 = ((4 * log(x0) + 5) / 3);
    cout << x1 << endl;
    do
    {
        x0 = x1;
        x1 = ((4 * log(x0) + 5) / 3);
        cout << x1 << endl;
    } while (abs(x0-x1)>=E);
    cout << "Корень уравнения:" << x1 << endl;
    return 0;
}
