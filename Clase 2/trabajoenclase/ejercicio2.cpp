#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int N;

    cout << "ingresar el numero de la sucesion de fibonacci: " << endl;

    cin >> N;

    while (N - b != 0)
    {
        for (int i = 0; i < N - 1; i++)
        {
            b = b + a;
            a = b;
        }
    }

    cout << "el numero de la sucesion de fibonacci es: " << b << endl;

    return 0;
}