#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define lim 50

bool palindromo(char palabra[]);
int main () {
    
    char palabra[lim];
    
    cout <<"Bienvenidos al Programa Stalin" <<endl;
    cout <<"Este programa determinara si la palabra ingresada es palindroma o no" <<endl;
    cout <<"Ingrese una palabra de maximo 50 caracteres" <<endl;
    cin >> palabra;
    
    
  if ( palindromo(palabra) == true) {  cout << "La Palabra " << palabra << " es Polindroma " <<endl;}
   else {  cout << "La Palabra " << palabra << " No es Polindroma" <<endl;}
   
    return 0;
}


bool palindromo(char palabra[]){
   
      int tamanio;
      bool valor ;
      tamanio = strlen(palabra);
     // cout << "la cantida de caracteres es :  "<< tamanio << endl;
     
      for (int i = 0; i < tamanio-2 ; i++ ) {
        
            tamanio--;
      
           //cout <<" valor de i" << i << "valor de tamanio "<<  tamanio <<endl; para ver que comparaciones esta haciendo
        
        if (palabra [i] == palabra [tamanio] ) {
            
            valor = true;
            return true;
                                                } 
           
         else { 
                  valor = false;
                  return false;
                  
               }
        
     }

}