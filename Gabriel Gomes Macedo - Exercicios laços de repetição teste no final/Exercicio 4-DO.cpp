#include <iostream>
#include <locale.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int main (void)
 {
	setlocale(LC_ALL, "Portuguese");
	float cm, m, mm, dm;
	int re = 1;
	do
	{
		cout << "\n Digite a media em cent�metros: ";
		cin>>cm;
		cout<< "\n";
		m = cm / 100;
		mm = cm * 10;
		dm = cm / 10;
		cout << "\n A medida em cent�metros, convertida em metros �: " << m ;
		cout<<"\n";
		cout << "\n Em mil�metros �: " << mm ;
		cout<<"\n";
		cout << "\n Em dec�metros �: " << dm ;
		cout<< "\n";
		re=re+1;
	}
	while (re < 11);
	return 0;
}
