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

            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("Capucciono", 1, 40);
                break;

              case 2:
                agregarProducto("Expresso", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            break;
        }
     case 2:
    {
    cout << "BEBIDAS FRiAS" << endl;
    cout << "***************" << endl;
    cout << "1 - Granita" << endl;
            cout << "2 - Latte" << endl;

            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("Granita", 1, 40);
                break;

              case 2:
                agregarProducto("Latte", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            break;
    system("pause");
        break;
    }
    case 3:
    {
    cout << "REPOSTERIA" << endl;
    cout << "***************" << endl;
    cout << "1 - Galleta" << endl;
            cout << "2 - Torta" << endl;

            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("Galleta", 1, 40);
                break;

              case 2:
                agregarProducto("Torta", 1, 30);
                break;
            default:
            cout << "opcion no valida";
                break;
            }
            break;
    
    system("pause");
     break;
    }
    default:
    break;
    }
}
    