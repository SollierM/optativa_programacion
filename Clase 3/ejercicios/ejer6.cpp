#include <iostream>
#include <cmath>

using namespace std;

double fact(int N)
{
    if (N < 1)
    {
        throw invalid_argument("no puedes calcular el factorial de un numero menor que 1");
    }

    if (N == 1)
    {
        return 1;
    }

    return N * fact(N - 1);
}

int main()
{
    int N;
    cout << "ingrese el numero del que quiere obtener su factorial ";
    cin >> N;

    try
    {
        cout << N << "!= " << fact(N) << endl;
    }
    catch (exception &e)
    {
        cout << "ERROR! " << e.what() << endl;
    }

    return 0;
}