// Dentista.cpp
#include <iostream>
#include<string>
#include<cstring>

using namespace std;


struct citas
{
    int cant;
    int prest_unit = 100;
    string hora;
    string trata;
    string nombre;
    string tomar;
    string motivo;

};



int main()
{

    citas cita[10];
    int opcion;
    int i;
    int j;
    int op2;
    int op3;
    double resultado = 0;
    double iva;
    string a;
    int t = 0;
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
            cout << "NUMERO DE CITA" << t + 1 << endl;
            cout << "ingrese su nombre" << endl;
            getline(cin, cita[t].nombre);
            getline(cin, cita[t].nombre);
            cout << "A que hora acudira a su cita" << endl;
            getline(cin, cita[t].hora);
            cout << "Que tratamiento desea tomar" << endl;
            getline(cin, cita[t].tomar);
            cout << "Motivo para tomar su tratamiento" << endl;
            getline(cin, cita[t].motivo);
            cout << "Cantidad del tratamiento a tomar: " << endl;
            cin >> cita[t].cant;

            resultado = cita[t].cant * cita[t].prest_unit;
            iva = resultado * 0.16;
            resultado = iva + resultado;

            cout << "El precio toal es: " << resultado << endl;

            cout << "El paciente: " << cita[t].nombre << " genero una cita para las horas: " << cita[t].hora << " para que se le ingrese el tratamiento de: " << cita[t].tomar << " por: " << cita[t].motivo << endl;
            t++;
            break;
        case 2:
            printf("Numero de cita que desea modificar: ");
            cin >> j;
            j = j - 1; //1-1=0
            printf("\n1.- Nombre \n 2.- Hora \n 3.- Tratamiento \n 4.- Motivo \n");
            cin >> op2;
            getline(cin, a);
            switch (op2)
            {
            case 1:
                for (i = j;i <= j;i++)
                {
                    cout << "NUMERO DE CITA" << i + 1 << endl;
                    cout << "ingrese el nombre: " << endl;
                    getline(cin, cita[i].nombre);

                }
                break;

            case 2:
                for (i = j;i <= j;i++)
                {
                    cout << "A que hora desea cambiar su cita : " << endl;
                    getline(cin, cita[i].hora);

                }
                break;

            case 3:
                for (i = j;i <= j;i++)
                {
                    cout << "Ingrese de nuevo el tratamiento que desea tomar: " << endl;
                    getline(cin, cita[i].tomar);

                }
                break;

            case 4:
                for (i = j;i <= j;i++)
                {
                    cout << "Ingrese el motivo del tratamiento: " << endl;
                    getline(cin, cita[i].motivo);

                }
                break;
            }
            break;

        case 3:

            for (i = 0;i < 2;i++)
            {
                printf("Numero de cita que desea eliminar: \n");
                cin >> j;
                j = j - 1;
                for (i = j;i <= j;i++)
                {
                    cita[i].nombre = "";
                    cita[i].hora = "";
                    cita[i].tomar = "";
                    cita[i].motivo = "";
                }
            }
            break;
        case 4:
            for (i = 0;i < t;i++)
            {
                cout << "Numero cita: \n" << i + 1 << endl;
                cout << cita[i].nombre << endl;
                cout << cita[i].hora << endl;
                cout << cita[i].tomar << endl;
                cout << cita[i].motivo << endl;

            }
            break;

        case 5:
            system("cls");
        }
    } while (opcion != 6);
}
