#include <iostream>

using namespace std;

int main () {
    
    char nombres [3] [50];
    int edad [3];
    
    int i;
    int j;
    int auxiliar[3];
    int mayor ;
    int menor ;
    for ( i = 0; i < 3 ; i++ ) {
        
        cout <<"Ingrese El Nombre y Edad"<<endl;
        cin >> nombres[i];
        cin >> edad[i];
        
        auxiliar[i] = edad[i] ;
        
             }
    
    
    //metodo burbuja 
    
    for ( i = 1; i < 3 ; i++ ) {
        
        for (j = 0; j < 3-i; j++ ) {
                           
            if(auxiliar[j] > auxiliar [j+1]) {
                 
                 mayor = auxiliar[j];
                 auxiliar[j] = auxiliar[j+1];
                 auxiliar[j+1] = mayor;
                            }
                     }
        }
        
    
    
    
    
  for (i = 0; i < 3 ; i++) {
      
      
      for ( j = 0; j < 3 ; j++) {
          
          if ( edad[j] == auxiliar[i] ) {
              
             // cout << nombres[j] <<endl;
              //cout << edad[j] <<endl;
              
              if ( i == 0 ) {
                  menor = j;
              } else if ( i == 2) { mayor = j; }
         
          } 
      }
  }  
    
    
    cout << "El Menor es :  " << nombres[menor] <<endl;
    cout <<"El Mayor es :  " << nombres[mayor] <<endl;
    
    
    
    
    return 0;
    
    
}