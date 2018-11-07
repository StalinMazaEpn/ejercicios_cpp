#include <iostream>
#include <stdlib.h>
using namespace std;


/*int suma () {
    
    
    int suma = 34;
    return suma;
} */




// void fun1 () ;   es el prototipo de una funcion que se declara cuando la funciones estan dentro del main


double potencianum( double base , double exponente );
double suma( double num1 , double num2) ;
double division(double num1 , double num2 ) ;
void menu() ;
void operaciones( int  );



int main () {
    int menuop = 0;
    do {
        
        int opcion = 0;
        
       menu ( ) ; 
       cout <<"Selecione la Opcion Deseada" <<endl;
       cin >> opcion ;
       
       //suma () ;
       //cout << suma <<endl;
       operaciones ( opcion ) ;
       
  
       
       cout <<" Desea Continuar??" <<endl;
       cout <<" Presione 0" <<endl;
       cin >> menuop;
       
       
    } while ( menuop== 0) ;
    
    
    
    
    
    
    
    
    
    return 0;
}



double potencianum ( double base  , double exponente  ) {
    
             double potencia = 1;
            
             
             for ( int i = 0; i < exponente ; i++ ) {
                 
                 potencia = potencia * base;
                 
             } 
    
                  return potencia;
}

double sumanum ( double num1 , double num2 ) {
    
    double suma = 0;
    
    suma = num1 + num2 ;
    
    return suma ;
    
}

double divisionnum ( double num1 , double num2 ) {
    
    double division = 0;
  
    division = num1 / num2 ;
    
   return division;
    
}
void menu () {
    
    
    system("clear");
    
    cout <<"\t\t\tBienvenidos a C++" <<endl;
    cout <<"1.- Potencia De un Numero" <<endl;
    cout <<"2.- Suma" <<endl;
    cout <<"3.- Division" <<endl;
    cout <<"4.- Salir" <<endl;
    return;
    
}

void operaciones (int opcion  ) {
    

    int base = 0;
    int exponente = 0;
    int num1 = 0;
    int num2 = 0;
    

  
     switch ( opcion ) {
         
         
         case 1:
         
          cout <<"Ingrese la Base" <<endl;
          cin >> base;
          cout <<"Ingrese el Exponente" <<endl;
          cin >> exponente;
          
          if ( base > 0) {
              
              cout <<" La Potencia es :  " <<  potencianum(base,exponente) <<endl;
          } else { cout <<" No Existe una potencia de base 0 " <<endl; }
          
          
          
         break;
         
         case 2:
         
         cout <<" Ingrese el Primer Numero" <<endl;
         cin >> num1;
         cout <<" Ingrese el segundo numero" <<endl;
         cin >> num2;
         cout <<" La Suma de estos dos numeros es:  " << sumanum (num1,num2) <<endl;
          
         break;
         
         case 3:
         
         cout <<" Ingrese el Primer Numero" <<endl;
         cin >> num1;
         cout <<" Ingrese el Segundo Numero" <<endl;
         cin >> num2;
        
        if ( num2 > 0 ) {
         cout <<" La Division de estos dos numeros es :  " << divisionnum(num1,num2) <<endl;
        } else 
              {
               cout <<" No Existe Division para 0" <<endl;   
              }
        
         
         break ;
         
         case 4:
         
         exit(0);
         
         break;
         
         default : 
         cout <<"Opcion No Adimitida" <<endl;
         
         break;
         
     }
    
}
