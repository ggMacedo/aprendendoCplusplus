#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	 float num_1,num_2,result;
	 
	  cout<< "Digite o primeiro n�mero: \n";
	   cin>> num_1;
	   
	    cout<< "Digite o segundo n�mero: \n";
	     cin>> num_2;
	     
	      result=(num_1+num_2);
	      
	       if (result>25)
	        cout<< "A soma dos n�meros � maior que 25.";
	        
	         else
	          cout<< "A soma dos n�meros � menor que 25.";
	          
	           getch();
	           
	            return 0;	
}
