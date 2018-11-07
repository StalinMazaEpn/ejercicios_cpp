#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define lim 50

int main () {
    
    char palabra[lim];
    char n ;
    bool cierto ;
    int tamanio;
    cout <<"Bienvenidos al Programa Stalin" <<endl;
    cout <<"Este programa determinara si la palabra ingresada es palindroma o no" <<endl;
    cout <<"Ingrese una palabra de maximo 50 caracteres" <<endl;
    cin >> palabra;
    
    
    tamanio = strlen(palabra);
    cout << "la cantida de caracteres es :  "<< tamanio << endl;
    
   
    for (int i = 0; i < tamanio-1 ; i++ ) {
        
      tamanio--;
      
      cout <<" valor de i" << i << "valor de tamanio "<<  tamanio <<endl;
        
        if (palabra [i] == palabra [tamanio] ) {
            
            cierto = true;
        } else { cierto = false; }
        
    }
    

   if ( cierto == true) {  cout << " La Palabra " << palabra << "  es Polindroma " <<endl;}
   else {  cout << " La Palabra " << palabra << "  No es Polindroma" <<endl;}
   
   
    return 0;
}

