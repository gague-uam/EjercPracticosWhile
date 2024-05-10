/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>
using namespace std;

int totaldesuma();

int main(int argc, char const *argv[])
{
    int respuesta = totaldesuma();
    cout << "La suma total de los numeros pares entre 100 y 200 es de: " << respuesta ;
    return 0;
}

int totaldesuma()
{
    int suma = 0;
    int i = 100;
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        i++;
    }
    return suma;
}