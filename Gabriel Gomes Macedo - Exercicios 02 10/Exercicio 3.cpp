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
	cout << " \n Informe o número: " ;
	cin  >> nu;
	cout << " \n ";
	
	resu = pow( nu , 3 ) ;
	cout << " \n O cubo do número informado é: "<< resu ;
	cout << " \n ";
	
	dif = resu - nu ;
	cout << " \n A diferença do resultado para o número é: "<< dif ;
	cout << " \n ";
	cout << " \n ";
	
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para não. \n " << endl ;
	cin  >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}	
