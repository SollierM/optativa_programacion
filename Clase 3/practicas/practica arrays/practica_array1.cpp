#include <iostream>
#include <array>

using namespace std;

int main()
{
    int L = 0;

    char palabra[50];

    cout << "ingrese una palabra" << endl;

    cin >> palabra;

    while (palabra[L] != 0)
    {
        /*
        cout<<palabra[L]<<endl;
        */
        L++;
    }
    cout << "la palabra " << palabra << " tiene " << L << " letras." << endl;

    return 0;
}