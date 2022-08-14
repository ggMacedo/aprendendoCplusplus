#include <conio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

 char senha[5];
  char sen[]="asdfg";
  
   cout<<"Digite a senha:\n";
    cin>>senha;
    
     if(strcmp(senha,sen)==0)
      cout<<"Senha válida.\n";
      
   else
      cout<<"Senha inválida.\n";
      
getch();

return 0;
}
