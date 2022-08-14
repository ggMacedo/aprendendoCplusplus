#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");
int ano_a,ano_n,ida,re=1;
do
{

	cout<<"\n Informe o ano atual: ";
	cin>>ano_a;
	cout<< "\n";
	cout<<"\n Informe o ano de nascimento: ";
	cin>>ano_n;
	cout<< "\n";
	
		ida=ano_a-ano_n;
		if (ida>=18)
		
		
		cout<<"\n Atingiu.";
		
		else 
	    cout<<"\n Não atingiu.";
	    
	    
	    if(ida>=16)
		
	    cout<<"\n Já pode votar.";
	    
	    else 
	    cout<<"\n Não pode votar.";
	    
	    re=re+1;
    
}
while(re<=15);
getch();
return 0;
}

