#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

int main () { 
    
    
    char salida = 's';
    int opcion = 0;
    double lado = 0;
    double pi = 3.14;
    double perimetro = 0;
    double area = 0;
    double  base = 0;
    double altura = 0;
    double radio = 0;
    double radioM= 0;
    double radiom=0;
    double raiz1 = 0;
    double raiz2 = 0;
    
    
    
    do { 
        
        
        
    cout <<" Bienvenidos al Programa Stalin Maza " <<endl;
    cout <<"Calculo de Area y Perimetros de Figuras Geometricas" <<endl;
    cout <<"\t1.-Cuadrado" <<endl;
    cout <<"\t2.-Rectangulo" <<endl;
    cout <<"\t3.-Circulo" <<endl;
    cout <<"\t4.-Triangulo" <<endl;
    cout <<"\t5.-Elipse" <<endl;
    cout <<"\t6.-Salir" <<endl;
    
    cout <<"Ingrese la opcion que desea realizar " <<endl;
    cin >> opcion;
    
     system("clear") ;
   
    switch(opcion) { 
               
               
               
                case 1:
               
             
               
                cout <<"Ingrese el Lado del Cuadrado" <<endl;
                cin >>lado;
                
                if( lado > 0 ) {
                perimetro = (lado * 4) ;
                cout <<" El Perimetro del Cuadrado es :" << perimetro <<endl;
                area = ( lado * lado ) ;
                cout <<" El Area del Cuadrado es :" << area <<endl;
                
                cout <<" Si desea regresar al menu presione S y si desea salir N " <<endl;
                cin >>salida;
                } 
                else { cout <<" Valores no Validos" <<endl; 
                  return 0;  
                }
                
                
                
                break;
                
                case 2:
                
               
                cout <<"Ingrese la base del rectangulo" << endl;
                cin >>base;
                cout <<"Ingrese la altura del rectangulo" << endl;
                cin >>altura;
                
                if ( base > 0 && altura > 0) {
                
                perimetro = ( ( 2 * base ) + ( 2 * altura) ) ;
                cout <<"El Perimetro del Rectangulo es :" << perimetro <<endl;
                area = ( base * altura ) ;
                cout <<"El Area del Rectangulo es : " << area <<endl;
                
                cout <<" Si desea regresar al menu presione S y si desea salir N " <<endl;
                cin >>salida;
                
                    
                } else { cout <<" Valores no Validos" <<endl;
                  return 0;  
                }
                
                
                
                break;
                
                case 3:
                
                cout <<" Ingrese el radio del circulo " <<endl;
                cin>>radio;
                
                if ( radio > 0 ) { 
                perimetro = ( 2 * pi * radio ) ;
                cout <<" El Perimetro del Circulo es :" << perimetro <<endl;
                area = (pi * ( radio * radio )) ;
                cout <<" El Area del Circulo es : " << area <<endl;
                
                cout <<" Si desea regresar al menu presione S y si desea salir N " <<endl;
                cin >>salida; 
                    
                } else {
                    cout <<"Valor No Valido" <<endl;
                    return 0; 
                    
                }
                
                
                
                
                
                break;
                
                case 4:
                
                cout <<"Ingrese el lado del Triangulo" <<endl;
                cin >>lado;
                cout <<"Ingrese la Base del Triangulo" <<endl;
                cin>>base;
                cout <<"Ingrese la altura del Triangulo" <<endl;
                cin>>altura;
                
                if ( lado > 0 && base > 0 && altura > 0 ) { 
                perimetro = ( lado + lado + lado ) ;
                cout <<"El Perimetro del Triangulo es " << perimetro <<endl;
                area = ( ( base * altura ) /2 );
                cout <<"El Area del Triangulo es :" << area <<endl;
                
                cout <<" Si desea regresar al menu presione S y si desea salir N " <<endl;
                cin >>salida; 
                    
                } else { cout <<" Valores No Validos" <<endl;
                         return 0;
                 }
                
                break;
                
                case 5:
                
                cout <<"Ingrese el Radio Menor" <<endl;
                cin>>radiom;
                cout <<"Ingrese el Radio Mayor" <<endl;
                cin>>radioM;
                
                if ( radioM > 0 && radiom > 0) { 
               
               
                raiz1 = pow (radiom,2) ; 
                raiz2 = pow (radioM,2) ;
    
    
                perimetro = ( 2 * pi * ( sqrt ( (raiz1 + raiz2)/2 ))) ;
                cout <<"El Perimetro de la Elipse es : " << perimetro <<endl;
                area = ( radiom * radioM * pi ) ;
                cout <<"El Area de la Elipse es :" << area <<endl;
               
                
                cout <<" Si desea regresar al menu presione S y si desea salir N " <<endl;
                cin >>salida; 
                
                
                } else {
                    cout <<"Valores no Validos" <<endl;
                    return 0;
                }
                
                
                break;
                
                case 6 :
                
                return 0;
                
                default :
                
                return 0;
                
                break;
                
               
                
    }
    
   } while ( salida == 's' || salida == 'S' ) ;
    
    return 0; 
}