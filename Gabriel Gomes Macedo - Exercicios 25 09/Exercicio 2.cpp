#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float  custo_f , impo , dist , resu ;
	int  i=1 ;
	
	do
	{
	 for ( i=0 ; i<=4 ; i++ )
	 {
		 cout << "\n Informe o custo de fábrica: " ;
		 cin  >> custo_f ;
		 cout << "\n" ;
		 impo =  ( 45 * custo_f ) / 100 ;
		 dist =  ( 28 * custo_f ) / 100 ;
		 resu =   custo_f + impo + dist ;
		 cout << " \n O custo final é: " << resu ;
		 cout << "\n" ;
     }
    cout  <<  "\n Deseja continuar? " ;
    cout  <<  "\n [1] para sim ou [2] para não. " << endl ;
    cin   >> i ;
    }
    while ( i == 1 ) ;
    return  0 ;
} 
