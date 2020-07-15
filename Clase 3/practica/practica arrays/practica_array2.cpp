#include <iostream>
#include <array>

using namespace std;

int main()
{
    int N, S = 0;
    cout << "cuantos elementos quiere que tenga su vector?" << endl;
    cin >> N;
    int vector[N];
    for (int i = 0; i < N; i++)
    {
        cout << "valor nro" << i + 1 << ": ";
        cin >> vector[i];
    }
    for (int i = 0; i < N; i++)
    {
        S += vector[i];
    }
    cout<<"la suma de los valores es: "<<S;

    return 0;
}