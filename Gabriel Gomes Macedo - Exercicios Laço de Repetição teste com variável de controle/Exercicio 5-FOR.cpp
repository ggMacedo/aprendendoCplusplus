#include <iostream>
#include <locale.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float idade ;
int i ;

for ( i = 0 ; i <= 5 ; i++ )
{
		cout <<  "\n Digite a idade do nadador:";
		cin  >>  idade;
		cout <<  "\n";
		
		if ( idade >= 5 and idade <= 7 ){
		cout << "\n Infantil A.\n" ;}
		
		else if ( idade >= 8 and idade <= 10 ){
		cout << "\n Infantil B.\n" ;}
		
		else if ( idade >= 11 and idade <=13 ){
		cout << "\n Juvenil A.\n" ;}
		
		else if ( idade >= 14 and idade <=17 ){
		cout << "\n Juvenil B.\n" ;}
		
	    else if ( idade >= 18 ){
		cout << "\n Senior. \n" ;}
		
		else
	    cout << "\n Opção inválida.\n" ;
}
return 0;
}
