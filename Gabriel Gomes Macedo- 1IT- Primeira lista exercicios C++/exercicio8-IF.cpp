#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int numero;

  cout<<"Digite o n�mero do lanche:\n";
   cin>> numero;
   
    if(numero==1)
     cout<<"BigMac.\n";
     
      else if(numero==2)
       cout<<"Quarteir�o.\n";
       
        else if(numero==3)
         cout<<"MacChinken.\n";
         
          else if(numero==4)
           cout<<"Cheddar MacMelt.\n";
           
            else if(numero==5)
             cout<<"MacMax.\n";
             
              else
               cout<<"Op��o inv�lida.\n";
               
                getch();
                
                 return 0;
}
