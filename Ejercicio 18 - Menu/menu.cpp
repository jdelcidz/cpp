//Programa menu (con ciclo infinito).

#include <iostream>

using namespace std; 

int main(int argc, char** argv){
    
    int opcion = 0;
    
    while (true){
        
        system("cls");
         cout << "****" << endl;
         cout << "MENU" << endl;
         cout << "****" << endl;
         
         cout << endl;
         cout << "1. Cafe y Granitas" << endl;
         cout << "2. Reposteria" << endl;
         cout << "0. Salir" << endl;
         
         cout << endl;
         cout << "Ingrese una opcion del MENU  " ;
         cin >> opcion;
        
         if (opcion == 1){
             system("cls"); /*No me funciona este comando me muestra el error: sh: 1: cls: not found*/
             cout << "Estas en el MENU de cafe y granitas" << endl;
             system("pause"); /*No me funciona este comando me muestra el error: sh: 1: pause: not found*/
         }
         
         if (opcion == 2){
             system("cls");
             cout << "Estas en el MENU de reposteria" << endl;
             system("pause");
         }
         if (opcion == 0) {
             break;
         }
	}
	
	 cout << endl;
	cout << "Saliste del sistema";
	
	return 0;
}