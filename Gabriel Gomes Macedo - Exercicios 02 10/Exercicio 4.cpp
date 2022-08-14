#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float hora, brut, desc, liqi;
	int i;
	do
	{
	cout << "\n Informe as horas trabalhadas pelo operário: ";
	cin  >> hora;
	cout << " \n " ;
		
	brut= hora * 3 ;
	desc= brut - ( brut * 0.08 );
	liqi=  brut - desc;
		
	cout << " \n " ;
	cout << "\n O salário liquido é: "<< liqi;
	cout << " \n " ;
	cout << " \n " ;
		
	cout << "\n Deseja continuar? \n " ;
	cout << " \n ";
	cout << "\n [1] para sim ou [2] para não. \n " << endl ;
	cin  >> i ;
	cout << " \n " ;
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}		
