#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	int nu1, nu2, op, result0, result1, result2,i;
	do
	{
	cout << " \n Digite o primeiro n�mero: " ;
	cin  >> nu1;
	cout <<" \n Digite o segundo n�mero: " ;
	cin  >> nu2;
	cout << "\n Digite a opera��o desejada: " ;
	cout << " \n [1] para subtra��o. \n [2] para adi��o. \n [3] para multiplica��o. \n " ;
	cin  >> op;
	
	switch (op){
		
	case 1:
	result0 = nu1 - nu2 ;
	cout << "\n O resultado da subtra��o dos dois n�meros �: "<<result0 ;
	cout << " \n ";
	break;
	
	case 2:
	result1 = nu1 + nu2 ;
	cout << "\n O resultado da adi��o dos dois n�meros �: "<< result1 ;
	cout << " \n ";
	break;
	
	case 3:
	result2 = nu1 * nu2 ;
	cout << "\n O resultado da multiplica��o dos dois n�meros �: "<< result2 ;
	cout << " \n ";
	break;
	
	default:
	cout<<" \n Op��o inv�lida. " ;
	cout << " \n ";
	
	}
	cout << " \n " ;
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para n�o. \n " << endl ;
	cin >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}
	
