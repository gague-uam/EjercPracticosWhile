/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

void sumaVectores();

int main(int argc, char const *argv[])
{
    sumaVectores();
    return 0;
}

void sumaVectores()
{
    int n;
    cout << "Digite la longitud de los vectores: ";
    cin >> n;

    int primervector[n];
    int segundovector[n];
    int sumadevectores[n];

    int i = 0;
    while (i < n)
    {
        cout << "Digite el valor del primer vector en la posicion " << i + 1 << ": ";
        cin >> primervector[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        cout << "Digite el valor del segundo vector en la posicion " << i + 1 << ": ";
        cin >> segundovector[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        sumadevectores[i] = primervector[i] + segundovector[i];
        i++;
    }

    cout << "La suma de ambos vectores es de: " << endl;
    i = 0;
    while (i < n)
    {
        cout << sumadevectores[i] << " ";
        i++;
    }
}