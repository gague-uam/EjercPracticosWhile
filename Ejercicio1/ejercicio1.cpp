/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/
#include <iostream>

using namespace std;

void sumaNaturales(int num);

int main(int argc, char const *argv[])
{
    int numero;
    cout << "Dime un numero: ";
    cin >> numero;
    sumaNaturales(numero);
    return 0;
}

void sumaNaturales(int num){
    int sumaTotal = 0;
    int i = 1;
    while (i <= num)
    {
        sumaTotal += i;
        i++;
    }
    cout << "La suma total de los numeros desde el 1 hasta " << num << " " << "es: " << sumaTotal << endl;
}