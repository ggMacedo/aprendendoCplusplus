#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main (void)
{
setlocale(LC_ALL, "Portuguese");

float base,alt, result;
int re=1;
do
{

	cout<<"\n Digite a base do tri�ngulo: ";
	cin>>base;
	cout<< "\n";
	cout<<"\n Digite a altura do tri�ngulo: ";
	cin>>alt;
	cout<< "\n";
	
	result=base*alt/2;
	cout<<"\n A �rea do tri�ngulo �: " <<result;
	cout<<"\n";
	re=re+1;		
}
while(re<=8);
getch();
return 0;
}
