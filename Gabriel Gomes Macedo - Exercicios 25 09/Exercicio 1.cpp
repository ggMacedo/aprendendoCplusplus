#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float  v_b , v_n , v_v , total_e , re1 , re2 , re3 ;
	int  i=1 ;
	
	do
	{
	 
	   for ( i = 0 ; i <= 4 ; i++ )
	   {
		   	cout  << " \n Informe o total de eleitores de seu munic�pio: " ;
		   	cin   >> total_e;
		   	cout  << " \n" ;
		   	cout  << " \n Informe a quantidade de votos em branco: " ;
		   	cin   >> v_b ;
		   	cout  << " \n" ;
		   	cout  << " \n Informe a quantidade de votos nulos: " ;
		   	cin   >> v_n ;
		   	cout  << " \n" ;
		   	cout  << " \n Informe a quantidade de votos v�lidos: " ;
		   	cin   >> v_v  ;
		   	cout  << "\n" ;
		   	
		   	re1 =  ( v_b / total_e )  *  100 ;
		   	cout <<  "\n O total de votos em branco �: " <<  re1 << "%." ;
		   	cout << "\n" ;
		   	
		   	re2 = ( v_n / total_e )  * 100 ;
		   	cout << "\n O total de votos nulos �: " << re2 <<  "%." ;
		   	cout << "\n" ;
		   	
		   	re3 = ( v_v / total_e )  *  100 ;
		   	cout << "\n O total de votos v�lidos �: " << re3 << "%." ;
		   	cout << "\n" ;
       }       
	    cout << "\n Deseja continuar? " ;
	    cout << "\n [1] para sim ou [2] para n�o. " << endl ;
	    cin >> i ;
	} 
       while ( i== 1 ) ; 	 
	   return  0 ;
}
