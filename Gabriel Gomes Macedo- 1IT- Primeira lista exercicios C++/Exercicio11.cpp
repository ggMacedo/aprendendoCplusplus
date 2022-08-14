#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	 float idade;
	 
	  cout<< "Digite a idade do nadador:\n";
	   cin>> idade;
	   
	    if(idade>=5 and idade<=7)
	     cout<<"Infantil A.\n";
	     
	      else if(idade>=8 and idade<=10)
	       cout<<"Infantil B.\n";
	       
	        else if(idade>=11 and idade<=13)
	         cout<<"Juvenil A.\n";
	         
	          else if(idade>=14 and idade<=17)
	           cout<<"Juvenil B.\n";
	           
	            else if(idade>=18)
	             cout<<"Senior.";
	             
	              else
	               cout<<"Opção inválida.\n";
	             
	                getch();
	              
	                 return 0;
}
