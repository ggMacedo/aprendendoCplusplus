#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 int peso;
 float alt,imc;
  
   cout<<"Digite seu peso: \n";
    cin>> peso;
    
     cout<<"Digite sua altura: \n";
      cin>> alt;
      
    
       imc=peso/(alt*2);
        cout<< " O seu IMC �: "<<imc;
        
         if(imc<18)
          cout<<"\n Sua classifica��o na tabela � magreza.\n";
          
            else if(imc>=18 and imc<25)
             cout<<"\n Sua classifica��o na tabela � saud�vel.\n";
             
             else if(imc>=25 and imc<30)
              cout<<"\n Sua classifica��o na tabela � sobrepeso.\n";
              
               else
                cout<<"\n Sua classifica��o na tabela � obesidade.\n";
                
                 getch();
                 
                  return 0;
}

