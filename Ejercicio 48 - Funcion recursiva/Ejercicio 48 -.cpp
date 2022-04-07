
#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto (int miNumero)
{
    if (miNumero == numeroSecreto){
    cout << endl;
    cout << endl;
    cout << "Adivinaste!" << endl;
    cout << endl;
    }
    else
    {
    cout << endl;
    cout << "Intento fallido con " << miNumero << endl;
    int otroNumero = 0;
    cout << endl;
    cout << "Ingrese otro numero: ";
    cout << endl;
    cin >> otroNumero;
    adivinarNumeroSecreto(7);
    }
}

int main(int argc, char const *argv[])
{
    adivinarNumeroSecreto(5);


    return 0;
}