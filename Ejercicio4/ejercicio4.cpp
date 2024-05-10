/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>

using namespace std;

void calcularPromedio(float notas[100], float& promedio);

int main(int argc, char const *argv[])
{
    float notas[100], promedio;
    int i = 0;

    cout << "Digite las notas los de 10 estudiantes: ";
    while (i < 10)
    {
        cin >> notas[i];
        i++;
    }

    calcularPromedio(notas, promedio);
    cout << "El promedio de la seccion es de: " << promedio;
    return 0;
}

void calcularPromedio(float notas[100], float& promedio)
{
    float suma = 0;
    int i = 0;
    while (i < 10)
    {
        suma += notas[i];
        i++;
    }
    promedio = suma / 10;
}