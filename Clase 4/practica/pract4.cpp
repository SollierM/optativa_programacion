#include <iostream>
#include <cmath>

using namespace std;

class cuadrilatero
{
protected:
    int a, b, c, d;

public:
    cuadrilatero(int a_const, int b_const, int c_const, int d_const)
    {
        try
        {
            if (a_const <= 0 || b_const <= 0 || c_const <= 0 || d_const <= 0)
            {
                throw invalid_argument("los lados del cuadrilatero deben ser positivos");
            }
            else if (b_const > c_const + a_const && d_const <= b_const - a_const - c_const)
            {
                throw invalid_argument("reduzca la longitud del lado mayor o aumente la de los demas");
            }
            else if (c_const > b_const + a_const && d_const <= c_const - a_const - b_const)
            {
                throw invalid_argument("reduzca la longitud del lado mayor o aumente la de los demas");
            }
            else if (a_const > b_const + c_const && d_const <= a_const - b_const - c_const)
            {
                throw invalid_argument("reduzca la longitud del lado mayor o aumente la de los demas");
            }
            else if (d_const >= a_const + b_const + c_const)
            {
                throw invalid_argument("reduzca la longitud del lado mayor o aumente la de los demas");
            }

            a = a_const;
            b = b_const;
            c = c_const;
            d = d_const;
        }
        catch (exception &e)
        {
            cout << "ERROR! NO SE PUEDE CONSTRUIR EL CUADRILATERO: " << e.what() << endl;
        }
    }
};

class rectangulo : public cuadrilatero
{
public:
    rectangulo(int a, int b) : cuadrilatero(a, b, a, b){};

    int perimetro()
    {
        return 2 * this->a + 2 * this->b;
    }

    int area()
    {
        return this->a * this->b;
    }
};

int main()
{
    rectangulo C(2, 4);

    cout << "el perimetro del rectangulo es " << C.perimetro() << endl;
    cout << "el area del rectangulo es " << C.area() << endl;

    return 0;
}