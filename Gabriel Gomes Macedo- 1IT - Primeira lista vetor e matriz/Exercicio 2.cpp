#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int i; int a[15]; int b[15]; int c[15]; int d[15];

cout << "\n";
for ( i=0 ; i<=14 ; i++ )
{
	cout << "\n Informe o número da " << i+1 << "ª posição do vetor A: ";
cin  >> a[i];
cout << "\n";
}
cout << "\n";

for ( i=0 ; i<=14 ; i++ )
{
cout << "\n Informe o número da " << i+1 << "ª posição do vetor B: ";
cin  >> b[i];
cout << "\n";
} 
cout << "\n";
for ( i=0 ; i<=14 ; i++ )
{
c[i] = a[i] - b[i];
}
cout << "\n";
cout  << "\n O vetor C que recebe a subtração dos números é: \n";
for ( i=0 ; i<=14 ; i++ )
{
cout << "\n "<< c[i] << "\n";
}

for ( i=0 ; i<=14 ; i++ )
{
d[i] = a[i] * b[i];
}
cout  << "\n"; 
cout  << "\n O vetor D que recebe a multiplicação dos números é: \n";
for ( i=0 ; i<=14 ; i++ )
{
cout << "\n "<< d[i] << "\n";
}

getch ();
return 0;
}


