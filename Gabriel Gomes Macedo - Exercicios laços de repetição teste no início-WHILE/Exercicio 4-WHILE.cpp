#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	float alt, re1, re2;
	int re;
	re=1;
	while( re <= 15)
{
		cout<< "\n Digite sua altura: ";
		cin>> alt;
		
		cout<< "\n Informe seu sexo. \n \n Digite [f] para feminino ou [m] para masculino: ";
		cin>> sexo;
	
	if(sexo=='m'){
		re1=(72.7*alt)-58;
		cout<<"\n Peso ideal é: "<<re1 <<endl;
		cout<<"\n";
	}
	
	if(sexo=='f'){
		re2=(62.1*alt)-44.7;
		cout<<"\n Peso ideal é: "<<re2 <<endl;
		cout<<"\n";
	}
	
	re=re+1;
}
getch();
return 0;
}
	
	
