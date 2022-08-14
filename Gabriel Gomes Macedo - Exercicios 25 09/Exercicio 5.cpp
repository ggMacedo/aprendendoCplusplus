#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	int hora_inicio , hora_fim , quantidade_hora,i;
	
	do
	{
	 for ( i = 0 ; i <=4 ; i++ )
	 {
	 	cout << "\n Digite a hora de início:" ;
	 	cin  >> hora_inicio ;
	 	cout << "\n" ;
	 	cout << "\n Digite a hora do fim do jogo:" ;
	 	cin  >> hora_fim ;
	 	cout << "\n" ;
	   	if ( hora_fim  ==  hora_inicio ) {
	 	    cout << "\n Quantidade máxima de horas atingida [24 horas]. ";
			 cout << " \n "; }
	 	else {		   
		 	 if ( hora_inicio  <  hora_fim ) {
		     	quantidade_hora = hora_fim - hora_inicio ; }
		     else
			 {
			 	quantidade_hora = ( hora_fim-hora_inicio ) - (-24);
			 }	
    	 }
    	 cout << "\n A duração do jogo é de: " << quantidade_hora << " horas." ;
    	 cout << " \n ";
	 }
	cout << "\n Deseja continuar? " ;
	cout << "\n [1] para sim ou [2] para não. " << endl ;
	cin >> i ;
    }
    while ( i == 1 ) ;
    return  0 ;
}
