#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
    setlocale(LC_ALL, "Portuguese");
	
     int numero;

      cout << "Digite o n�mero: \n";
       cin>> numero;

        if(numero % 2==0)
         cout<< "O n�mero � par.\n";
   
          else
           cout<< "O n�mero � �mpar.\n";
   
            getch();

             return 0;
}

