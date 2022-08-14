#include <iostream>
#include <locale.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");
long int m[5][10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int i; int l; int c; int ocp;

do
{
	cout << "\n";
	cout << "\n Menu \n";
	cout << "\n Digite [1] para exibir os quartos. \n Digite [2] para definir a ocupação dos quartos.\n Digite [3] para sair do programa.\n";
    cout << "\n";
    cin  >> i;
	
	switch ( i )
	{
	 case 1:
	 cout << "\n Lista de quartos: \n";
     cout << "\n ";
     cout << "         1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
     cout << "\n ";
        
     for ( l=0 ; l<=4 ; l++ )
     {
        cout << l+1 <<"° Andar ";
        for ( c=0 ; c<=9 ; c++ )
        {	
          cout << m[l][c] << "  ";
        }
        cout << "\n ";
     }
        break;
        
        case 2:
		cout << "\n Digite o andar desejado: ";
		cin  >> l;
		cout << "\n Digite o quarto desejado: ";
		cin  >> c;
		cout << "\n Para definir a ocupção dos quartos.\n";
		cout << "\n Digite [0] para LIVRE \n Digite [1] para OCUPADO \n";
        cin  >> ocp;
        
        if ( ocp == 0 )
        {
        	m[l-1][c-1] = 0;	
		}
		
		else 
		 if ( ocp == 1 )
		    m[l-1][c-1] = 1;
		    i=1;
		break;  
		
		case 3:
		cout <<" \n Fechando o programa...";
    }
}	
while(i == 1);

return 0;
}
