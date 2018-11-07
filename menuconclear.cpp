#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    
    
    
    
    char menu = 's' ;
    int opcion = 0;
    
    
    
    do {
        
        system("clear") ;
        cout <<" Bienvenido al Menu Principal" <<endl;
        cout <<"\t1.-Opcion 1" <<endl;
        cout <<"\t2.-Opcion 2 " <<endl;
        cout <<"\t3,.Opcion 3 " <<endl;
        cout <<"\t4.-Salir " <<endl;
        
    cout <<" Ingrese el numero de la opcion que desear realizar\n " <<endl;
    cin >> opcion ;
    
   
    switch ( opcion ) {
                         case 1:
                         
                         system("clear") ;
                         cout <<"Opcion 1" <<endl;
                         
                         break;
                         
                         case 2:
                         
                         system ("clear") ;
                         cout <<"Opcion 2" <<endl;
                         
                         break;
                         
                         case 3:
                         
                         system("clear") ;
                         cout <<"Opcion 3 " <<endl;
                         
                         break;
                         
                         case 4 :
                        
                         menu = 'n';
                         
                         break ;
                         
                         default:
                         
                         cout <<"Opcion No corresponde al Sistema" <<endl;
                         
                         break;
                         
    }
        
        
   
    
     if ( menu == 's' || menu =='S') {
    cout <<"\nDesea Continuar ??? " <<endl;
    cout <<"Ingrese S para continuar o N para salir " <<endl;
    cin >> menu;
    
    }
    
     system("clear") ;
     
     
   
   
    } 
    
    
    
    while (menu == 's' || menu == 'S') ;
   
    
    
    
    
    return 0 ; 
    
}