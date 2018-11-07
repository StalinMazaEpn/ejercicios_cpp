#include <iostream>

using namespace std;

int main() { 
    
    
    
   /* int ascci = 65 ;
    char ascci2 = 65 ;
    int px = 'A' ;
    
    cout << ascci <<endl;
    cout <<ascci2 <<endl;
    
    cout << px <<endl; */
    
    
    
    int valor = 0;
    int num1 = 0;
    int num2 = 0;
    char letra = 0 ;
    
   int ascii = 0;
    
    cout << " Bienvenidos al Sistema Multiuso" <<endl;
    cout << "\t1 Suma de 2 Numeros" <<endl;
    cout << "\t2 Resta de 2 Numeros" <<endl;
    cout << "\t3 Abecedario " <<endl;
    cout << " Ingrese el Numero de la opcion que desea ejecutar" <<endl;
    
    cin >> valor;
    
    switch ( valor ) {
        case 1:
        // suma de 2 valores
        
        cout <<" Ingrese el Valor 1" <<endl;
        cin >> num1;
        cout << " Ingrese el Valor 2" <<endl;
        cin >> num2;
        cout << " El Resultdo de la suma es " <<num1 + num2 << endl;
        
        

        break;
        
        case 2:
        //resta de 2 valores
        
        cout << " Ingrese el Valor 1" << endl;
        cin >> num1;
        cout << " Ingrese el Valor 2" <<endl;
        cin >> num2;
        cout << "El Resultado de la Resta es " <<num1 - num2 <<endl;
        
        break;
        
        case 3:
        //abecedario
        
        cout <<"Ingrese una letra" <<endl;
        cin >> letra;
        
        if ( letra == 'A' || letra == 'a' || letra == 'e' || letra == 'E'  || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' )       
        { ascii = letra ;
        cout <<"Letra es Vocal y su valor es : " << ascii <<endl;
                 
          
        } else { ascii = letra;
                 cout <<"Letra es Consonante y su valor es:" << ascii <<endl;
                  
                 
                 
        }
        
        break ;
        
        default :
        // si escribe un valor admitido
        cout << " El Valor que Ingreso no corresponde a las opciones que ofrece el programa" <<endl;
        break; 
    
        
 }
    
    return 0;    
    } 
    
    
   
   
   
   
   
   /* int valor = 0;
    int letra = 0;
    
    cout <<" Bienvenidos Al Programa Stalin " <<endl;
    cout <<"Ingrese la opcion que desea realizar" <<endl;
    cin>> valor;*/
    
    
   