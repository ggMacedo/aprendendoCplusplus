#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;
int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  float saldofinal, saldoinicial, taxa;
  int re, prazo;
  while (re<=5)
  {
  	cout<<"\n Informe o saldo inicial: ";
  	cin>> saldoinicial;
  	cout<<"\n";
  	cout<<"\n Informe o prazo: ";
  	cin>> prazo;
  	cout<<"\n";
  	cout<<"\n Digite a taxa: ";
  	cin>> taxa;
  	cout<<"\n";
  	saldofinal= saldoinicial * (1+ pow ((taxa/100),prazo));
  	cout<<"\n O saldo após "<<prazo<<" meses, será de "<<saldofinal<<".";
  	cout<<"\n";
  	cout<<"\n";
    re=re+1;
  }
  getch();
  return 0;
}
