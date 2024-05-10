/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo */

#include <iostream>
using namespace std;

void productoVector();

int main(int argc, char const *argv[])
{
    productoVector();
    return 0;
}


void productoVector()
{
    int n;
    cout << "Digite la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int productopunto = 0;

    int i = 0;
    while (i < n){
        cout << "Digite el valor del primer vector en la posicion "<< i + 1 << ":";
        cin >> vector1[i];
        i++;
    }

    i = 0;
    while (i < n){
        cout << "Digite el valor del segundo vector en la posicion "<< i + 1 << ":";
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < n) {
        productopunto += vector1[i] * vector2[i];
        i++;
    }
    cout << "El producto punto de los vectores es: " << productopunto << endl;
}