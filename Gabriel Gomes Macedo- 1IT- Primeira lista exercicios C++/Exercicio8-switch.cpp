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

   switch(numero){

    case 1:
	  cout<<"BigMac.\n";
	   break;
	   
        case 2:
	     cout<< "Quarteir�o.\n";
	      break;
	      
           case 3:
	        cout<< "MacChinken.\n";
	         break;
	         
              case 4:
	           cout<<"Cheddar MacMelt.\n";
	            break;
	            
                 case 5:
	              cout<< "MacMax.\n";
	               break;
	               
                    default:
	                 cout<<"Op��o inv�lida.\n";
					 }
	                 
                      getch();
                      
                       return 0;
}
