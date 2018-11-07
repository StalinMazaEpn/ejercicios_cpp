#include <iostream>
#include <stdlib.h>

using namespace std;

long int fibonacci( int);


int main ( ) {
    
    int num = 0;
    int fibo = 0;
    
    
  
    
    
    cout <<"Ingrese un numero" <<endl;
    cin >> num;
    
    
    
    
    if ( num < 0 ) {
        
        cout << " No existe finobacci de numeros negativos " <<endl;
    } else {
        
        
    
    cout <<" El Finobacci de " << num << " es : "  << fibonacci( num ) << endl;
    
    }
    
    
   
   
   
    return 0;
}



long int fibonacci ( int num ) {
    
   
    
     if ( num == 0  || num == 1 ) {
        
              return num;
        
    } else {
        
              return fibonacci(num-1) + fibonacci(num-2);
    }
    
    
    
    
}