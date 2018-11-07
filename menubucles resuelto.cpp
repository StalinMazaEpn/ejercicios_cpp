#include <iostream>

using namespace std;

int main () {
      
    int valor  = 0;
    int num1 = 0;
    int num2 = 0;
    int opcion = 0;
    
  
     
   do {     
       
    cout << " Bienvenidos al Menu Stalin" <<endl;
    cout << "\t1 Suma de 2 Numeros" <<endl;
    cout << "\t2 Resta de 2 Numeros" <<endl;
    cout << "\t3 Producto de 2 Numeros " <<endl;
    cout << "\t4 Salir " <<endl;
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
      
      
      
    }
    
      cout <<  " Ingrese 1 para regresar al menu o 0  para salir " <<endl;
      cin >> opcion;
      
    } 
    
    while ( opcion == 1 );
    
   cout <<" Gracias por Usar el Programa, hasta la proxima" <<endl;
   
  return 0;
     
    } 
    
    
    
   
   
   
    
    