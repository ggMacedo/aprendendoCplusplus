#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	 float n1, n2, n3, n4, media;
	
	  cout << "Digite a nota 1: \n";
	   cin>> n1;
	 
	    cout << "Digite a nota 2: \n";
	     cin>> n2;
	 
	      cout << "Digite a nota 3: \n";
	       cin>> n3;
	   
	       cout << "Digite a nota 4: \n";
	        cin>> n4;
	
	         media= (n1+n2+n3+n4)/4;
	
	           if (media>=7)
	            cout<< "Aprovado.\n";
	    
	             else
	              cout<< "Reprovado.\n";
	    
                   getch();
    
	                return 0;    	
}
