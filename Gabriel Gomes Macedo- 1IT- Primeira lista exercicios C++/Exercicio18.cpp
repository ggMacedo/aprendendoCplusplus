#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
     int ano,atual,resultado;
     
      cout<<"Digite o ano de nascimento:\n";
       cin>> ano;
       
        cout<<"Digite o ano atual:\n";
         cin>>atual;
       
          resultado= atual-ano;
       
            if(resultado>=18)
             cout<<"Atingiu.\n";
         
             else
              cout<<"Não atingiu.\n";
           
               if(resultado>=16)
                cout<<"Já pode votar.\n";
             
                 else
                  cout<<"Não pode votar.\n";
                  
                   getch();
                
                    return 0;
}
