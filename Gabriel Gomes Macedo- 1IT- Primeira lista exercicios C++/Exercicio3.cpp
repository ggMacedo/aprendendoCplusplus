#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	 float num_1,num_2,result;
	 
	  cout<< "Digite o primeiro número: \n";
	   cin>> num_1;
	   
	    cout<< "Digite o segundo número: \n";
	     cin>> num_2;
	     
	      result=(num_1+num_2);
	      
	       if (result>25)
	        cout<< "A soma dos números é maior que 25.";
	        
	         else
	          cout<< "A soma dos números é menor que 25.";
	          
	           getch();
	           
	            return 0;	
}
