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
		cout<< "\n Digite a base do ret�ngulo: ";
	    cin>> base;
	    cout<< "\n";
	    cout<<"\n Digite a altura do ret�ngulo: ";
	    cin>> alt;
	    cout<< "\n";
	    area = base * alt;
	    cout<<"\n O valor da �rea �: " <<area <<endl;
	    cout<< "\n";
	
	    re=re+1;
	}
getch();
return 0;
}
