#include <iostream>
#include <cmath>

using namespace std;

void polar(double v[]);

int main()
{
    double v[2];

    cout << "ingrese las compenentes del vector de 2 dimensiones:" << endl;
    cin >> v[0];
    cin >> v[1];

    cout << "el vector en forma rectangular se escribe: (" << v[0] << "; " << v[1] << ")" << endl;

    polar(v);

    cout << "el vector en forma polar se escribe: (" << v[0] << "; " << v[1] << ")" << endl;

    return 0;
}

void polar(double v[])
{
    double M = hypot(v[0], v[1]);
    double A = (atan2(v[1], v[0])) * (180 / acos(-1.0));
    v[0] = M;
    v[1] = A;

    return;
}
