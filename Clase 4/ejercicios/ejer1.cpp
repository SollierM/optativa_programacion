#include <iostream>
#include <cmath>

using namespace std;

float heron(float a, float b, float c)
{
    float S = (a + b + c) / 2;
    return sqrt(S * (S - a) * (S - b) * (S - c));
}

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

    vector2D operator-(vector2D other)
    {
        float x_res = this->x - other.x;
        float y_res = this->y - other.y;

        return vector2D(x_res, y_res);
    }

    vector2D operator*(float N)
    {
        float x_res = this->x * N;
        float y_res = this->y * N;

        return vector2D(x_res, y_res);
    }

    float modulo()
    {
        return sqrt(x * x + y * y);
    }

    void print()
    {
        cout << "<" << this->x << "; " << this->y << ">" << endl;

        return;
    }
};

class poligono
{
private:
    int N;
    float i[50];
    float j[50];

public:
    void setvalues()
    {
        try
        {
            cout << "ingrese la cantidad de lados del poligono:" << endl;
            cin >> this->N;

            if (N < 3 || N > 50)
            {
                throw invalid_argument("el poligono debe tener entre 0 y 50 lados");
            }

            cout << "ingrese las coordenadas del los puntos de los mismos:" << endl;
            for (int k = 0; k < N; k++)
            {
                cout << "coordenada x del punto " << k + 1 << " : ";
                cin >> this->i[k];
                cout << "coordenada y del punto " << k + 1 << " : ";
                cin >> this->j[k];
            }
        }
        catch (exception &e)
        {
            cout << "ERROR! " << e.what() << endl;
        }

        return;
    }

    void showvalues()
    {
        cout << "i[" << N << "] = { ";
        for (int k = 0; k < N; k++)
        {
            cout << i[k] << "; ";
        }
        cout << " }" << endl;

        cout << "j[" << N << "] = { ";
        for (int k = 0; k < N; k++)
        {
            cout << j[k] << "; ";
        }
        cout << "}" << endl;

        return;
    }

    float perimetro()
    {
        float p = 0;
        for (int k = 0; k < (N - 1); k++)
        {
            vector2D u(i[k + 1], j[k + 1]);
            vector2D v(i[k], j[k]);
            vector2D w = u - v;
            p += w.modulo();
        }
        vector2D u(i[0], j[0]);
        vector2D v(i[N - 1], j[N - 1]);
        vector2D w = u - v;
        p += w.modulo();

        return p;
    }

    float area()
    {
        float S = 0;

        for (int k = 1; k < N - 1; k++)
        {
            vector2D u(i[0], j[0]);
            vector2D v(i[k], j[k]);
            vector2D w(i[k + 1], j[k + 1]);
            vector2D a = v - u;
            vector2D b = w - v;
            vector2D c = u - w;
            S += heron(a.modulo(), b.modulo(), c.modulo());
        }

        return S;
    }
};

int main()
{
    poligono P;

    P.setvalues();

    cout << "el perimetro del poligono es: " << P.perimetro() << endl;

    cout << "el area del poligono es: " << P.area() << endl;

    return 0;
}