#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 float quilo,multa,result;
 
  cout<<"Digite o quilo do peixe:\n";
   cin>>quilo;
   
    result=quilo-50;
     multa=4*result;
     
      if(quilo<=50)
       cout<<"Não precisa pagar multa.\n";
       
        else 
         cout<<"Deverá pagar multa no valor de: \n"<<multa;
         
          getch();
          
           return 0;
}
