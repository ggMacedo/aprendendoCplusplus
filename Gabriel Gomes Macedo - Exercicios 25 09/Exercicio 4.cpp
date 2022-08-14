#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float n1 , n2 , n3 , media ;
	int  i=1 ;
	
	do
	{
	 for ( i = 0 ; i <= 4 ; i++ )
	 {
	 	cout << "\n Informe a nota 1: " ;
	 	cin  >> n1 ;
	 	cout << "\n" ;
	 	cout << "\n Informe a nota 2: " ;
	 	cin  >> n2 ;
	 	cout << "\n" ;
	 	cout << "\n Informe a nota 3: " ;
	 	cin  >> n3 ;
	 	cout << "\n" ;
	 	media = ( ( n1 * 2 ) + ( n2 * 3 ) + ( n3 * 5 ) ) / 10 ;
	 	cout << "\n A média é: " << media ;
	 	cout << "\n" ;
	 }
	 cout << "\n Deseja continuar? " ;
	 cout << "\n [1] para sim ou [2] para não. " << endl ;
	 cin >> i ;
    }
    while ( i == 1 ) ;
    return  0 ;
}
