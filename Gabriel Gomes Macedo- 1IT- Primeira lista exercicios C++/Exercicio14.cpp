#include <conio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 float a,b,c,x1,x2,delta;
  
   cout<<"Digite o valor de A:\n";
    cin>> a;
    
     cout<<"Digite o valor de B:\n";
      cin>>b;
      
       cout<<"Digite o valor de C:\n";
        cin>>c;
        
        delta=pow(b,2)-4*a*c;
	    x1=(-b+ sqrt (delta))/2*a;
	    x2=(-b- sqrt (delta))/2*a;
	    if(delta > 0)
	    cout<<"\n A equa��o possui duas ra�zes de, "<<x1<<" e "<<x2;
		else 
		if(delta == 0)
	    cout<<"\n A equa��o possui uma ra�z de, "<<x1;
	    else
	    cout<<"\n A equa��o n�o possui ra�z.";
                 
                  getch();
                  
                   return 0;
}



