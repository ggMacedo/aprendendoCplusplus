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
        cout<< " O seu IMC é: "<<imc;
        
         if(imc<18)
          cout<<"\n Sua classificação na tabela é magreza.\n";
          
            else if(imc>=18 and imc<25)
             cout<<"\n Sua classificação na tabela é saudável.\n";
             
             else if(imc>=25 and imc<30)
              cout<<"\n Sua classificação na tabela é sobrepeso.\n";
              
               else
                cout<<"\n Sua classificação na tabela é obesidade.\n";
                
                 getch();
                 
                  return 0;
}

