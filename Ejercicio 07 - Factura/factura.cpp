// Programa de Factura con ISV

#include <iostream>

using namespace std; 

int main(int argc, char** argv){
	// Datos de entrada
	double subtotal =0, total= 0;
	double impuesto = 0.15;
	
	// Solicitando ingreso de datos
	cout <<"\n Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	
	//Procesando ---Realizando los calculos
	
	total= subtotal + (subtotal * impuesto);
	
	//Salida de datos 
	
	cout <<"\n El total a pagar es: " << total;
	
	return 0;
}