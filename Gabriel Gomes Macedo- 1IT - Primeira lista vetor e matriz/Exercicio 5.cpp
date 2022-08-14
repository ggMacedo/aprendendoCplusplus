#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
int l; int c; int m[3][3]; int somatotal=0; int digprin=0; int digsec=0;
int linha2=0; int coluna3=0; int coluna2=1; int linha3=1; int multtotal=1;

cout << "\n";
cout << "\n Informe os números da Matriz: \n";
cout << "\n";
for ( l=0; l<=2; l++ ){
	for ( c=0; c<=2; c++ ){
		cin >> m[l][c];
		cout<< "\n";
			
		somatotal = somatotal + m[l][c];

		multtotal = multtotal * m[l][c];

		if (l==c)
		digprin = digprin + m[l][c];

		if(l+c==2)
		digsec = digsec + m[l][c];

		if(l==1)
		linha2 = linha2 + m[l][c];

		if(c==2)
		coluna3 = coluna3 + m[l][c];

		if (c==1)
		coluna2 = coluna2 * m[l][c];

		if (l==2)
		linha3 = linha3 * m[l][c];
	 }
 }
cout << "\n ";
cout << "\n A matriz é: \n";
cout << "\n ";
for ( l=0 ; l<=2 ; l++ ){
 for ( c=0 ; c<=2 ; c++ ){	
 cout << m[l][c] << " ";
	}
cout << "\n ";
}
cout << "\n";
cout << "\n A soma da diagonal principal é: " <<digprin;
cout << "\n";

cout << "\n";
cout << "\n A soma da diagonal secundária é: " <<digsec;
cout << "\n";

cout << "\n";
cout << "\n A soma dos elementos da linha 2 é: " <<linha2;
cout << "\n";

cout << "\n";
cout << "\n A soma dos elementos da coluna 3 é: " <<coluna3;
cout << "\n";

cout << "\n";
cout << "\n A multiplicação dos elementos da coluna 2 é: "<<coluna2;
cout << "\n";

cout << "\n";
cout << "\n A multiplicação dos elementos da linha 3 é: " <<linha3;
cout << "\n";

cout << "\n";
cout << "\n A soma total dos elementos é: " <<somatotal;
cout << "\n";

cout << "\n";
cout << "\n A multiplicação total dos elementos é: " <<multtotal;
cout << "\n";


getch();
return 0;	
}
