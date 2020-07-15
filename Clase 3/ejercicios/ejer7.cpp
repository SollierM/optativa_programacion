#include <iostream>
#include <cmath>

using namespace std;

int base(int N, int B, int M, int A)
{
    if (B < 0)
    {
        throw invalid_argument("ingrese base positiva");
    }

    float m = (N % B) * pow(10.0, A);

    M += m;

    if (N / B < 1)
    {
        return M;
    }
    else
    {
        N = N / B;
        cout << N << endl;
        A++;
        cout << A << endl;
        base(N, B, M, A);
    }
}

int main()
{
    int N, B, M = 0, A = 0;
    cout << "ingrese el numero en base 10" << endl;
    cin >> N;
    cout << "ingrese la base a la que quiere convertir el numero" << endl;
    cin >> B;

    try
    {
        cout << N << " en base " << B << " = " << base(N, B, M, A) << endl;
    }
    catch (exception &e)
    {
        cout << "ERROR! " << e.what() << endl;
    }

    return 0;
}