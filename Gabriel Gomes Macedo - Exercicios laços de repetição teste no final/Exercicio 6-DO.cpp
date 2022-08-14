
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int numero,re=1;
do
{
		cout<<"\n Digite o número do lanche:";
		cout<<"\n"; 
		cout<<" \n Digite [1] para BigMac; \n Digite [2] para Quarteirao; \n Digite [3] para MacChicken;\n Digite [4] para Cheddar MacMelt; \n Digite [5] para MacMax: ";
		cin>> numero;
		cout<< "\n";

switch(numero){
		case 1:
		cout<<"\n BigMac.\n";
		break;
			   
		case 2:
		cout<< "\n Quarteirão.\n";
		break;
			      
		case 3:
		cout<< "\n MacChinken.\n";
		break;
			         
		case 4:
		cout<<"\n Cheddar MacMelt.\n";
	    break;
			            
		case 5:
		cout<< "\n MacMax.\n";
		break;
			               
		default:
		cout<<"\n Opção inválida.\n";
}
	cout<<"\n Deseja continuar?";
	cout<<"\n Digite[1] para sim ou [2] para não: ";
	cin>> re;
}
while(re==1);
return 0;
}

