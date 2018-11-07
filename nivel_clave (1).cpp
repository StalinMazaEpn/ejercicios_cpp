#include <iostream>

#include <string.h>

#include <stdlib.h
>
using namespace std;




# define lim 26


char minusculas[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
's','t','u','v','w','x','y','z'};


char mayusculas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
'Q','R','R','S','T','U','V','W','X','Y','Z'};



int numeros[]= {0,1,2,3,4,5,6,7,8,9,10};


char simbolos[] = {'!','"','#','$','%','&','(',')','*','+',',','-','.','/'};




int main() {  
    
    
  



 
    
    
    char clave [50];
  

  
    int n ;
  
     int i ;
 
      int j ;
  
  int a,b;
 

   bool valor = false;


    bool valor2 = false;

    bool fin1 = false;
 

   bool fin2 = false;
  

  bool d1,d2 ;
  


  
    cout<<" Bienvenido al Programa Stalin "<< endl;
  
     cout <<" Ingrese su Clave para ser analizada" <<endl;
    
     cin>> clave;
    
  
    n = strlen(clave);
 


  
        for ( i = 0; i < n ; i++) {
    
   
               for ( j = 0; valor == false && j < lim ; j++) { 
     
     
                       if (clave[i] == minusculas[j]) { 
   
         
                           valor = true;
                           
              cout << "valor de clave  " << clave[i] << "    valor de minusculas  "  << minusculas[j] <<"    0" <<endl;
            
                        } else { valor = false;
                
                
            
                    }
        
                         cout << "valor de clave  " << clave[i] << "    valor de minusculas  "  << minusculas[j] <<"    1" <<endl;
                        
        }
            fin1 = valor;
          
                    cout << "valor de clave  " << clave[i] << "    valor de minusculas  "  << minusculas[j]<<"  2" << endl;
          
      
    }
    
    d1 = fin1;
    
    
    
    if ( d1 == true ) { cout <<"palabra tiene todas las letras minusculas" <<endl; }
    else {
    
    
    
    
     for (  a = 0; a < n ; a++) {
       
               for ( b = 0; valor2 == false && b < lim ; b++) { 
          
                       if (clave[a] == mayusculas[b]) { 
            
                           valor2 = true;
                           cout << "valor de clave  " << clave[a] << "    valor de minusculas  "  << mayusculas[b] <<"    0" <<endl;
            
                        } else { valor2 = false;
                
                
            
                    }
        
                         cout << "valor de clave  " << clave[a] << "    valor de minusculas  "  << mayusculas[b] <<"    1" <<endl;
                        
        }
            fin2 = valor2;
          
                    cout << "valor de clave  " << clave[a] << "    valor de minusculas  "  << mayusculas[b]<<"  2" << endl;
          
      
    }
    
    d2 = fin2;
    
    
    
    if ( d2 == true ) { cout <<"palabra tiene todas las letras mayusculas" <<endl; }
    else { cout <<"palabra no es mayuscula ni minuscula" <<endl; }
    
    
    }
    
    return 0;
    
}