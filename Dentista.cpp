// Dentista.cpp
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>// funcione new y delete


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

void Agenda();
void Modificar();
void Eliminar();
void Listas();
void Archivos();

int t = 0;
int opcion, i, j, op2, op3;
double resultado = 0, iva;

string a;

citas cita[10];
int main()
{

    do
    {
        cout << "\n Menu de Opciones" << endl;
        cout << "1.Agendar Cita" << endl;
        cout << "2.Modificar Cita" << endl;
        cout << "3.Eliminar Cita" << endl;
        cout << "4.Lista de Citas Vigentes" << endl;
        cout << "5.Limpiar Pantalla" << endl;
        cout << "6.Archivar Cita " << endl;
        cout << "7.Salir " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            Agenda();
            break;
        case 2:
            Modificar();
            break;

        case 3:
            Eliminar();
            break;
        case 4:
            Listas();
            break;

        case 5:
            system("cls");
            break;
        case 6:
            Archivos();
            break;
        }

    } while (opcion != 7);
}



void Agenda() {

    cout << " NUMERO DE CITA " << t + 1 << endl;
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
}
void Modificar() {

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

}
void Eliminar() {

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
            t--;
        }
    }
}
void Listas() {

    for (i = 0;i < t;i++)
    {
        cout << "Numero cita: \n" << i + 1 << endl;
        cout << cita[i].nombre << endl;
        cout << cita[i].hora << endl;
        cout << cita[i].tomar << endl;
        cout << cita[i].motivo << endl;

    }
}

void Archivos()
{
    ofstream archivo; //clase ifstream para leer archivos
    string nombrearchivo;

    nombrearchivo = "CitasDentista";

    archivo.open(nombrearchivo.c_str(), ios::out);

    if (archivo.fail())
    {
        cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
        exit(1);
    }
    for (int i = 0; i < t; i++)
    {
        archivo << "Numero de cita: " << i+1 << "\n";
        archivo << "Nombre del paciente: " << cita[i].nombre << endl;
        archivo << "Hora de la cita: " << cita[i].hora << endl;
        archivo << "Nombre del tratamiento: " << cita[i].tomar << endl;
        archivo << "Razon de tomar el tratamiento: " << cita[i].motivo << endl;

        cout << "Se guardo la informacion";
    }



    archivo.close();
}

