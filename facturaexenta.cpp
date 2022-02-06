//Factura con descuento, que puede estar exenta o no.
#include <iostream>


using namespace std; 

int main(int argc, char** argv){
	// Datos de entrada
	double subtotal =0, total= 0, calculodescuento=0, calculoimpuesto=0;
	double impuesto = 0.15;
	int descuento = 0;
	char estaexenta;
	// Solicitando ingreso de datos
	cout <<"\n Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	
	cout <<"\n Ingrese el Descuento (0, 10, 15, 20): ";
	cin>>descuento;
	
	cout <<"\n Esta Factura es Exenta? (S/N)?: ";
	cin>> estaexenta;
	
	//Procesando ---Realizando los calculos
	if (estaexenta == 's' || estaexenta == 'S')
	{
	calculodescuento = (subtotal * descuento) / 100;
	total= subtotal - calculodescuento;
	}
	else
	{
	calculodescuento = (subtotal * descuento) / 100;
	calculoimpuesto = (subtotal - calculodescuento) * impuesto;
	total= subtotal - calculodescuento+ calculoimpuesto;
	}
	//Salida de datos 
	
	cout <<"\n El total a pagar es: " << total;
	
	return 0;
}
