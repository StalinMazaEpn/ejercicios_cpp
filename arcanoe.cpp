#include <iostream>
#include <stdlib.h>

using namespace std ;

int main () {
   
   
   
   
   double pesoArca = 1000;
   double tolerancia = 5/100;
   double rango = 0;
   double pesototal = 0;
   double peso = 0;
   int numero = 0;
   int op = 0 ;
   
   
   rango = pesoArca + ( pesoArca * tolerancia) ;
   cout <<" rango " << rango << endl;
  
  do{
      cout <<"Peso" <<endl;
      cin >> peso ;
      
      
      if ( peso < pesoArca ) { 
          
          pesototal = pesototal + peso ;
          cout << "pesototal" <<pesototal <<endl;
          
          if( pesototal >  pesoArca ) {
              
              pesototal = pesototal - peso ;
              cout << "pesototal " <<pesototal <<endl;
              
              
          } else { numero++; 
              
              cout << " numero " <<numero <<endl;
          }
      }
     
     
     if ( pesototal >= pesoArca && pesototal <= rango ) {
         
         op = 0;
         cout << " numero " <<numero <<endl;
         
         cout << "peso total " << pesototal <<endl;
     } 
     
     
     cout <<" desea continuar " <<endl;
     cin >> op ; 
     
  } while ( op == 0 ) ;
   
  
   
   
   /*int peso = 0;
   int repeat = 0;
   int i = 1;
   float tolerancia = 0;
   float maximo = 0;
   float pesoW = 0;
   float suma = 0;
   int tope = 0;
   int otro = 1000;
   tolerancia = 1000 * 0.05 ;
   float mitad = 0; 
   float mitad2 = 0;
   */
   
   
   
   
    /* maximo = 1000 + tolerancia ;
   cout <<" maximo " << maximo <<endl;      
    
   mitad = 500;
   mitad2 = mitad + 25 ;
   cout <<"Bienvenidos Al Arca de Noe " <<endl;
  
  
  do { 
      
   cout <<"Proceda a Ingresar cualquier animal " <<endl;
   cout <<"Por favor Ingrese el Peso de un Animal " <<endl;
   cin>> peso;
         
         
         
 
   
         if ( peso > 0 || peso <= tope  && suma != maximo || suma > maximo ) {
        
         system("clear") ;
        
               pesoW = peso + pesoW ;
               cout << pesoW <<endl;
               suma = pesoW ;
               cout << "suma" << suma <<endl;
               cout << suma <<endl;
               i++;
               cout << i <<endl;
               tope = pesoW * 0.5;
               cout <<"tope  " << tope <<endl;
               
               if ( suma >= mitad && suma <= mitad2 ) { cout <<" El Arca esta en su media capacidad" <<endl; }
              // if ( suma >= otro && peso )
               if ( suma >= maximo) { cout <<" El Peso Ingresado supera a la capacidad actual de la barca" <<endl; }
              
               
        } else {
        
        cout <<" Error en el Valor Ingresado" <<endl; }
        
        } while ( suma != maximo && suma < maximo ) ;
    
          cout <<" Usted Ingreso " << i <<" animales" <<endl;
          cout <<" El Peso Total del Arca es " << suma <<" kilos" <<endl;
         
    */
    
    
    
    
    return 0;
}