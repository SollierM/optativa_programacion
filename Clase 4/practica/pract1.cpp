#include <iostream>
#include <cmath>

using namespace std;

class vector3D
{
private:
    float x, y, z;

public:
    vector3D(float x_const, float y_const, float z_const)
    {
        x = x_const;
        y = y_const;
        z = z_const;
    }

    vector3D operator+(vector3D other)
    {
        float x_res = this->x + other.x;
        float y_res = this->y + other.y;
        float z_res = this->z + other.z;

        return vector3D(x_res, y_res, z_res);
    }

    vector3D operator*(float N)
    {
        float x_res = this->x * N;
        float y_res = this->y * N;
        float z_res = this->z * N;

        return vector3D(x_res, y_res, z_res);
    }

    void print()
    {
        cout << "<" << this->x << "; " << this->y << "; " << this->z << ">" << endl;

        return;
    }
};

int main()
{
    vector3D u(2, 3, 4);
    vector3D v(-1, 5, -7);

    cout << "u = ";
    u.print();
    cout << "v = ";
    v.print();

    vector3D w = u + v;
    cout << "w = u + v =";
    w.print();

    vector3D a = u * 2;
    cout << "a = 2u =";
    a.print();

    vector3D b = v * (-5);
    cout << "b = -5v =";
    b.print();

    vector3D c = a + b;
    cout << "c = a + b =";
    c.print();

    return 0;
}