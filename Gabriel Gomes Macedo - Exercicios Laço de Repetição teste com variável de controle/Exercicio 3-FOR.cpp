#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float raio , altura , area ;
int  i ;

for ( i = 0 ; i <= 5 ; i++ )
{
		cout << "\n Digite o raio da lata: " ;
		cin  >> raio ;
		cout << "\n" ;
		cout << "\n Digite a altura da lata: " ;
		cin  >> altura ;
		cout << "\n" ;
		area = ( 2 * 3.14 * raio * ( raio + altura ) ) ;
		cout << "\n A área é: " << area ;
		cout << "\n" ;
}
return 0;
}
