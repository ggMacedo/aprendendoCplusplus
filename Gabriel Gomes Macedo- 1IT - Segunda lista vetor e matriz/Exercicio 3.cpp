#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int i; int a[5]; int b[10]; int c[15]; int n1=0; int n2=0;

cout << "\n";
for ( i=0 ; i<=4 ; i++ )
{
	cout << "\n Informe o número da " << i+1 << "ª posição do vetor A: ";
	cin  >> n1;
	cout << "\n";

 if( n1 % 2==0 )
 {
       a[i] = n1;
 }
    else  
	  while ((n1 % 2) != 0)
	  { 
         cout << " \n Não é par, tente novamente: ";
      	 cin  >> n1;
      }
 if( n1 % 2==0 )
 {
       a[i] = n1;
 }
}

cout << "\n";

for ( i=0 ; i<=9 ; i++ )
{
	cout << "\n Informe o número da " << i+1 << "ª posição do vetor B: ";
	cin  >> n2;
	cout << "\n";
	
 if( n2 % 2==1 )
 {
       b[i] = n2;
 }
    else  
	  while ((n2 % 2) != 1)
	  { 
         cout << " \n Não é impar, tente novamente: ";
      	 cin  >> n2;
      }
 if( n2 % 2==0 )
 {
       b[i] = n2;
 }
}

cout  << "\n";
cout  << "\n O vetor A é: \n";
for ( i=0 ; i<=4 ; i++ )
{
cout << "\n "<< a[i] << " ";
}

cout  << "\n";
cout  << "\n O vetor B é: \n";
for ( i=0 ; i<=9 ; i++ )
{
cout << "\n "<< b[i] << " ";
}

cout  << "\n";
cout  << "\n O vetor C é: \n";
for ( i=0 ; i<=4 ; i++ )
{
c[i]=a[i];
cout << "\n "<< c[i] << " ";
}

for ( i=0 ; i<=9 ; i++ )
{
c[i]=b[i];
cout << "\n "<< c[i] << " ";
}
getch();
return 0;
}
