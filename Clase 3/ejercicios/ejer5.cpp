#include <iostream>
#include <cmath>

using namespace std;

float f(float x);
float integraltrap(float a, float b, int N);

int main()
{
    int N;
    float a, b;

    cout << "introduzca los valores extremos del intervalo" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "ingrese el numero de intervalo de division" << endl;
    cin >> N;

    try
    {
        cout << "la integral de la funcion entre a y b es: " << integraltrap(a, b, N) << endl;
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

float integraltrap(float a, float b, int N)
{

    if (a > b)
    {
        throw invalid_argument("a debe ser menor que b");
    }

    float A = 0;
    float h = (b - a) / N;

    for (int i = 0; i < N; i++)
    {
        A += ((f(a + i * h)) + f(a + (i + 1) * h)) * (h / 2);
    }

    return A;
}