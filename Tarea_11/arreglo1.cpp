#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])

{
	int nombres[5][5];
	int suma =0;
	srand(time(NULL));
	
		cout <<  endl;
		cout << "_____________________________________" << endl;	
		cout << "  SUMANDO ELEMENTOS DE UNA MATRIZ: " << endl;
		cout << "_____________________________________" << endl;
		cout << endl;			
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			nombres[i][j]=1+rand()%9;
			cout << "    " << nombres[i][j] << "  ";
		}

		cout << endl;
		}
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 5; j++){
			suma = suma + nombres[i][j];
		}
	}
	system("color 11");
	system("color 26");
	system("color 34");
	system("color 1D");
	system("color 01");
	system("color 16");
	system("color 24");
	system("color 02");
	  
	cout << "_____________________________________" << endl;	
	cout << "  La suma de los elementos es: " << suma << endl;
	cout << "_____________________________________" << endl;
	cout << endl;
	
	
	return 0;
}
