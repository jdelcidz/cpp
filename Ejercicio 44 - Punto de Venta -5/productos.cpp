#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)

{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "***************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion:" << endl;
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Capucciono - L40.00", 1, 40);
                break;

              case 2:
                agregarProducto("1. Expresso - L30.00", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            
            cout << "Producto agregado" << endl;
            system("pause");
            
            break;
        }
     case 2:
    {
            cout << "BEBIDAS FRiAS" << endl;
            cout << "***************" << endl;
            cout << "1 - Granita" << endl;
            cout << "2 - Latte" << endl;
            cout << endl;

            cout << "Ingrese una opcion:" << endl;
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Granita - L40.00", 1, 40);
                break;

              case 2:
                agregarProducto("1. Latte - L30.00", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            break;
            cout << "Producto agregado" << endl;
            system("pause");
        break;
    }
    case 3:
    {
            cout << "REPOSTERIA" << endl;
            cout << "***************" << endl;
            cout << "1 - Galleta" << endl;
            cout << "2 - Torta" << endl;
            cout << endl;

            cout << "Ingrese una opcion:" << endl;
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1. Galleta - L40.00", 1, 40);
                break;

              case 2:
                agregarProducto("1. Torta - L30.00", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            break;
            cout << "Producto agregado" << endl << endl;
            system("pause");
     break;
    }
    default:
    break;
    }
}
    