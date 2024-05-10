/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/
/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/
#include <iostream>
using namespace std;

void numImpar(int num);

int main(int argc, char const *argv[])
{
    int num = 100;
    cout << "Numeros impares del 1 al " << num << " en orden descendente:" << endl;
    numImpar(num);
    return 0;
}

void numImpar(int num){
    int i = num;
    while (i >= 1) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i--;
    }
}