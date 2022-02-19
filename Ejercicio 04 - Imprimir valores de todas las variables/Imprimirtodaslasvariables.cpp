/*Ejercicio numero 3, Imprimir todas las Variables */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool valorboolean;
    valorboolean = true;
    
    int valorentero = 15;
    double valordouble = 20.99;
    string valorstring = "Hola Como estan";
    char valorchar = 'B';
    
   cout << "Valor Boolean:" << valorboolean << endl;
   cout << "Valor Entero:" << valorentero << endl;
   cout << "Valor Double:" << valordouble << endl;
   cout << "Valor String:" << valorstring << endl;
   cout << "Valor Char:" << valorchar << endl;
   
   return 0;
   
}