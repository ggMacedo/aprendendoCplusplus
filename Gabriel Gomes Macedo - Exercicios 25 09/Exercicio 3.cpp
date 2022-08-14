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
			 cout << "\n Digite o número de carros vendidos pelo funcionário: " ;
			 cin  >> num_car ;
			 cout << "\n" ;
			 cout << "\n Digite o valor total das vendas do funcionário: " ;
			 cin  >> valor_total ;
			 cout << "\n" ;
			 cout << "\n Digite o salário fixo do funcionário: " ;
			 cin  >> salario_fixo ;
			 cout << "\n"  ;
			 cout << "\n Digite o valor da comissão a receber por carro vendido: " ;
			 cin  >> valor_receber ;
			 cout << "\n" ;
			 cal  = ( salario_fixo + valor_receber * num_car + valor_total * 0.05 ) ;
			 cout << "\n O salário final do vendedor é: " << cal ;
			 cout << "\n" ;
     }
		cout << "\n Deseja continuar? " ;
	    cout << "\n [1] para sim ou [2] para não. " << endl ;
	    cin >>  i ;
    }
    while ( i == 1 ) ;
    return  0 ;
}
