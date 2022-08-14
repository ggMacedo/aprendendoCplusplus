#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main (void)

{
setlocale(LC_ALL, "Portuguese");

int a[5][10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                     
int b[5][10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                     
int c2[5][10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                      
int i; int l; int c; int ocp;int film;int sala; int w; int gg; int pag;
float meia=0; float in=0; float pag1=1; float pag2=1; float quant1=0; float meia2=0; 
float in2=0; float quant2=0; float meia3=0; float in3=0; float quant3=0; float quanttotal;

do
{
	cout << "\n Menu \n";
	cout << "\n Digite [1] para exibir as salas. \n";
	cout <<" \n Digite [2] para definir a reserva de poltronas. \n";
	cout << "\n Digite [3] para exibir o faturamento. \n";
	cout << "\n Digite [4] para sair do programa. \n";
    cout << "\n";
    cin  >> i;
    
	switch ( i )
   {
	 case 1:
	 cout << "\n Digite a sala desejada \n";
	 cout << "\n Digite [1] para a primeira sala [Filme de TERROR].";
	 cout << "\n";
	 cout << "\n Digite [2] para a segunda sala [Filme de AÇÃO].";
	 cout << "\n";
	 cout << "\n Digite [3] para a terceira sala [Filme de ROMANCE]. \n";
	 cout << "\n";
	 cin  >> film;
	 
	 if( film == 1 )
	 
	   {
	   	 
	     cout << "\n Lista de poltronas da PRIMEIRA sala [Filme de TERROR]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
        
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << a[l][c] << "  ";
          }
          cout << "\n ";
         }
       }
     
     if( film == 2 )
     
	   {
	   	 
         cout << "\n Lista de poltronas da SEGUNDA sala [Filme de AÇÃO]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
             
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << b[l][c] << "  ";
          }
          cout << "\n ";
         }
       }
     
     if( film == 3 )
     
       {
         
         cout << "\n Lista de poltronas da TERCEIRA sala [Filme de ROMANCE]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << c2[l][c] << "  ";
          }
          cout << "\n ";
         }
       }
       
     break;
     
     case 2:
     
     
     cout << " \n Informe a SALA desejada \n";
     cout << " \n Digite [1] para a primeira sala [Filme de TERROR]. \n";
	 cout << " \n Digite [2] para a segunda sala [Filme de AÇÃO]. \n";
	 cout << " \n Digite [3] para a terceira sala [Filme de ROMANCE]. \n";
     cin  >> sala;
     cout << "\n";
     
     if(sala == 1 )
	{
		do
		{
		  
		  cout << "\n SALA 1 [FILME TERROR]. \n";
		  cout << "\n";
		  
		  cout << "\n Digite a fileira desejada: ";
		  cin  >> l;
		  
		  cout << "\n";
		  cout << "\n Digite a poltrona desejada: ";
		  cin  >> c;
		  cout << "\n";
		  
		  cout << "\n Para definir a reserva das poltronas.\n";
		  cout << "\n Digite [0] para LIVRE \n";
		  cout << "\n Digite [1] para OCUPADO \n";
          cin  >> ocp;
          cout << "\n";
          
          cout << "\n";
          cout << "\n Informe a forma de pagamento \n";
          cout << "\n Digite [1] para meia entrada [10$]. \n";
          cout << "\n Digite [2] para entrada inteira [20$]. \n";
          cin  >> pag;
          cout << "\n";
          
          
          if( pag == 1 )
		  {
		  	 meia = pag2 * 10;
		  }
		  
		  if( pag == 2 )
		  {
		  	 in = pag1 * 20;
		  }
		  
		  if ( pag >= 3 or pag < 1 )
		  {
		     cout << "\n Opção de pagamento inválida. \n";
	      }
	      
		  quant1 = meia + in;
		  
          if( ocp > 1 )
		 {
	         cout << "\n Opção inválida. \n";
	         cout << "\n Digite novamente. \n";
		 }
    
         if ( ocp == 0 )
         {
        	  a[l-1][c-1] = 0;	
		 }
		
		 else 
		 if ( ocp == 1 )
		      a[l-1][c-1] = 1;
		    
		 i=1;
		 
		 cout << "\n Lista de poltronas da PRIMEIRA sala [Filme de TERROR]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
        
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << a[l][c] << "  ";
          }
          cout << "\n ";
         }
	   
	     cout << "\n Deseja fazer mais reservas ? \n ";
	     cout << "\n Digite [1] para SIM. \n Digite [2] para NÃO. \n";
	     cin  >> w;
	     cout << "\n";
	     
	     if ( w < 1 or w >= 3 )
		 {
	         cout << "\n Opção inválida. \n";
	     }
       }
       
	 while( w == 1 );
	  
	}
	    
	 if(sala == 2 )
	 {
		do
	   {
	   	 
		 cout << "\n SALA 2 [Filme de AÇÃO]. \n";
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Digite a fileira desejada: ";
		 cin  >> l;
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Digite a poltrona desejada: ";
		 cin  >> c;
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Para definir a reserva das poltronas.\n";
		 cout << "\n Digite [0] para LIVRE \n Digite [1] para OCUPADO \n";
         cin  >> ocp;
         cout << "\n";
         
         cout << "\n";
         cout << "\n Informe a forma de pagamento \n";
         cout << "\n Digite [1] para meia entrada [10$]. \n";
         cout << "\n Digite [2] para entrada inteira [20$]. \n";
         cin  >> pag;
         cout << "\n";
          
          
          if( pag == 1 )
		  {
		  	 meia2 = pag2 * 10;
		  }
		  
		  if( pag == 2 )
		  {
		  	 in2 = pag1 * 20;
		  }
		  
		  if ( pag >= 3 or pag < 1 )
		  {
		     cout << "\n Opção de pagamento inválida. \n";
	      }
	      
		  quant2 = meia2 + in2;
		  
          if( ocp > 1 )
		 {
	         cout << "\n Opção inválida. \n";
	         cout << "\n Digite novamente. \n";
		 }
    
         if ( ocp == 0 )
         {
             b[l-1][c-1] = 0;	
		 }
		
		 else 
		 if ( ocp == 1 )
		      b[l-1][c-1] = 1;
		   
		 i=1;
		 
		 cout << "\n Lista de poltronas da SEGUNDA sala [Filme de AÇÃO]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
             
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << b[l][c] << "  ";
          }
          cout << "\n ";
         }
		
	     cout << "\n Deseja fazer mais reservas ? \n ";
	     cout << "\n Digite [1] para SIM. \n Digite [2] para NÃO. \n";
	     cin  >> w;
	     cout << "\n";
	     
	     if ( w < 1 or w >= 3 )
	     cout << "\n Opção inválida. \n";
       }
       
	 while( w == 1 ); 
	 
	 }
	    
	 if( sala == 3 )
	 {
	    do
	   {
	   	 
		 cout << "\n SALA 3 [Filme de ROMANCE]. \n";
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Digite a fileira desejada: ";
		 cin  >> l;
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Digite a poltrona desejada: ";
		 cin  >> c;
		 cout << "\n";
		 
		 cout << "\n";
		 cout << "\n Para definir a reserva das poltronas.\n";
		 cout << "\n Digite [0] para LIVRE \n Digite [1] para OCUPADO \n";
         cin  >> ocp;
         cout << "\n";
         
         cout << "\n";
         cout << "\n Informe a forma de pagamento \n";
         cout << "\n Digite [1] para meia entrada [10$]. \n";
         cout << "\n Digite [2] para entrada inteira [20$]. \n";
         cin  >> pag;
         cout << "\n";
         
          if( pag == 1 )
		  {
		  	 meia3 = pag2 * 10;
		  }
		  
		  if( pag == 2 )
		  {
		  	 in3 = pag1 * 20;
		  }
		  
		  if ( pag >= 3 or pag < 1 )
		  {
		     cout << "\n Opção de pagamento inválida. \n";
	      }
	      
		  quant3 = meia3 + in3;
         
          if( ocp > 1 )
		 {
	         cout << "\n Opção inválida. \n";
	         cout << "\n Digite novamente. \n";
		 }
    
         if ( ocp == 0 )
         {
        	 c2[l-1][c-1] = 0;	
		 }
		
		 else 
		 if ( ocp == 1 )
		     c2[l-1][c-1] = 1;
		  
		 i=1;
		 
		 cout << "\n Lista de poltronas da TERCEIRA sala [Filme de ROMANCE]: \n";
         cout << "\n ";
         cout << "           1° 2° 3° 4° 5° 6° 7° 8° 9° 10° \n";
         cout << "\n ";
        
         for ( l=0 ; l<=4 ; l++ )
         {
             cout << l+1 <<"° Fileira ";
             
          for ( c=0 ; c<=9 ; c++ )
          {	
             cout << c2[l][c] << "  ";
          }
          cout << "\n ";
         }
		 
	     cout << "\n Deseja fazer mais reservas ? \n ";
	     cout << "\n Digite [1] para SIM. \n Digite [2] para NÃO. \n";
	     cin  >> w;
	     cout << "\n";
	     
	     if ( w < 1 or w >= 3 )
	     cout << "\n Opção inválida. \n";
       }
       
	 while( w == 1 ); 
	 
     }
    break; 
     
	case 3:
	 	
	cout << "\n Digite a sala desejada para exibição do faturamento \n";
	cout << "\n Digite [1] para SALA 1 [Filme de TERROR]. \n";
	cout << "\n Digite [2] para SALA 2 [Filme de AÇÃO]. \n";
	cout << "\n Digite [3] para SALA 3 [Filme de ROMANCE]. \n";
	cout << "\n Digite [4] para exibir o faturamento de todas as 3 salas. \n";
	cin  >> gg;
	i=1;
	 
	if( gg == 1)
	        
	{	
	 cout << "\n O faturamento total de meias entradas na SALA 1 é de: " << meia << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total de entradas inteiras na SALA 1 é de: " << in << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total da SALA 1 é de: "<< quant1 << " R$.";
	 cout << "\n";
	}
	
	 if( gg == 2 ) 
	        
	{	
	 cout << "\n O faturamento total de meias entradas na SALA 2 é de: " << meia2 << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total de entradas inteiras na SALA 2 é de: " << in2 << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total da SALA 2 é de: " << quant2 << " R$.";
	 cout << "\n";
	} 
	        
	if( gg == 3 )

	{
	 cout << "\n O faturamento total de meias entradas na SALA 3 é de: " << meia3 << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total de entradas inteiras na SALA 3 é de: " << in3 << " R$.";
	 cout << "\n";
	 cout << "\n O faturamento total da SALA 3 é de: " << quant3 << " R$.";
	 cout << "\n";
	}
	        
	if( gg == 4 )
	        
	{	
	 quanttotal = quant3 + quant2 + quant1;
	 cout << "\n O faturamento total das 3 salas foi de: " << quanttotal << " R$.";
	 cout << "\n";
	}
	        
    break;
	   
    case 4:
    	
     cout << "\n Fechando programa... ";
     
    break;
   }
}
	
while(i == 1);

return 0;

}
