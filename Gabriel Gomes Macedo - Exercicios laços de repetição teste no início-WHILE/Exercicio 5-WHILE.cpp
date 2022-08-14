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
int re;
re=1;
while( re<=3)
{
cout<<"\n Digite a senha: ";
cin>> senha;
if(strcmp(senha,sen)==0){
    cout<<"\n Senha válida.";
    cout<<"\n";
	re=3;
	}
else {
    cout<<"\n Senha inválida.";
    cout<<"\n";}
    
    re=re+1;
}
getch();
return 0;
}
