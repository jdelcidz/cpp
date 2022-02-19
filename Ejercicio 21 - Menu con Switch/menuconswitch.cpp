//Programa menu (con switch).

#include <iostream>

using namespace std; 

int main(int argc, char** argv){
    
    int opcion = 0;
    
    while (true){
        
        system ("cls");
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
        
        if (opcion == 0) {
             break;
        }
         
        switch (opcion)
        {
            case 1:
            {
                system ("cls"); /*No me funciona este comando me muestra el error: sh: 1: cls: not found*/
                cout << "Estas en el MENU de cafe y granitas" << endl;
                system ("pause"); /*No me funciona este comando me muestra el error: sh: 1: pause: not found*/
                break;
            }      
            
            case 2:
            {
                system ("cls");
                cout << "Estas en el MENU de reposteria" << endl;
                system ("pause");
                break;
            }    
        
        default:
            {
            cout << "Ingrese una opcion valida (0, 1, 2)" << endl;
            system ("pause");
            break;
            }
        }
	}
	
	cout << endl;
	cout << "Saliste del sistema";
	
	return 0;
}