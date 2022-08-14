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
		cout << "\n Digite a media em centímetros: ";
		cin>>cm;
		cout<< "\n";
		m = cm / 100;
		mm = cm * 10;
		dm = cm / 10;
		cout << "\n A medida em centímetros, convertida em metros é: " << m ;
		cout<<"\n";
		cout << "\n Em milímetros é: " << mm ;
		cout<<"\n";
		cout << "\n Em decímetros é: " << dm ;
		cout<< "\n";
		re=re+1;
	}
	while (re < 11);
	return 0;
}
