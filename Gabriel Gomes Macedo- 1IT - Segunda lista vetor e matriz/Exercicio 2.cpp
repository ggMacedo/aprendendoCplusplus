#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int i; int a[5][3]; int b[5][3]; int c3[5][3]; int l; int c;

cout << "\n";
cout << "\n Informe os números da Matriz A: \n";
cout << "\n";
for ( l=0; l<=4; l++ )
{
	for ( c=0; c<=2; c++ )
	{
		cin >> a[l][c];
		cout<< "\n";
	}
}

cout << "\n";
cout << "\n Informe os números da Matriz B: \n";
cout << "\n";
for ( l=0; l<=4; l++ )
{
	for ( c=0; c<=2; c++ )
	{
		cin >> b[l][c];
		cout<< "\n";
	}
}

cout << "\n ";
cout << "\n A matriz A é: \n";
cout << "\n ";
for ( l=0 ; l<=4 ; l++ )
{
 for ( c=0 ; c<=2 ; c++ )
 {	
   cout << a[l][c] << " ";
 }
cout << "\n ";
}

cout << "\n ";
cout << "\n A matriz B é: \n";
cout << "\n ";
for ( l=0 ; l<=4 ; l++ )
{
 for ( c=0 ; c<=2 ; c++ )
 {	
 cout << b[l][c] << " ";
 }
cout << "\n ";
}

for ( l=0; l<=4; l++ )
{
	for ( c=0; c<=2; c++ )
	{
	 c3[l][c] = pow(a[l][c],b[l][c]);
	}
}

cout << "\n ";
cout << "\n A matriz C é: \n";
cout << "\n ";
for ( l=0 ; l<=4 ; l++ )
{
 for ( c=0 ; c<=2 ; c++ )
 {	
 cout << c3[l][c] << " ";
 }
cout << "\n ";
}
getch();
return 0;
}
