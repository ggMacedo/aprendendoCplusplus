#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float num_car , valor_total , salario_fixo , valor_receber , salario_final , cal ;
	int  i=1 ;
	
	do
	{
	 for ( i = 0 ; i <= 4; i++ )
	 {
			 cout << "\n Digite o n�mero de carros vendidos pelo funcion�rio: " ;
			 cin  >> num_car ;
			 cout << "\n" ;
			 cout << "\n Digite o valor total das vendas do funcion�rio: " ;
			 cin  >> valor_total ;
			 cout << "\n" ;
			 cout << "\n Digite o sal�rio fixo do funcion�rio: " ;
			 cin  >> salario_fixo ;
			 cout << "\n"  ;
			 cout << "\n Digite o valor da comiss�o a receber por carro vendido: " ;
			 cin  >> valor_receber ;
			 cout << "\n" ;
			 cal  = ( salario_fixo + valor_receber * num_car + valor_total * 0.05 ) ;
			 cout << "\n O sal�rio final do vendedor �: " << cal ;
			 cout << "\n" ;
     }
		cout << "\n Deseja continuar? " ;
	    cout << "\n [1] para sim ou [2] para n�o. " << endl ;
	    cin >>  i ;
    }
    while ( i == 1 ) ;
    return  0 ;
}
