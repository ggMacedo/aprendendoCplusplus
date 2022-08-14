#include <locale.h>
#include <iostream>
using namespace std;
int main (void)

{
	setlocale(LC_ALL,"Portuguese");
	int nu1, nu2, op, result0, result1, result2,i;
	do
	{
	cout << " \n Digite o primeiro número: " ;
	cin  >> nu1;
	cout <<" \n Digite o segundo número: " ;
	cin  >> nu2;
	cout << "\n Digite a operação desejada: " ;
	cout << " \n [1] para subtração. \n [2] para adição. \n [3] para multiplicação. \n " ;
	cin  >> op;
	
	switch (op){
		
	case 1:
	result0 = nu1 - nu2 ;
	cout << "\n O resultado da subtração dos dois números é: "<<result0 ;
	cout << " \n ";
	break;
	
	case 2:
	result1 = nu1 + nu2 ;
	cout << "\n O resultado da adição dos dois números é: "<< result1 ;
	cout << " \n ";
	break;
	
	case 3:
	result2 = nu1 * nu2 ;
	cout << "\n O resultado da multiplicação dos dois números é: "<< result2 ;
	cout << " \n ";
	break;
	
	default:
	cout<<" \n Opção inválida. " ;
	cout << " \n ";
	
	}
	cout << " \n " ;
	cout << "\n Deseja continuar? \n " ;
	cout << " \n " ;
	cout << "\n [1] para sim ou [2] para não. \n " << endl ;
	cin >> i ;
	cout << " \n ";
    }
 while ( i== 1 ) ; 	 
 return  0 ;
}
	
