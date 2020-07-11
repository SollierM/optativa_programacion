#include <iostream>
#include <cmath>

using namespace std;

float rad(float G);
float gra(float R);
void pol(float v[]);
void rec(float v[]);

int main()
{
    char N;
    float v[2];

    cout << "ingrese las compenentes del vector de 2 dimensiones:" << endl;
    cin >> v[0];
    cin >> v[1];

    while (N != 83 || N != 115)
    {
        cout << "Si desea pasar las coordenadas a polar escriba P y de enter" << endl;
        cout << "Si desea pasar las coordenadas a rectangular escriba R y de enter" << endl;
        cout << "Si desea salir escriba S y de enter" << endl;
        cin >> N;

        if (N == 80 || N == 112)
        {
            pol(v);
        }        
        else if (N == 82 || N == 114)
        {
            rec(v);
        }
        
    }

    return 0;
}

void pol(float v[])
{
    cout << "el vector (" << v[0] << ", " << v[1] << ") en forma polar es: (";
    float M = hypot(v[0], v[1]);
    float A = gra(atan2(v[1], v[0]));
    v[0] = M;
    v[1] = A;
    cout << v[0] << "; " << v[1] << ")" << endl;

    return;
}

void rec(float v[])
{
    cout << "el vector (" << v[0] << "; " << v[1] << ") en forma rectangular es: (";
    float v1 = v[0] * cos(rad(v[1]));
    float v2 = v[0] * sin(rad(v[1]));
    v[0] = v1;
    v[1] = v2;
    cout << v[0] << ", " << v[1] << ")" << endl;

    return;
}

float rad(float G)
{
    return G * (acos(-1.0) / 180.0);
}

float gra(float R)
{
    return R * (180.0 / acos(-1.0));
}
