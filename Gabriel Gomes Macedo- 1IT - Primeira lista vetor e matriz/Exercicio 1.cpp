#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int i; int a[20]; int b[20]; int c[20];
cout << "\n";
for ( i=0 ; i<=19 ; i++ )
{
	cout << "\n Informe o número da " << i+1 << "ª posição do vetor A: ";
	cin  >> a[i];
	cout << "\n";
}
cout << "\n";
for ( i=0 ; i<=19 ; i++ )
{
	cout << "\n Informe o número da " << i+1 << "ª posição do vetor B: ";
	cin  >> b[i];
	cout << "\n";
}
cout << "\n";
for ( i=0 ; i<=19 ; i++ )
{
c[i] = a[i] + b[i];
}
cout << "\n";
cout  << "\n O vetor C que recebe a soma dos números é: \n";
for ( i=0 ; i<=19 ; i++ )
{
cout << "\n "<< c[i] << "\n";
}

getch ();
return 0;
}
