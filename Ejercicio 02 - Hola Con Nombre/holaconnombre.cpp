/*Primer programa para captura e impresion de cadena (Nombre)*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombre;
    
    cout<<"\n Ingrese su nombre: ";
    cin>> nombre;
    
    cout<<"\n Hola mi nombre es: " << nombre ;
    cout << endl;
    
    return 0;
}