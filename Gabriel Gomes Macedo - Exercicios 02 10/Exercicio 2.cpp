#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	int nu, met, dob, i ;
	do
	{
    cout << " \n Digite o n�mero: " ;
	cin  >> nu ;
	cout << " \n " ;
	
	met = nu / 2 ;
	dob = nu * 2 ;
	
	cout << " \n A metade �: " << met ;
	cout << " \n " ;
	cout << " \n O dobro �: " << dob  ;
	cout << " \n " ;
	cout << " \n " ;
	
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para n�o. \n " << endl ;
	cin  >> i ;
	cout << " \n " ;
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}	
