#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

int numero;

 cout<<"Digite o número:\n";
  cin>> numero;

   switch(numero){

    case 1:
	  cout<<"Janeiro.\n";
	   break;
	   
        case 2:
	     cout<< "Fevereiro.\n";
	      break;
	      
           case 3:
	        cout<< "Março.\n";
	         break;
	         
              case 4:
	           cout<<"Abril.\n";
	            break;
	            
                 case 5:
	              cout<< "Maio.\n";
	               break;
	               
	                case 6:
	                 cout<<"Junho.\n";
	                 break;
	                 
	                  case 7:
	                   cout<<"Julho.\n";
	                    break;
	                   
	                 	 case 8:
	                 	   cout<<"Agosto.\n";
	                 	    break;
	                 	   
	                 		 case 9:
	                 		  cout<<"Setembro.\n";
	                 		   break;
	                 		  
	                 			case 10:
	                 			 cout<<"Outubro.\n";
	                 			  break;
	                 			  
	                 				case 11:
	                 				 cout<<"Novembro.\n";
	                 				  break;
	                 				
	                 				    case 12:
	                 				     cout<<"Dezembro.\n";
	                 				      break;
	                 				  
                                            default:
	                                          cout<<"Opção inválida.\n";
   }
	                 
                                                getch();
                      
                                                  return 0;
}
