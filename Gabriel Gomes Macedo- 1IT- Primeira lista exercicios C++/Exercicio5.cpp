#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");
int v_1,v_2,dif;

 cout<< "Digite o primeiro valor inteiro:\n";
  cin >> v_1;

   cout<< "Digite o segundo inteiro valor:\n";
    cin >> v_2;

     if(v_1>v_2)
      dif=v_1-v_2;

       else
        dif=v_2-v_1;
         cout<< "A diferen�a do maior pelo menor �:\n"<<dif;
         
          getch();
          
           return 0;
}

