#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int numero;

 cout<<"Digite o número do lanche:\n";
  cin>> numero;

   switch(numero){

    case 1:
	  cout<<"BigMac.\n";
	   break;
	   
        case 2:
	     cout<< "Quarteirão.\n";
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
	                 cout<<"Opção inválida.\n";
					 }
	                 
                      getch();
                      
                       return 0;
}
