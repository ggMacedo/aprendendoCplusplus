#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float a , b , c , x1 , x2 , delta ;
int  i ;

for ( i = 0 ; i <= 8 ; i++ )
{
		cout << "\n Informe o valor A:" ;
		cin  >> a ;
		cout << "\n" ;
		cout << "\n Informe o valor B:" ;
		cin  >> b ;
		cout << "\n" ;
		cout << "\n Informe o valor C:" ;
		cin  >> c;
		cout << "\n" ;
		delta = pow ( b , 2 ) - 4 * a * c ;
		cout << "\n O valor de delta é: " << delta ;
		cout << "\n" ;
	    x1 = ( - b + sqrt ( delta ) ) / 2 * a ;
	    x2 = ( - b - sqrt ( delta ) ) / 2 * a ;
	    if( delta > 0 ){
	    cout << "\n A equação possui duas raízes de, " << x1 << " e " << x2 << "." << endl ;}
		else if( delta == 0 ){
	    cout << "\n A equação possui uma raíz de, " << x1 << "." << endl ;}
	    else
	    cout << "\n A equação não possui raíz." << endl ;
}
return 0;
}
