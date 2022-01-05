#include <iostream>

using namespace std;

int main(){

    int n,i,j;// creamos las variables
    cin >> n; //Tomamos el valor del usuario
    for (i = 1; i <= n; i++) {//primer ciclo, para la cantidad de filas
        for (j = 1; j <= n-i+1; j++)//ciclo solo para saltar los espacios de izquierda a derecha
            cout << " ";
        for(j = 1; j <= i; j++)//ciclo para imprimir la primera mitad del triangulo
            cout << j;
        for(j = j-2; j >= 1; j--)//ciclo para imprimir la segunda mitad del triangulo
            cout << j;
        cout << endl;//salto de linea, pertenece al primer ciclo
    }
    return 0;
}