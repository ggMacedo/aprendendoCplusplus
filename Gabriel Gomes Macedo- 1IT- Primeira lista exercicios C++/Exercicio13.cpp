#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 float v_a,v_b,v_c;
  cout<<"Digite o valor de A:\n";
   cin>>v_a;
   
    cout<<"Digite o valor de B:\n";
     cin>>v_b;
     
      cout<<"Digite o valor de C:\n";
       cin>>v_c;
       
         if(v_a < v_b + v_c and v_b < v_a + v_c and v_c < v_a + v_b){
		   if(v_a==v_b and v_b==v_c)
               cout<<"� um tri�ngulo equil�tero.\n";
           
            else if(v_a==v_b or v_a==v_c or v_b==v_c)
                cout<<"� um tri�ngulo is�celes.\n";
             
                 else if(v_a!=v_b and v_a!=v_c and v_b!=v_c)
                     cout<<"� um tri�ngulo escaleno.\n";
         }
          else
           cout<<"N�o comp�em um tri�ngulo.\n";
               
 getch();
            
 return 0;
}

