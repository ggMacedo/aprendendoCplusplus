
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");
 int peso,re=1;
 float alt,imc;
  
 while(re==1)
 {
	 cout<<"\n Informe seu peso: ";
	 cin>> peso;
	 cout<<"\n";
	 cout<<"\n Informe sua altura: ";
	 cin>> alt;
	 cout<<"\n";
	 imc=peso/(alt*2);
	 cout<< " \n O seu IMC é: "<<imc;
	 cout<<"\n";
        
 if(imc<18.0){
	 cout<<"\n Sua classificação na tabela é magreza.";
	 cout<<"\n";
 }
          
 if(imc>=18.0 and imc<24.9){
	 cout<<"\n Sua classificação na tabela é saudável.";
	 cout<<"\n";
 }
             
 if(imc>=25.0 and imc<29.9){
	 cout<<"\n Sua classificação na tabela é sobrepeso.";
	 cout<<"\n";
 }
              
 if(imc>=30.0){
	 cout<<"\n Sua classificação na tabela é obesidade.";
	 cout<<"\n";
	 cout<<"\n";
 }
	 cout<<"\n Deseja continuar?";
	 cout<<"\n Digite[1] para sim ou [2] para não: ";
	 cin>> re;
 }
return 0;
}
