#include <iostream>
using namespace std;


int binario(int x );

int main() {
    
    int n = 0;
    int bin = 0;
    
   //  cout << n%2 <<endl;
    cout <<"Bienvenido al Programa de Conversion Decimal a Binario" << endl;
    
    
        cout << "Ingrese un Numero" <<endl;
        cin >> n;
        
        if ( n < 0 ) { cout <<"Ingrese un Numero Entero y Positivo" <<endl;}
        
      
      bin = binario(n) ;
      
       cout <<"El Binario de : " << n << " es " << bin <<endl; 
       
  
    
     
    
    
    return 0;
}

int binario(int x) {
    
    if( x < 2 ) { return 1;
        
    } else {
        
        return x%2 + (10*binario(x/2));
    }
   
} 