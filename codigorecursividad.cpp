#include <iostream>
#include <stdlib.h>

using namespace std;


int operacion( int &c, int&d  ) ;
    
    
 #define x 35
    




int main ( ) {
   
   
    int a = 20;
    int b = 10;
  
    cout << operacion( a, b ) <<endl;
    
    cout<< "valor a : "<< a <<endl;
    
    
            return 0;
}



int operacion (int &c , int &d ) {
    
    c=30;
    
    return c + d ;
}