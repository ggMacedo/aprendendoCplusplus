#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float nu, resu, dif;
	int i;
	do
	{
	cout << " \n Informe o n�mero: " ;
	cin  >> nu;
	cout << " \n ";
	
	resu = pow( nu , 3 ) ;
	cout << " \n O cubo do n�mero informado �: "<< resu ;
	cout << " \n ";
	
	dif = resu - nu ;
	cout << " \n A diferen�a do resultado para o n�mero �: "<< dif ;
	cout << " \n ";
	cout << " \n ";
	
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para n�o. \n " << endl ;
	cin  >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}	
