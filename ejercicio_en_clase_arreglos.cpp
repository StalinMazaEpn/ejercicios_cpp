#include <iostream>

using namespace std;


int suma_array( int arreglo[], int tamanio) ;
int sumapar_array( int arreglo[], int tamanio);

int main () {
    
    int numeros[5];
    
    // char frase [40];
    // cin << frase <<endl;
    //cout >>frase <<endl;
    
    
    int n = sizeof(numeros)/sizeof(int);
    int valor = 0;
    
    
    for (int i = 0; i < n ; i++) {
        
        cout <<"Ingrese el valor en la posicion " << i << endl;
        cin>> numeros[i];
        
   
    }
    
    cout <<"La Suma de los Numeros Ingresados es: " << suma_array(numeros, n) <<endl;
    
    cout <<"La Suma de los Numeros Pares es : " << sumapar_array(numeros, n) <<endl;
    
    return 0;
}

int suma_array(int arreglo[], int tamanio) {
    
    int suma = 0;
    
    for ( int i = 0 ; i < tamanio ; i++) {
        
        suma = suma + arreglo[i];
        
    }
    
    return suma;
}

int sumapar_array( int arreglo[], int tamanio) {
    
    int suma1 = 0;
    
    for ( int i = 0; i < tamanio ; i++) {
        
        if (arreglo[i]%2==0) {
            
            suma1 = suma1 +  arreglo[i];
            
        }
        
    }
    
    return suma1;
}