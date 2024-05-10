/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>
using namespace std;

int notas[8];
int alumnosAprobados = 0;
int alumnosReprobados = 0;
int sumaTotal = 0;

void promedio();

int main(int argc, char const *argv[])
{
    promedio();
    return 0;
}

void promedio(){
    int i = 0;
    while (i < 8)
    {
        cout << "Digite las notas del estudiante" << endl;
        cin >> notas[i];
        sumaTotal = sumaTotal + notas[i];

        if (notas[i] >= 70)
        {
            alumnosAprobados ++;
        }
        else
        {
            alumnosReprobados ++;
        }
        i++;
    }
    cout << "El promedio total es: " << sumaTotal / 8 << endl;
    cout << "Cantidad de alumnos aprobados: " << alumnosAprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << alumnosReprobados << endl;
}