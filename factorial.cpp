#include <iostream>
#include <stdlib.h>

using namespace std;

long int factorial( int );
// utilizo long para almancenar valores grandes de numeros que solo el int no podria almacenar


int main () {
    
 
       int num = 0;
       int fact = 0;
   
    
    
    cout <<"Ingrese un Numero" <<endl;
    cin >> num;
    
    if (num < 0 ) {
        
        cout <<" No Existe factorial de numeros negativos " <<endl;
        
        } else {
      
     cout << " El Factorial de " << num << " es : " << factorial(num) <<endl;
    
                   }                            // realiza la llamada a la funcion para imprimirla
    
    return 0;
    
}




long int factorial( int num ) {
    
    if ( num == 0 || num == 1 ) { 
        
        
        return 1; // si el numero es igual a cero o uno, me imprime el valor de 1 porque 
                  // el factorial de 0 y 1 es igual a 1
        
    } else {
        
        return num * factorial( num-1);
        // sino el fibonacci es igual al numero * el numero menos 1 y se repite 
        // el numero - 1 veces
    }
     
    
}