#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int re=1;
	float dep,v_h,hora,vb,vl;
	do
	{
		cout<<"\n Informe o número de dependentes: ";
		cin>>dep;
		cout<<"\n";
		cout<<"\n Informe o valor de horas: ";
		cin>>v_h;
		cout<<"\n";
		cout<<"\n Informe as horas trabalhadas no mês: ";
		cin>>hora;
		cout<<"\n";	
		dep=dep*300;
		vb=v_h*hora;
		vl=vb+dep;
		cout<< "\n O valor bruto é: "<<vb;
		cout<<"\n";
		cout<< "\n O valor líquido é: "<<vl;
		cout<<"\n";
		re=re+1;	
	}
    while(re<=10);
	getch();
	return 0;
}
