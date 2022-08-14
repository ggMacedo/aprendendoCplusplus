#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int numero;

  cout<<"Digite o número:\n";
   cin>> numero;
   
    if(numero==1)
     cout<<"Janeiro.\n";
     
      else if(numero==2)
       cout<<"Fevereiro.\n";
       
        else if(numero==3)
         cout<<"Março.\n";
         
          else if(numero==4)
           cout<<"Abril.\n";
           
            else if(numero==5)
             cout<<"Maio.\n";
             
             else if(numero==6)
              cout<<"Junho.\n";
     
               else if(numero==7)
                cout<<"Julho.\n";
       
                else if(numero==8)
                 cout<<"Agosto.\n";
         
                  else if(numero==9)
                   cout<<"Setembro.\n";
           
                    else if(numero==10)
                     cout<<"Outubro.\n";
                     
                      else if(numero==11)
                       cout<<"Novembro.\n";
           
                        else if(numero==12)
                         cout<<"Dezembro.\n";
        
                           else
                            cout<<"Opção inválida.\n";
               
                             getch();
                
                               return 0;
}
