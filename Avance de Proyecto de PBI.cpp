// Avance de Proyecto de PBI.cpp

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int opcion;
    string nombre, trata, dia;
    string hora, motiv;
    int prest, pres_unit, cant, total;
    

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
            cout << "\nQue tratamiento desea tomar\n";
            cin >> trata;
            cout << "\nCual es su motivo para tomar el tratamiento\n";
            cin >> motiv;
            cout << "\nQue dia desea agendar su cita\n";
            cin >> dia;
            cout << "\nA que hora acudira a su cita\n";
            cin >> hora;
            cout << "\nPrecio Unitario del tratamiento\n";
            cin >> prest;
            cout << "\nCanitdad del tratamiento\n";
            cin >> cant;
            cout << "\nPrecio Unitario\n";
            cin >> pres_unit;
            total = prest * cant;
            cout << "\nEl precio total es:\n"<< total <<endl;

            cout << "\nEl paciente: " << nombre << " genero una cita para las horas: " << hora << " el dia: "<< dia <<" para que se le ingrese el tratamiento de: " << endl;
                break;
        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            system("cls");
        }
    } while (opcion != 6);
}