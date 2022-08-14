#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float  raio , volume ;
int  i ;

for ( i = 0 ; i <= 10 ; i++ )
{
		cout << "\n Digite o raio: " ;
		cin  >> raio;
		cout << "\n";
		volume = ( 4 * 3.14 * pow ( raio , 3 ) ) ;
		cout << "O volume é: " << volume << endl ;
		cout << "\n" ;
}
return 0;
}
