#include <iostream>
#include <cmath>

using namespace std;

class vector2D
{
private:
    float x, y;

public:
    vector2D(float x_const, float y_const)
    {
        x = x_const;
        y = y_const;
    }

    vector2D operator+(vector2D other)
    {
        float x_res = this->x + other.x;
        float y_res = this->y + other.y;

        return vector2D(x_res, y_res);
    }

    vector2D operator*(float N)
    {
        float x_res = this->x * N;
        float y_res = this->y * N;

        return vector2D(x_res, y_res);
    }

    void print()
    {
        cout << "<" << this->x << "; " << this->y << ">" << endl;

        return;
    }
};

class sistema
{
private:
    int N;
    float i[50], j[50], x[50], y[50];
    
public:
    void setvalues()
    {
        cout << "cuantos vectores va a ingresar? " << endl;
        cin >> this->N;

        if (N <= 0 || N > 50)
        {
            invalid_argument("ingrese un numero de vectores entre 1 y 50");
        }

        cout << "ingrese los datos de los vectores" << endl;

        for (int k = 0; k < N; k++)
        {
            cout << "valor vector " << k + 1 << " , i: " << endl;
            cin >> this->i[k];
            cout << "valor vector " << k + 1 << " , j: " << endl;
            cin >> this->j[k];
            cout << "posicion vector " << k + 1 << " , x: " << endl;
            cin >> this->x[k];
            cout << "posicion vector " << k + 1 << " , y: " << endl;
            cin >> this->y[k];
        }
        return;
    }

    vector2D f_res()
    {
        float i_res = 0, j_res = 0;

        for (int k = 0; k < this->N; k++)
        {
            i_res += i[k];
            j_res += j[k];
        }

        return vector2D(i_res, j_res);
    }

    float torque(float A_x, float A_y)
    {
        float T = 0;

        for (int k = 0; k < N; k++)
        {
            T += hypot(x[k], y[k]) * hypot(i[k], j[k]) * cos(atan(j[k]/ i[k]) - atan((y[k] - A_y)/ (x[k] - A_x)) + acos(-1.0) / 2); //horario positivo, antihorario negativo//
        }

        return T;
    }
};

int main()
{
    sistema s;

    try
    {
        s.setvalues();
    }
    catch (exception &e)
    {
        cout << "ERROR!" << e.what() << endl;
    }

    vector2D F = s.f_res();

    cout << "el vector resultante es: ";

    F.print();

    float A_x, A_y;

    cout << "ingrese el punto donde quiera encontrar el torque:" << endl;
    cout << "A_x = ";
    cin >> A_x;
    cout << "A_y = ";
    cin >> A_y;

    cout << "el torque resultante es: " << s.torque(A_x, A_y) << endl;

    return 0;
}