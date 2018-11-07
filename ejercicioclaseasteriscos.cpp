#include <iostream>
using namespace std ;

int main ( ) {
    
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int h = 0;
    int b = 0;
    int valor = 0; 
    int num1 = 0;
    
    char dibujo = '*' ; 
    
    cout <<"Bienvenidos al Programa Stalin" <<endl;
    cout <<" Ingrese la Opcion que desea realizar" <<endl;
    cout <<" \t 1.-    Cuadrado " <<endl;
    cout <<"\t 2.-    Rectangulo " <<endl;
    cin >> valor;
    
    
    switch ( valor ) { 
             
             case 1: 
             
             cout <<" Ingrese un Numero " <<endl;
             cin >> num1 ;
             
             /*for ( i= 0 ; i <= num1 ; i++ ) { 
                                                    
             for ( j = 0 ; j < num1 ; j++ ) { cout << dibujo ; } 
                                              cout <<endl;
                 
                aqui me imprime un cuadrado ****
                                            ****             */
                                            
                                            
                                            
                                            
                 for ( i = 1 ; i <= num1 ; i++ ) {
                     for ( j = 1 ; j <= num1 ; j++ ) { 
                         if ( i == 1 || j == 1 || i == num1 || j == num1) 
                     { cout << dibujo ; } else { cout << " " ; }
                 }                                    cout <<endl;                        
                                            
                                            
                 
             }
        
             break ;
             
             case 2 :
             
             cout <<" Ingrese Base " <<endl;
             cin >> b;
             cout <<" Ingrese Altura " <<endl;
            cin >> h;
            
            
            for ( i =0 ; i < h; i++ ) { 
                for ( j = 0 ;  j < b ; j++ ){ 
                    if ( i == 0 || i == h - 1 ){ cout << dibujo ; }
                    else if ( (i > 0 && i < h - 1) && j == 0 || ( i > 0 && i < h- 1) && j == b - 1 )
                    { cout <<dibujo; }
                    else { cout << " " ; }
                           
            }        
            cout <<endl;
            }
            
             break ;
             
             default : 
             cout <<" Numero No Corresponde a Opciones del Sistema " <<endl;
             return 0;
             
             }
    
    
    
    
    return 0;

}