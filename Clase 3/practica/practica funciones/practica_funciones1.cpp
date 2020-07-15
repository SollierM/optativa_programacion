#include <iostream>
#include <cmath>

using namespace std;

void polar(int v[]);

int main()
{
    int v[2];

    cout << "ingrese las compenentes del vector de 2 dimensiones:" << endl;
    cin >> v[0];
    cin >> v[1];
    polar(v);

    return 0;
}

void polar(int v[])
{
    cout << "el vector en forma polar se escribe: (" << hypot(v[0], v[1]) << "; " << (atan2(v[1], v[0])) * (180 / acos(-1.0)) << ")";
    return;
}
