#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
      
    int valor  = 0;
    int num1 = 0;
    int num2 = 0;
    int opcion = 0;
    char a = 0;
    
    
   
  
  char letra = 65 ;
  int letra2 = 65 ;
  
  int ascii = 'a'  ;
  
  cout << letra <<endl;
  cout << letra2 <<endl;
 
  
     
   do {     
       
       system("clear") ;
       
    cout << " Bienvenidos al Menu Stalin" <<endl;
    cout << "\t1 Suma de 2 Numeros" <<endl;
    cout << "\t2 Resta de 2 Numeros" <<endl;
    cout << "\t3 Producto de 2 Numeros " <<endl;
    cout << "\t4 Abecedario " <<endl;
    cout << "\t5 Salir " <<endl;
    cout << " Ingrese el Numero de la opcion que desea ejecutar" <<endl;
    
     cin >> valor;
    
   
       
    switch ( valor ) {
        case 1:
       
        
        cout <<" Ingrese el Valor 1" <<endl;
        cin >> num1;
        cout << " Ingrese el Valor 2" <<endl;
        cin >> num2;
        cout << " El Resultado de la suma es " <<num1 + num2 << endl;
        
        
        
        break;
        
        case 2:
       
        cout << " Ingrese el Valor 1" << endl;
        cin >> num1;
        cout << " Ingrese el Valor 2" <<endl;
        cin >> num2;
        cout << "El Resultado de la Resta es " <<num1 - num2 <<endl;
        
       
      
        
        break ;
        
        
        case 3:
        
        cout <<"Ingrese el Valor 1" <<endl;
        cin >> num1;
        cout <<"Ingrese Valor 2 " <<endl;
        cin >> num2;
        cout <<" El Resultado del Producto es " << num1 * num2 <<endl;
        
     
      break ;
      
      case 4:
      
      cout <<"Ingrese una Letra " <<endl;
      cin>> a;
      
      if ( a == 'a' || a =='A' || a == 'e' || a == 'E'|| a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U' ) {
       
       cout <<" Letra es una Vocal " << " Y Su Valor es "  << a <<endl; 
         
        
      }
      else { cout <<" Letra es Consonante " << " Y su Valor es : " << a <<endl; }
      
      
      
      break;
      
      
      default: 
      
      cout << " Numero No Corresponde a Opciones del Sistema " <<endl;
      
      return 0;
      
    }
    
      cout <<  " Ingrese 1 para regresar al menu o 0  para salir " <<endl;
      cin >> opcion;
      
    } 
    
    while ( opcion == 1 );
    
   cout <<" Gracias por Usar el Programa, hasta la proxima" <<endl;
   
  return 0;
     
    } 
    
    
    
   
   
   
    
    