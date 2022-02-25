// Avance de Proyecto de PBI.cpp

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int opcion;
    string nombre, trata, cita;
    string hora;

    do
    {
        cout << "\n Menu de Opciones" << endl;
        cout << "1.Agendar Cita" << endl;
        cout << "2.Modificar Cita" << endl;
        cout << "3.Eliminar Cita" << endl;
        cout << "4.Lista de Citas Vigentes" << endl;
        cout << "5.Limpiar Pantalla" << endl;
        cout << "6.Salir " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\nEscriba su nombre\n";
            cin >> nombre;
            cout << "\nQue tratamiento desea tomara\n";
            cin >> trata;
            cout << "\nQue dia desea agendar su cita\n";
            cin >> cita;
            cout << "\nA que hora acudira a su cita\n";
            cin >> hora;
            break;
        }
    } while (opcion != 6);
}