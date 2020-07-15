#include <iostream>
#include <cmath>

using namespace std;

float para(int A, int B, int C);

int main()
{
    int A, B, C;
    cout << "ingrese los datos de los lado del paralelepipedo" << endl;
    cin >> A;
    cin >> B;
    cin >> C;
    para(A,B,C);
    return 0;
}

float para(int A, int B, int C)
{
    float V = A * B * C;
    float S = 2 * (A * B + A * C + B * C);
    float P = 4 * (A + B + C);
    cout << "el volumen del paralelepipedo es: " << V << endl;
    cout << "el area del paralelepipedo es: " << S << endl;
    cout << "el perimetro del paralelepipedo es: " << P << endl;
}