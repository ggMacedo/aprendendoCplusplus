#include <iostream>
#include <locale.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
float n1 , n2 , n3 , n4 , media ;
int i;

for ( i = 0 ; i <= 5; i++ )
{
		cout << "\n Digite a nota 1: " ;
		cin  >> n1 ;
		cout << "\n" ;
		cout << "\n Digite a nota 2: " ;
		cin  >> n2 ;
		cout << "\n" ;
		cout << "\n Digite a nota 3: " ;
		cin  >> n3 ;
		cout << "\n" ;
		cout << "\n Digite a nota 4: " ;
		cin  >> n4 ;
		cout << "\n" ;
		media = ( n1 + n2 + n3 + n4 ) / 4 ;
		if ( media >= 9){
		cout << "\n Aprovado no conceito A.\n" ;}
		
		else if ( media >= 7 and media < 9 ){
		cout << "\n Aprovado no conceito B.\n";}
		
		else if ( media >= 5 and media < 7 ){
		cout << "\n Aprovado no conceito C.\n" ;}
		
		else if ( media >= 2.5 and media < 5 ){
		cout << "\n Reprovado no conceito D.\n" ;}
		
		else if ( media < 2.5 ){
		cout << "\n Reprovado no conceito E.\n" ;}	
}
return 0 ;
}
