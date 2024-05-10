/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
#include <iostream>
using namespace std;

int sumaCuadra(int num);

int main(int argc, char const *argv[])
{
    int num = 100;
    int total = sumaCuadra(num);
    cout << "La suma de los numeros cuadrados del 1 al " << num << " es: " << total << endl;
    return 0;
}

int sumaCuadra(int num) {
    int suma = 0;
    int i = 1;
    while (i <= num) {
        suma += i * i;
        i++;
    }
    return suma;
}