/* Programa que suma dos valores*/
#include <iostream>

using namespace std;

int main(int argc, char const*argv[])
{
    //datos de entrada (declarando variables)
    int a = 0; 
    int b = 0; 
    int resultado = 0;
    
    cout << " Ingrese el valor de a: ";
    cin >> a;
    
    cout << endl;
    
    cout << " Ingrese el valor de b: ";
    cin >> b;
    
    //Realizando proceso (Calculo)
    resultado = a + b;
    
    //Imprimiendo los resultados
    cout << "\n La suma de a + b es : " << resultado;
    
    return 0;
}