#include <iostream>
#include <array>

using namespace std;

int main()
{
    int N, P = 0;

    cout << "ingrese dimension de los vectores: ";
    cin >> N;

    int v[N];
    int u[N];

    for (int i = 0; i < N; i++)
    {
        cout << "v" << i + 1 << "= ";
        cin >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << "u" << i + 1 << "= ";
        cin >> u[i];
    }

    for (int i = 0; i < N; i++)
    {
        P += (v[i] * u[i]);
    }
    cout << "u . v = " << P;

    return 0;
}