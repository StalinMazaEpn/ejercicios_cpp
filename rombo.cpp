#include <iostream>

using namespace std;


int main () {
 
  char dibujo = '*' ;

   int n = 0;

   
cout <<" Bienvenido al Programa Stalin" <<endl;
 
   cout <<" Ingrese Uh Numero " <<endl; 
    cin >>n;

   for( int i = 1 ; i <= n ; i++ ) {
 
  	for ( int j = 1 ; j<= n - i ; j++) {
		cout <<" " ; } 
  
   for  (int k = 1 ; k <= (2*i) -1; k++ ) { cout <<dibujo ; 
                                             
        }                                                   cout <<endl;
    
    
    }
    
        
    for ( int i = n - 1 ; i >= 0 ; i-- )  { 
         for ( int j = 1 ; j <= n - i ; j++ ) { cout << " " ; }
         for (int k = 1 ; k <= (2*i) - 1 ; k++ ) { cout << dibujo; 
                                               
         }
                                            cout <<endl;
    }                                 
       
    return 0; 
}