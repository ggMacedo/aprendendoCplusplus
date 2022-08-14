#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

char sexo;
 float alt,re1,re2;
 
  cout<<"Digite o [f] para feminino e [m] para masculino:\n";
    cin>>sexo;
    
     cout<<"Digite a altura:\n";
      cin>>alt;
      
       re1=(72.7*alt)-58;
        re2=(62.1*alt)-44.7;
        
         if(sexo='m')
          cout<<"Peso ideal é, "<<re1;
          
           else
         if(sexo='f')
          cout<<"Peso ideal é, "<<re2;
          
           else
          cout<<"Inválido.\n";
          
            getch();
            
             return 0;
}


