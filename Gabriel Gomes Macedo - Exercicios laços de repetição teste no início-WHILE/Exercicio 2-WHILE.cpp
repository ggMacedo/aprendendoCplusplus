#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	float base, alt, area;
	int re;
	re=1;
	while( re <=10 )
	
	{
		cout<< "\n Digite a base do retângulo: ";
	    cin>> base;
	    cout<< "\n";
	    cout<<"\n Digite a altura do retângulo: ";
	    cin>> alt;
	    cout<< "\n";
	    area = base * alt;
	    cout<<"\n O valor da área é: " <<area <<endl;
	    cout<< "\n";
	
	    re=re+1;
	}
getch();
return 0;
}
