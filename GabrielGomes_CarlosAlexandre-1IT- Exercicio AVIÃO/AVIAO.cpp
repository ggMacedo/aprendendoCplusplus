#include <iostream>
#include <locale.h>
using namespace std;
int main (void)

{
    setlocale(LC_ALL, "Portuguese");

    int a[20][4] ={ 0, 0, 0, 0,
                    0, 0, 0, 0, 
			    	0, 0, 0, 0, 
				    0, 0, 0, 0,
			        0, 0, 0, 0,
                    0, 0, 0, 0, 
			    	0, 0, 0, 0, 
			    	0, 0, 0, 0,
			        0, 0, 0, 0,
			    	0, 0, 0, 0,
                    0, 0, 0, 0,
			    	0, 0, 0, 0, 
			    	0, 0, 0, 0, 
			    	0, 0, 0, 0,
			        0, 0, 0, 0,
			    	0, 0, 0, 0,
                    0, 0, 0, 0, 
			    	0, 0, 0, 0, 
		        	0, 0, 0, 0, 
			    	0, 0, 0, 0,};
	
	int i; int l; int c; int ocp; int mres;
	
	do
	{
	    cout<<"\n Menu \n";
	    cout << "\n ";
	    cout<<"\n Ver poltronas [1]. \n";
	    cout<<"\n Reservar poltronas [2].\n";
	    cout<<"\n Sair do programa [3]. \n";
	    cin>> i;
	    
	   
	    switch(i)
	    {
	    	case 1:
	    	
			cout << "\n Lista de poltronas do avião: \n";
            cout << "\n ";
            cout << "             1° 2° 3° 4° \n";
            cout << "\n ";
        
           for ( l=0 ; l<=8 ; l++ )
            {
               cout <<" "<< l+1 <<"° Fileira  ";
        
               for ( c=0 ; c<=3 ; c++ )
                {  	
                    cout << a[l][c] << "  ";
                }
                cout << "\n ";
	        }
	        
	        for ( l=9 ; l<=19 ; l++ )
            {
               cout << l+1 <<"° Fileira  ";
        
               for ( c=0 ; c<=3 ; c++ )
                {  	
                    cout << a[l][c] << "  ";
                }
                cout << "\n ";	
	        }
	       break;
	       
	       
	       case 2:
	       	
	       do
	        {
	            cout << "\n Digite a fileira desejada: ";
		        cin  >> l;
		  
		        cout << "\n";
		        cout << "\n Digite a poltrona desejada: ";
		        cin  >> c;
		        cout << "\n";
		        
		        if(l>20 or l<1 or c>4 or c<1)
		        {
				    cout<<"\n Essa fileira não existe. \n";
				    cout<<"\n";
				    i=1;
			    }
				
				else
				{
				
				    if(l<=20 or l>=1 or c<=4 or c>=1)
				    {
		                cout << "\n Para definir a reserva das poltronas.\n";
		                cout << "\n Digite [0] para LIVRE \n";
		                cout << "\n Digite [1] para OCUPADO \n";
                        cin  >> ocp;
                        cout << "\n";
                        
                        switch(ocp)
		                {
			                case 0:
	                        a[l-1][c-1] = 0;	
			                break;
			
				            case 1:
				            a[l-1][c-1] = 1;
				            i=1;
				            break;
				            
				            default:
		                    cout << "\n Opção inválida. \n";
		                    cout << "\n Digite novamente. \n";
		                    break;
		                }
			            
			            cout << "\n Lista de poltronas do avião: \n";
	                    cout << "\n ";
	                    cout << "             1° 2° 3° 4° \n";
	                    cout << "\n ";
	        
	                    for ( l=0 ; l<=8 ; l++ )
			            {
			               cout <<" "<< l+1 <<"° Fileira  ";
			        
			               for ( c=0 ; c<=3 ; c++ )
			                {  	
			                    cout << a[l][c] << "  ";
			                }
			                cout << "\n ";
				        }
				        
				        for ( l=9 ; l<=19 ; l++ )
			            {
			               cout << l+1 <<"° Fileira  ";
			        
			               for ( c=0 ; c<=3 ; c++ )
			                {  	
			                    cout << a[l][c] << "  ";
			                }
			                cout << "\n ";	
				        }
		   
		                cout << "\n Deseja fazer mais reservas ? \n ";
		                cout << "\n Digite [1] para SIM. \n Digite [2] para NÃO. \n";
		                cin  >> mres;
		                cout << "\n";
		     
		                if ( mres < 1 or mres >= 3 )
			            {
		                    cout << "\n Opção inválida. \n";
		                }
	                
	                }  
	            }
		    }
	        while( mres == 1 );
	        break;
	        
			
			case 3:
	            
			cout<<"\n Fechando Programa... ";
	        break;
	            
	            
	        default: 
	        cout<<"\n Opção inválida. \n";
			i=1;	
	    }
	}
	while(i==1);  
	
	return 0;   
}
