#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 int dia1,mes1,ano1,dia2,mes2,ano2,data1,data2;
 
  cout<<"Digite Dia1/Mês1/Ano1:\n";
   cin>>dia1;
    cin>>mes1;
     cin>>ano1;
     
      data1= (ano1*100+mes1)*100+dia1;
      
       cout<<"Digite Dia2/Mês2/Ano2:\n";
        cin>>dia2;
         cin>>mes2;
          cin>>ano2;
          
           data2= (ano2*100+mes2)*100+dia2;
           
            if(data1<data2)
             cout<<"Dia1/Mês1/Ano1 é menor que Digite Dia2/Mês2/Ano2.\n";
             
              else
               cout<<"Dia2/Mês2/Ano2 é menor que Digite Dia1/Mês1/Ano1.\n";
               
                getch();
                
                 return 0;
}
 

