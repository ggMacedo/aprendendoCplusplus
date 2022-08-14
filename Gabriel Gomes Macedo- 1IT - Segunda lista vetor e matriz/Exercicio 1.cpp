#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int i; int a[5]; int b[5][3]; int l; int c; long int fat=1;

for ( i=0 ; i<=4 ; i++ )
	{
	 cout << "\n Informe o número da " << i+1 << "ª posição do vetor A: ";
	 cin  >> a[i];
	}

for ( l=0; l<=4; l++ )
{
	for ( c=0; c<=2; c++ )
	{
			
		 if( c==0 )
		  b[l][c] = a[l] + 5 ;
		  
		 if( c==1 )	
		  {
		  	while( i <= a[l] )
		  	 {
		  		fat = fat * i;
                 i++;
		     }
			  b[l][c] = fat;
		  }
		  
		 if( c==2 )
		  b[l][c] = pow ( a[l], 2 ); 
	}
}

cout << "\n";
cout << "\n A matriz B é: \n";
cout << "\n";

for ( l=0 ; l<=4 ; l++ )
{
	for ( c=0 ; c<=2 ; c++ )
	 {	
		cout << b[l][c] << " " ;
	 }
	 cout << "\n";
}
	
getch();
return 0;	
}
