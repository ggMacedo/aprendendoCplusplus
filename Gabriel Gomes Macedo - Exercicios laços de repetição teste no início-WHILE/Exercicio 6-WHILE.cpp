
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
	 cout<< " \n O seu IMC �: "<<imc;
	 cout<<"\n";
        
 if(imc<18.0){
	 cout<<"\n Sua classifica��o na tabela � magreza.";
	 cout<<"\n";
 }
          
 if(imc>=18.0 and imc<24.9){
	 cout<<"\n Sua classifica��o na tabela � saud�vel.";
	 cout<<"\n";
 }
             
 if(imc>=25.0 and imc<29.9){
	 cout<<"\n Sua classifica��o na tabela � sobrepeso.";
	 cout<<"\n";
 }
              
 if(imc>=30.0){
	 cout<<"\n Sua classifica��o na tabela � obesidade.";
	 cout<<"\n";
	 cout<<"\n";
 }
	 cout<<"\n Deseja continuar?";
	 cout<<"\n Digite[1] para sim ou [2] para n�o: ";
	 cin>> re;
 }
return 0;
}
