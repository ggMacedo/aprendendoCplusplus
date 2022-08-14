#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, media,re;
	re=1;
	
	while( re <= 7)
	{
		cout<<"\n Informe a nota 1: ";
		cin>> n1;
		cout<< "\n";
		cout<<"\n Informe a nota 2: ";
		cin>> n2;
		cout<< "\n";
		cout<<"\n Informe a nota 3: ";
		cin>> n3;
		cout<< "\n";
		cout<<"\n Informe a nota 4: ";
		cin>> n4;
		cout<< "\n";
		media = ( n1 + n2 + n3 + n4 ) / 4;
		cout<< "\n A média anual é: " <<media <<endl;
		cout<< "\n";
		
		re=re+1;	
	}
	getch();
	return 0;			
	}	
