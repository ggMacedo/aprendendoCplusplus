#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 float hora;
 
  cout<<"Digite a hora de ínicio do turno.\n";
   cin>> hora;
   
    if(hora>=5 and hora<13)
     cout<<"Turno da manhã.\n";
     
      
      else if(hora>=13 and hora<20)
       cout<<"Turno da tarde.\n";

        
       else 
         cout<<"Turno da noite.\n";
         
          getch();
          
           return 0;
}
