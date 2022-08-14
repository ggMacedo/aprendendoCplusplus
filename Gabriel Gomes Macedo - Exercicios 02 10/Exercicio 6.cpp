#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	float va, vb, vc, vd, ve, vf, x;
	int i;
	do
	{
	cout << " \n Digite o valor A: ";
	cin  >> va;
	cout << "\n";
	cout << " \n Digite o valor B: ";
	cin  >> vb;
	cout << "\n";
	cout << " \n Digite o valor C: ";
	cin  >> vc;
	cout << "\n";
	cout << " \n Digite o valor D: ";
	cin  >> vd;
	cout << "\n";
	cout << " \n Digite o valor E: ";
	cin  >> ve;
	cout << "\n";
	cout << " \n Digite o valor F: ";
	cin  >> vf;
	cout << "\n";
		
	x= (( va + vb )/ vc) / ( vd - 2 * ve / vf ) + 4 * va ;
		
	cout << "\n";
	cout << " \n O valor de X é: "<< x << "\n";
	cout << "\n";
	cout << " \n " ;
		
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para não. \n " << endl ;
	cin  >> i ;
	cout << " \n ";
	}
 while ( i== 1 ) ; 	 
 return  0 ;
}	
	
