#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int i; int a[15]; int b[15];

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
b[i]= pow(a[i],2);
}

cout << "\n";
cout  << "\n O vetor B que recebe o quadrado dos números do vetor A é: \n";
for ( i=0 ; i<=14 ; i++ )
{
cout << "\n "<< b[i] << "\n";
}

getch ();
return 0;
}


