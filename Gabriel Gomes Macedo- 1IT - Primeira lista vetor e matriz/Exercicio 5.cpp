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
cout << "\n Informe os n�meros da Matriz: \n";
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
cout << "\n A matriz �: \n";
cout << "\n ";
for ( l=0 ; l<=2 ; l++ ){
 for ( c=0 ; c<=2 ; c++ ){	
 cout << m[l][c] << " ";
	}
cout << "\n ";
}
cout << "\n";
cout << "\n A soma da diagonal principal �: " <<digprin;
cout << "\n";

cout << "\n";
cout << "\n A soma da diagonal secund�ria �: " <<digsec;
cout << "\n";

cout << "\n";
cout << "\n A soma dos elementos da linha 2 �: " <<linha2;
cout << "\n";

cout << "\n";
cout << "\n A soma dos elementos da coluna 3 �: " <<coluna3;
cout << "\n";

cout << "\n";
cout << "\n A multiplica��o dos elementos da coluna 2 �: "<<coluna2;
cout << "\n";

cout << "\n";
cout << "\n A multiplica��o dos elementos da linha 3 �: " <<linha3;
cout << "\n";

cout << "\n";
cout << "\n A soma total dos elementos �: " <<somatotal;
cout << "\n";

cout << "\n";
cout << "\n A multiplica��o total dos elementos �: " <<multtotal;
cout << "\n";


getch();
return 0;	
}
