#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float dola, real, valor;
	int i;
	do
	{
	cout << " \n Informe a cotação do dólar: ";
	cin  >> dola;
	cout << " \n ";
	cout << " \n Informe o valor a ser convertido: ";
	cin  >> real;
	cout << " \n ";
		
	valor= real * dola;
		
	cout << " \n ";
	cout << " \n A conversão de dólares para real é: "<< valor;
	cout << " \n ";
	cout << " \n " ;
		
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para não. \n " << endl ;
	cin  >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}	
