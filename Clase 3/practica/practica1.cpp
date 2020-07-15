#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string esc,a;
    cout << "que quiere escribir?" << endl;
    cin >> esc;

    ofstream archo;
    archo.open("arch.txt");
    archo << "hola master" << endl;
    archo.close();

    ifstream archi;
    archi.open("arch.txt");
    archi >> a;
    cout << "usted escribio: " << a << endl;
    archi.close();

    return 0;
}