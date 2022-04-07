#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    
    srand(time(NULL)); //Inicializa el numero dandom
    
    for (int i = 0; i < 20; i++)
    {
    numero = rand() % 100 + 1; //genera un numero entre 1 y 10
    cout << "Numero al azar: " << numero << endl;
    
    }
    return 0;
    
}