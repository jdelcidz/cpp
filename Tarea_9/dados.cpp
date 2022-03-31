#include <iostream>

using namespace std; 

int input (int cant){
    
    cout << "                  Se lanzaran los dados" << endl;

  if (cant == 1)
    {
      cout << "Presione la tecla ENTER para lanzar el primer dado" << endl;
     }
  else
    {
      cout << "Presione la tecla ENTER para lanzar el segundo dado" << endl;
     }
    
  cin.ignore ();
}

int tirardado ()
{
  int random;
  srand (time (0));
  random = rand () % 6 + 1;
  cout << " Usted saco : " << random << endl;
  return random;
}


int dado (int pdado, int sdado)
{
  cout << "" << endl;
  cout << "     La suma de las caras en su tirada es : " << pdado + sdado << endl;
  return pdado + sdado;
}



int main ()
{
  int total, primerdado, segundodado;

  input (1);
  primerdado = tirardado ();
  input (2);
  segundodado = tirardado ();
  total = dado(primerdado, segundodado);
  return 0;
}
