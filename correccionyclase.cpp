#include <iostream>

using namespace std;

int main (){
    
    char dibujo = '*' ;
    int n = 0;
    
    cout <<" INGRESE UN NUMERO PARA VER SU DIBUJO CON ASTERISCOS  " <<endl;
    cin >> n;
    
   /* for ( int i = 0 ; i < n ; i++) { cout << dibujo <<endl; } */
   
   
   // for ( int i = 0; i < n ; i++) {
                                   // primer intento fallido..sale linea recta de 25 puntos          for ( int j = 0; j <n ; j++ ) { cout << dibujo; }
                                   
                                   // segundo intento fallido sale cuadrado de 5 * 5 puntos          for ( int j = 0; j < n ; j++) { cout <<dibujo;}    cout <<endl;
                                    
                                    
                                    /* ejercicio realizado exitosamente
                                         for ( int i = 0; i < n ; i++) {
                                                                         for ( int j = 0; j <= i ; j++ ) { cout <<dibujo ;} cout <<endl;  } */
   
       
       
        for ( int i = 1 ; i <= n ; i++) {
            
    
       
               for ( int j = 1 ; j <= ( i*2)-1 ; j++ ) { 
                                                 cout <<dibujo ;
                   
               } cout <<endl; 
       
   } 
    
    return 0;
}