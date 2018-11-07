#include <iostream> 
#include <string.h>
#include <stdlib.h> //librerias

using namespace std;

#define tam 10  // constante
#define lim 50

int suma_array(int arreglo[]);            
float promedio_array(int arreglo[]);               //definiendo las funciones
int menor_array(int arreglo []);
int mayor_array(int arreglo []);
bool palindromo(char palabra[]);

int main () {   //funcion principal
    
    char palabra[lim];
    int opcion = 0;
    int salida = 0;
    int numeros [tam];
    int n = sizeof(numeros)/sizeof(int);
    cout << n <<endl;
    
    do {
    system("clear");
   
    cout <<"Bienvenidos al Menu Stalin" <<endl;
    cout <<"\t1.-Suma, Valor Promedio,Mayor y Menor de 10 numeros" <<endl;
    cout <<"\t2.-Palindromo" <<endl;
    cout <<"Elija una de las opciones del menu que desee realizar" <<endl;
    cin >> opcion;
    
    system("clear");
    
    switch (opcion ) {
        
            case 1:
        
        for (int i = 0; i < n ; i++) {
        
        cout <<"Ingrese el valor  " << i << endl;
        cin>> numeros[i];
        }

         cout <<"La Suma de los Numeros es: " << suma_array(numeros) <<endl;
         cout <<"El Promedio de los Numeros es :" << promedio_array(numeros)<<endl;
         cout <<"El Menor de los Numeros Ingresados es : " << menor_array(numeros) <<endl;
         cout <<"El Mayor de los Numeros Ingresados es : " << mayor_array(numeros) <<endl;
        break;
        
        case 2:
       
       cout <<"Ingrese una palabra de maximo 50 caracteres" <<endl;
        cin >> palabra;
    
    
        if ( palindromo(palabra) == true) {  cout << "La Palabra " << palabra << " es Polindroma " <<endl;}
        else {  cout << "La Palabra " << palabra << " No es Polindroma" <<endl;}
       
        break;
       
        default:
        cout <<"Numero no Corresponde a opciones del Programa" <<endl;
        opcion = 0;
        
        }
    
    
     cout <<"Si Desea Salir Presione 0 sino presione 1 para regresar al menu" <<endl;
     cin >> salida;
    
    } while ( salida == 1);
        
    return 0;
     
}





int suma_array(int arreglo[]) {  //funcion para sumar los numeros
    
    int suma = 0;
   
    
    for ( int i = 0 ; i < tam ; i++) {
        
        suma = suma + arreglo[i];
        
}

return suma;

}


float promedio_array(int arreglo[]) {
    
    float suma = 0;
    for ( int i = 0 ; i < tam ; i++) {
        
        suma = suma + arreglo[i] ;
    }
     return suma/tam;
}


int menor_array(int arreglo[]) {
    
    int aux = arreglo[0];
    
    for ( int i = 0 ; i < tam ; i++) {
        
        if ( arreglo[i] < aux ) {
            
            aux = arreglo[i] ;
        }
        
    }
   
   return aux; 
}



int mayor_array(int arreglo []) {
    int aux2 = arreglo[0];
    
    for ( int i = 0 ; i < tam  ; i++ ) {
        
        if ( arreglo[i] > aux2 ) {
            
            aux2 = arreglo[i];
        }
    }
    
   return aux2;
    
}

bool palindromo(char palabra[]){
   
      int tamanio;
      bool valor ;
      tamanio = strlen(palabra);
     // cout << "la cantida de caracteres es :  "<< tamanio << endl;
     
      for (int i = 0; i < tamanio-2 ; i++ ) {
        
            tamanio--;
      
           //cout <<" valor de i" << i << "valor de tamanio "<<  tamanio <<endl; para ver que comparaciones esta haciendo
        
        if (palabra [i] == palabra [tamanio] ) {
            
            valor = true;
            return true;
                                                } 
           
         else { 
                  valor = false;
                  return false;
                  
               }
        
     }

}