/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

void transponerMatriz(int matriz[][10], int transpuesta[][10], int filas, int columnas);

int main(int argc, char const *argv[])
{
    int matriz[10][10], transpuesta[10][10];
    int filas, columnas;

    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> filas >> columnas;

    cout << "Ingrese los elementos de la matriz:" << endl;
    int i = 0;
    while (i < filas) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
        i++;
    }

    transponerMatriz(matriz, transpuesta, filas, columnas);
    return 0;
}

void transponerMatriz(int matriz[][10], int transpuesta[][10], int filas, int columnas)
{
    int i = 0;
    while (i < filas) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
        i++;
    }

    cout << "La matriz transpuesta es:" << endl;
    i = 0;
    while (i < columnas) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
        i++;
    }
}