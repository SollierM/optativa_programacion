#include <iostream>

using namespace std;

int main()
{

    string name, surname, dni, phone;

    cout << "ingrese su nombre y aprete enter" << endl;

    cin >> name;

    cout << "ingrese su apellido y aprete enter" << endl;

    cin >> surname;

    cout << "ingrese su DNI y aprete enter" << endl;

    cin >> dni;

    cout << "ingrese su numerod e telefono y aprete enter" << endl;

    cin >> phone;

    cout<<"sus datos ingresados son:"<<endl;

    cout<<"nombre: "<<name<<endl;
    
    cout<<"apellido: "<<surname<<endl;

    cout<<"DNI: "<<dni<<endl;

    cout<<"numero de telefono: "<<phone<<endl;

    return 0;
}