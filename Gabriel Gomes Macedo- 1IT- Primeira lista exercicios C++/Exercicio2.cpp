#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
    setlocale(LC_ALL, "Portuguese");
	
     int numero;

      cout << "Digite o número: \n";
       cin>> numero;

        if(numero % 2==0)
         cout<< "O número é par.\n";
   
          else
           cout<< "O número é ímpar.\n";
   
            getch();

             return 0;
}

