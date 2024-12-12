#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double E = pow(10, -6), a = 2, b = 4, pol;
    while (abs(a - b) >= E)
    {
        pol = (a + b) / 2;
        if ((3 * a - 4 * log(a) - 5) * (3 * pol - 4 * log(pol) - 5) > 0)
        {
            a = pol;
        }
        else
        {
            b = pol;
        }
        cout << pol << endl;
    }
    cout <<"Корень уравнения:"<< pol<<endl;
    return 0;
}

