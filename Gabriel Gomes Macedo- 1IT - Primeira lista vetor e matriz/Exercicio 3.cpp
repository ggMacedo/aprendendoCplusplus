#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int i; int a[10]; int b[10]; int para=0; int impa=0; int parb=0; int impb =0;
 
cout << "\n";
for ( i=0 ; i<=9 ; i++ )
	{
		cout << "\n Informe o número da " << i+1 << "ª posição do vetor A: ";
		cin  >> a[i];
		cout << "\n";
	}

cout << "\n";

for ( i=0 ; i<=9 ; i++ )
	{
		cout << "\n Informe o número da " << i+1 << "ª posição do vetor B: ";
		cin  >> b[i];
		cout << "\n";
	}
	
for ( i=0 ; i<=9 ; i++ )
	{		
	if(a[i] % 2==0 )
	  para = para + 1 ;
	else  
      impa = impa + 1 ;

	if  (b[i] % 2==0 )
    	parb = parb + 1 ;
    else
	  impb = impb + 1 ;

  }
  
  	cout << "\n";
	cout << "\n A quantidade de números par no vetor A é: " <<para;
	cout << "\n";
	cout << "\n A quantidade de números impar no vetor A é: " <<impa;
	cout << "\n";
	cout << "\n A quantidade de números par no vetor B é: " <<parb;
	cout << "\n";
	cout << "\n A quantidade de números impar no vetor B é: " <<impb;
	cout << "\n";
	
	
getch();
return 0;
}



