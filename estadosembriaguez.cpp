#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {   
    
    int numvaso = 0;
    float peso = 0;
    float sangre = 0;
    float hospital = 0;
    float insconciente = 0;
    float mitad = 0;
    float feliz = 0;
    float vaso = 0.0006; //valor inicial de un vaso de Whisky
    float vasoW = 0;
    float maximo = 0;
    
    // 1 
    cout <<"Ingrese su Peso" <<endl;
    cin>>peso;
    
  if ( peso > 0) {
    sangre = peso / 13 ;
    //cout << "sangre " << sangre <<endl;
    
    maximo =  ( sangre * 0.008 ) ;
    //cout <<"maximo  " << maximo <<endl;
    
    hospital = maximo ;
    //cout <<" hospital  " << hospital <<endl;
    
   
    mitad = maximo / 2 ;
    //cout <<"mitad  " << mitad <<endl;
    
     insconciente = ( maximo - ( mitad / 2 ) ) ;
    //cout <<"insconciente  " << insconciente <<endl;
    
    feliz = ( mitad - ( mitad /2 )) ;
    //cout <<"feliz  " << feliz <<endl; 
    
    cout <<" Ingrese el Numero de Vasos De Whisky que bebio usted " <<endl;
    cin>>numvaso;
    
    vasoW = vaso * numvaso ;
    
    
    if ( numvaso > 0 ) {
    //cout <<" Usted Bebio " << vasoW <<" Litros de Whisky" <<endl;
    //cout <<" Y " <<endl;
 
     if ( vasoW <= feliz ) { cout <<"Usted esta feliz " <<endl;  } 
     else if ( vasoW > feliz && vasoW <= mitad ) { cout << " Usted esta en estado de embriaguez " <<endl; }
     else if ( vasoW > mitad && vasoW < hospital ) { cout <<" Usted esta insconciente " <<endl; }
     else if ( vasoW >= hospital ) { cout <<" Usted esta intoxicado debemos llevarlo al hospital" <<endl; }
    
    } else { cout <<" Valor Ingresado No Valido" <<endl; }
    
    
  } else { cout <<" Valor Ingresado No Valido" <<endl; }
  
  
    return 0;
    
    
    
}