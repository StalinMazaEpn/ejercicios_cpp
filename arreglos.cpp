#include <iostream>
using namespace std;


void print_array( int arreglo[], int tamanio ) ;
int main () {
    
    
    
    int valor = 0;
    int valores [5] ; //= {3,34,56,78,1}; //declaracion y con el == se vuelve asignacion
    int values [10] = {1,2,3,4,5,6,7,8,9,0} ;
    
    
    cout << sizeof(valores)/sizeof(int)<<endl;
    cout << "Ingrese Valores: " <<endl;
    
    for (int i = 0; i < 5 ; i++ ) {
        
         
         cin >> valores[i];
        
    }
    
    
    
    char nombres [] = {'S','t','a','l','i','n'} ;
    
    
    cout<< "valor: " << valor <<endl;
    cout <<"Arreglos  valores : " << valores <<endl;
    
    cout <<"elemento[2] " << valores[1] <<endl;
    
    cout <<"nombre: " << nombres <<endl;
    
    cout <<"elemento fuera de rango :" << nombres [7] <<endl;
    
    
    //bucles
    
   
    
    
    print_array(valores, sizeof(valores)/sizeof(int));
    valores[3] = 15 ;
    print_array(valores, sizeof(valores)/sizeof(int));
    print_array(values, sizeof(values)/sizeof(int));
    
    
     //print_array(nombres); no hay como porque es de tipo char y me pide int
    
    return 0;
}


void print_array(int arreglo[], int tamanio) {
    
    cout << tamanio <<endl;
    
    for ( int i = 0; i < tamanio ; i++ ) {
        
        cout <<"elemento en el indice: " << i << " = " << arreglo[i] <<endl;
    }
    
}