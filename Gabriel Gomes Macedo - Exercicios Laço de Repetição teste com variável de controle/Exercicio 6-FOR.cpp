#include <iostream>
#include <locale.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float v_a , v_b , v_c ;
int i ;

for ( i = 0 ; i <= 10 ; i++ )
{
		cout << "\n Digite o valor de A: " ;
		cin  >> v_a ;
		cout << "\n" ;  
		cout << "\n Digite o valor de B: " ;
		cin  >> v_b ;
		cout << "\n" ;
		cout << "\n Digite o valor de C: " ;
		cin  >> v_c ;
		cout << "\n" ;
		if ( v_a < v_b + v_c and v_b < v_a + v_c and v_c < v_a + v_b )
{
		if ( v_a == v_b and v_b == v_c )
	    cout << "\n � um tri�ngulo equil�tero.\n" ;
		else if ( v_a == v_b or v_a == v_c or v_b == v_c )
		cout << "\n � um tri�ngulo is�celes.\n" ;
		else if ( v_a != v_b and v_a != v_c and v_b != v_c )
		cout << "\n � um tri�ngulo escaleno.\n" ;
}
	else
	cout << "\n N�o comp�em um tri�ngulo.\n" ;
}
return 0;
}
