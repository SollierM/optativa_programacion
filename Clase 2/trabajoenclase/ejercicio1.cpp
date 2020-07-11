#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "ingrese el numero para obtener su factorial: " << endl;

    cin >> N;

    double F=1;

    int i;

    for (i=1; i<=N; i++)
    {
        F*=i;
    }

    cout << N << "!= " << F << endl; 

    return 0;
}