// Dentista.cpp
#include <iostream>
#include<cstring>

using namespace std;

struct paciente
{
    int numss;
    string nombre;
    int edad;
    string clinica;
};

struct citas
{
    int numcita;
    int nss;
    string especialista;
    string motivo;

};



int main()
{
    paciente pacientes[2];
    citas cita[2];
    int opcion;
    int i;
    int j;
    int op2;
    int op3;


    string nombre, trata;
    string hora, motiv;
    int prest, pres_unit, total;


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
            cout << "\nA que hora acudira a su cita\n";
            cin >> hora; 
            cout << "\nQue tratamiento desea tomar\n";
            cin >> trata;
            cout << "\nCual es su motivo para tomar el tratamiento\n";
            cin >> motiv;
            cout << "\nPrecio Unitario del tratamiento\n";
            cin >> prest;
            cout << "\nPrecio Unitario\n";
            cin >> pres_unit; 

            total = prest;
            cout << "\nEl precio total es:\n" << total << endl;

            cout << "\nEl paciente: " << nombre << " genero una cita para las horas: " << hora << " para que se le ingrese el tratamiento de: " << trata << endl;
            break;
        case 2:
            printf("numero de cita que desea modificar: \n");
            cin >> j;
            j = j - 1; //1-1=0
            printf("1.-Nombre \n 2.Hora de Cita \n 3.-Tratamiento a tomar\n");
            cin >> op2;
            switch (op2)
            {
            case 1:
                for (i = j;i <= j;i++)
                {
                    cout << "ingrese el Nombre" << endl;
                    cin >> pacientes[i].nombre;
                }
                break;
            case 2:
                for (i = j;i <= j;i++)
                {
                    cout << "Ingrese hora de cita" << endl;
                    cin >> pacientes[i].edad;
                }
                break;
            case 3:
                for (i = j;i <= j;i++)
                {
                    cout << "ingrese tratamiento a tomar" << endl;
                    cin >> pacientes[i].clinica;
                }
                break;
            }
            break;

        case 3:
           
            break;
        case 4:
            for (i = 0;i < 2;i++)
            {
                cout << "numero cita: " << i + 1 << endl;
                cout << cita[i].nss << endl;
                cout << cita[i].especialista << endl;
                cout << cita[i].motivo << endl;

            }
            break;
            break;

        case 5:
            system("cls");
        }
    } while (opcion != 6);
}