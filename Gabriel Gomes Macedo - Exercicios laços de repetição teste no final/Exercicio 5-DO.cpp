#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int quilo,kgp,multa,re=1;
do
{
	cout<<"\n Digite o quilo do peixe: ";
	cin>>quilo;
	cout<< "\n";
	
	kgp=quilo-50;
	multa=4*kgp;
	if(quilo<=50)
	cout<< "\n Não necessita pagar multa.";
	
	else
	cout<<"\n O valor da multa é: "<<multa;
	
	re=re+1;
}
while(re<=5);
getch();
return 0;
}
