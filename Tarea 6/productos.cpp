#include <iostream>

using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);


void productos(int opcion)
{
		system ("cls");
	
	int opcionproducto = 0;
		switch (opcion)
		{
			case 1:
			{
					cout << "BEBIDAS CALIENTES" << endl;
					cout << "*****************" << endl;
					cout << "1- Capuccino" << endl;
					cout << "2- Americano" << endl;
					cout << "3- Mocaccino" << endl;
					cin >> opcionproducto;
					
					switch (opcionproducto)
					{
						case 1: 
							agregarproducto("Capuccino", 1, 40);
							break;
						
						case 2: 
							agregarproducto("Americano", 1, 30);
							break;
						
						case 3: 
							agregarproducto("Mocaccino", 1, 45);
							break;	
						
					default:
					{
						cout << "Opcion no valida, Ingrese un producto Valido";
						return;
						break;
						}
					cout << "Producto Agregado" << endl;
					system ("cls"); 	
			}				
														
		}
			case 2:
			{
					cout << "BEBIDAS FRIAS" << endl;
					cout << "*************" << endl;
					cout << "1- Granita de Cafe" << endl;
					cout << "2- Chai Especias" << endl;
					cout << "3- Coolata" << endl;
					cin >> opcionproducto;
					
					switch (opcionproducto)
					{
						case 1: 
							agregarproducto("Granita de cafe", 1, 30);
							break;
						case 2: 
							agregarproducto("Chai Especias", 1, 50);
							
							break;
						case 3: 
							agregarproducto("Coolata", 1, 40);
							break;	
					
						default:
							{
							break;
						 	}
					}				
						cout << "Producto Agregado";
						system ("pause");
								
					}				
											
			
			case 3:
			{
					cout << "REPOSTERIA" << endl;
					cout << "**********" << endl;
					cout << "1- Chilena" << endl;
					cout << "2- Pan de maiz" << endl;
					cout << "3- Muffin" << endl;
					cin >> opcionproducto;
					
					switch (opcionproducto)
					{
						case 1: 
							agregarproducto("Chilena", 1, 20);
							break;
						case 2: 
							agregarproducto("Pan de Maiz", 1, 45);
							break;
						case 3: 
							agregarproducto("Muffin", 1, 40);
							break;	
								
						default:
							{
								cout << "Opcion no valida, Ingrese un producto Valido";
								return;
								break;
								
						 	}
					}				
						cout << endl;
						cout << "Producto Agregado" ;
						system ("pause");
				}													
			}
	
}
