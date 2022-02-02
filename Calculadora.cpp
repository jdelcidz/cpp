#include <iostream>

using namespace std; 

int main ()
{	
	//Definiendo las variables
	int a, b, sum, res, mul, div;
	//Solicitando el ingreso de datos
	cout<< "\n Ingresar el primer valor:"; 
	cin>>a;
	cout<< " Ingresa El Segundo valor :"; 
	cin>>b;
	//procesando los datos
	sum=a+b;
	res=a-b;
	mul=a*b;
	div=a/b;
	//mostrando el resultado
	cout<<"\n El resultado de la suma es: " <<sum,
	cout<<"\n El resultado de la resta es: " <<res,
	cout<<"\n El resultado de la multiplicacion es: " <<mul;
	cout<<"\n El resultado de la divicion es: " <<div;
return 0;
}