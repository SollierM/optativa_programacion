#include <iostream>
#include <cmath>

using namespace std;

float f(float x);
int signo(float x);
float raiz(float a, float b, int P);

int main()
{
    int P;
    float a, b;

    cout << "ingrese el numero de iteraciones" << endl;
    cin >> P;

    cout << "introduzca los valores del intervalo" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    try
    {
        cout << "la raiz de la funcion entre a y b es: " << raiz(a, b, P) << endl;
    }
    catch (exception &e)
    {
        cout << "ERROR! " << e.what() << endl;
    }

    return 0;
}

float f(float x)
{
    return 4 - pow(x, 2);
}

int signo(float x)
{
    return x / abs(x);
}

float raiz(float a, float b, int P)
{
    if (signo(f(a)) == signo(f(b)))
    {
        throw invalid_argument("f(a) y f(b) no deben tener el mismo signo");
    }

    if (a > b)
    {
        throw invalid_argument("a debe ser menor que b");
    }

    if (f(a) == 0)
    {
        return a;
    }
    else if (f(b) == 0)
    {
        return b;
    }
    else
    {
        float R = 0;

        for (int i = 0; i < P; i++)
        {
            R = (a + b) / 2;

            if (signo(f(a)) == signo(f(R)))
            {
                a = R;
            }

            if (signo(f(b)) == signo(f(R)))
            {
                b = R;
            }

            if (f(R) == 0)
            {
                break;
            }
        }

        return R;
    }
}