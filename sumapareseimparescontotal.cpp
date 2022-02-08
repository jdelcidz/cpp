/* Programa que suma numeros pares e impares*/
#include <iostream>

using namespace std;

int main(int argc, char const*argv[])
{
    //Declarando las variables
    int pares = 0, impares = 0, total = 0;
    
    //Primer ciclo for para suma de pares
    for (int i = 1; i <= 100; i++) 
    {
        if (i % 2 == 0){
            pares = pares + i;
        }
        cout << i << "  ";
    }
    
    //segundo ciclo for para suma de impares
    for (int i = 1; i <= 100; i++) 
    {
        if (i % 2 == 1){
            impares = impares + i;
        }
        cout << i << "  ";
    }
    
    //Calculando la suma de los totales de pares e impares
    total=pares+impares;

    cout << endl;
    
    //mostrando los resultados
    cout << "\n Total Pares: " << pares;
    cout << "\n Total Impares: " << impares;
    cout << "\n Total suma de pares e impares: " << total;
    return 0;
}
