#include <iostream>
#include <array>

using namespace std;

int main()
{
    int N, P = 0;

    cout << "ingrese dimension de los vectores: ";
    cin >> N;

    int v[N - 1];
    int u[N - 1];

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

    cout << "( ";
    for (int i = 0; i < N - 1; i++)
    {
        cout << v[i] << "; ";
    }
    cout << v[N - 1] << " ) . ";

    cout << "( ";
    for (int i = 0; i < N - 1; i++)
    {
        cout << u[i] << "; ";
    }
    cout << u[N - 1] << " ) = " << P;

    return 0;
}