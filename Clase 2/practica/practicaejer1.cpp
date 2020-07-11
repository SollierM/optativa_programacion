#include <iostream>

#include <cmath>

using namespace std;

int main()
{

    float N = 0, B = 0, n = 0;

    cout << "introduzca el numero para transformarlo a binario (entre 0 y 2^31)" << endl;

    cin >> N;

    n = N;

    for (int i = 31; i >= 0; i = i - 1)
    {
        if (0 <= (n - pow(2, i)))
        {
           
            B = B + (pow(10, i));

            n = n - pow(2, i);

        }
    }

    cout << "el numero " << N << " en binario es: " << B << endl;

    return 0;
}

