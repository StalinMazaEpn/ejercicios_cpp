#include <iostream>
#include <stdlib.h>

using namespace std;


//int fun1( int,int );

double potencia( double ,double );


int main () {   
   
    //int n = 0;
    //int s = 0;
    
    
    double base = 0;
    double exponente = 0;
   
   // int potencia = 0;
    
    //cout <<"Ingrese un Valor" <<endl;
    //cin >> n ;
    
    
    cout << "Ingrese la Base" <<endl;
    cin >> base;
    cout <<" Ingrese el Exponente" <<endl;
    cin>> exponente;
    cout << potencia(base,exponente) <<endl;
    
   // fun1(n,s);
   
  
    
            return 0;
}



/*int fun1( int n , int s ) {
    
      
      if ( s == n ) {
       
       return 0;
       
    } else {
       
       cout <<" el valor de s es :  " << s <<endl;
       fun1( n , ++s ) ;
             }
    }

*/


double potencia( double base, double exponente ) {

if ( exponente == 0 ) {
    
    return 1 ;
    
} else {
   
    
   return base * (potencia(base,exponente-1)) ;
   
}


}