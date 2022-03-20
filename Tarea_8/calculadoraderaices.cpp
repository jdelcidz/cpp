#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num=0, rad = 0, resultado = 0;
    
    //Pidiendo los datos
    cout << "Ingrese el numero al cual desea calcular la raiz: " << endl;
    cin >> num;
    system ("pause");
    
    cout << "Ingrese que tipo de raiz desea calcular: " << endl;
    cin >> rad;
    system ("color 02");
    
    // procesando
    
    resultado = pow(num,(1/rad));
    
    cout << "La raiz " << rad << " de " << num << " es : " << resultado << endl;
    system ("pause");
    
    return 0;
}
