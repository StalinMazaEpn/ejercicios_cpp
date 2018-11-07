#include <iostream>
using namespace std;

int main () {
          
           
        tenemos la definicion de una decision
            // o un bifurcacion
            //tenemos el paso de la estructura del diagrama de flujo
            // y ejemplo
            
            // primer ejercicio sobre positivo o negativo
           // std::cout << " Bienvenidos al Programa Stalin " << std::endl;
            
             int num1 = 0;
             std::cout <<"Escriba el numero a verificar: "  << std::endl;
             std::cin >> num1;
            
            
           if (num1 >= 0 ) { std::cout << " El Numero es positivo "  << std::endl; } 
           else { cout << " El Numero es Negativo " <<endl;
                
             } 
    
           
     
    
    return 0 ;
}
    
    
    
    
    
    
    
    
    
    // escribir un programa que me permita saber la edad de una persona y decirme si es o no mayor de edad
    
  
  
  
  
  
    int edad = 0;
    char pais = 'E';
    int min = 1;
    int max = 100;
    
    cout << " Ingrese su edad para verificar " <<endl;
    cin >> edad;
    
    
     if ( edad> min && edad < max ) { 
        
     cout<< " Escriba la letra E si es de Ecuador o O si es del Extranjero " <<endl; 
     cout << " Ingrese su Pais " <<endl; 
     cin >> pais ; }
     
     
        if  (pais == 'E' || 'e' ) { if ( edad >= 18) {
                 cout << " usted es mayor de edad " <<endl;
                 } 
                 else { cout << " Usted es menor de edad " <<endl;
         }
     } else {  cout << " La edad ingresada esta fuera de rango " <<endl; } 
         
        
         return 0;
    
}
