#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


 
int tiraDados( void ); 

int main()
{ 
   int suma, miPunto ;
 
   
    int Juego;
   srand( time( NULL ) );
    
   suma = tiraDados(); 

   switch( suma ) {
 
      case 7: 
      case 11:          
         Juego = 1;
         break;
 
      case 2: 
      case 3: 
      case 12:  
         Juego = 0;
         break;
 
      
      default:                  
         Juego = 2;
         miPunto = suma;
         printf( "\n los puntos del jugador son %d \n", miPunto );
         break; 
   } 
 
   
   while ( Juego == 2 ) {    
      suma = tiraDados(); 
 
      
      if ( suma == miPunto ) { 
         Juego = 1; 
      } 
      else {
 
         if ( suma == 7 ) { 
            Juego = 0;
         } 
       
      }
 
   } 
 
   
   if ( Juego == 1 ) { 
      printf( "\n  GANA" );
   } 
   else { 
      printf( "\n PIERDE" );
   } 
 
   return 0; 
 
} 
 

 
int tiraDados( void )
{
   int dado1;    
   int dado2;   
   int sumaTemp; 
 
   dado1 = 1 + ( rand() % 6 ); 
   dado2 = 1 + ( rand() % 6 ); 
   sumaTemp = dado1 + dado2;  
 
 
   printf( "\n El jugador tiro %d + %d = %d", dado1, dado2, sumaTemp );
   
   return sumaTemp; 
 
}