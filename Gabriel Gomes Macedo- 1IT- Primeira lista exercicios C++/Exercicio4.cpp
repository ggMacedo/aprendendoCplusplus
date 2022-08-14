#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	 float v_1,v_2;
	 
	  cout<< "Digite o primeiro valor real: \n";
	   cin>> v_1;
	   
	    cout<< "Digite o segundo valor real: \n";
	     cin>>v_2;
	     
	      if(v_1>v_2)
	       cout<< "O primeiro valor real é maior que o segundo valor real.\n";
	       
            if(v_2<v_1)
	         cout<< "O segundo valor real é menor que o primeiro valor real.\n";
	         
	          if(v_2>v_1)
	           cout<< "O segundo valor real é maior que o primeiro valor real.\n";
	           
                if(v_1<v_2)
	             cout<< "O primeiro valor real é menor que o segundo valor real.\n";
	             
	               getch();
	               
	                return 0;
}
	  
	  

	 
	 
