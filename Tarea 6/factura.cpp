#include <iostream>

using namespace std;

double subtotal, total, isv;

string listaproductos;

void agregarproducto(string descripcion, int cantidad, double precio)

{
	listaproductos = listaproductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
	isv = subtotal * 0.15;
	total = subtotal + isv;
}

void imprimirfactura()
{
	system ("cls");
	cout << "**********" << endl;
	cout << "FACTURA" << endl;
	cout << "**********" << endl;
	cout << endl;

	cout << "Productos:" << endl;
	cout << listaproductos; 

	cout << endl;
	cout << "Subtotal: " << subtotal;
	cout << "ISV: " << isv;
	cout << "Total a pagar: " << total;
}
