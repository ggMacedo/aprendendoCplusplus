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
	cout << " \n Informe a cota��o do d�lar: ";
	cin  >> dola;
	cout << " \n ";
	cout << " \n Informe o valor a ser convertido: ";
	cin  >> real;
	cout << " \n ";
		
	valor= real * dola;
		
	cout << " \n ";
	cout << " \n A convers�o de d�lares para real �: "<< valor;
	cout << " \n ";
	cout << " \n " ;
		
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para n�o. \n " << endl ;
	cin  >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}	
