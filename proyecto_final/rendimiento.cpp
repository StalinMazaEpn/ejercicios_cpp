#include <iostream>
#include <string.h>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <unistd.h>

using namespace std;


int comparacion1(char clave [50], int n);
int comparacion2(char clave[50], int n);
int comparacion3(char clave[50], int n);
int comparacion4(char clave[50], int n);
double potencia( double longitud, double permutacion );
double Permutaciones(char * conjunto, ofstream *ver, int l);
double conversion( long long int tiempo);
double seguridad( long long int tiempo);


# define letras 26
# define entero 10
# define symbolo 19


char minusculas[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
                     's','t','u','v','w','x','y','z'} ;

char mayusculas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
                     'Q','R','R','S','T','U','V','W','X','Y','Z'};


int numeros[]= {'0','1','2','3','4','5','6','7','8','9'};

char simbolos[ ] = {'!','"','#','$','%','&','(',')','*','+',',','-','.','/','_','<','>','@','|'};




int main() {  
    
    char clave [50];
    int n ;
    int primero = 0;
    int segundo = 0;
    int tercero = 0;
    int cuarto = 0;
    long double longitud = 0;
    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    long double permutacion = 0;
    long long int tiempo = 0;
    char palabra [8];
    int cantidad = 0;
    double tiempoparcial = 0;
    double tam = 0;
    double rendimiento = 0;
    char  buffer[50], *password;
   
    
    
    cout<<" Bienvenido al Programa Stalin "<< endl;
    cout<<" Determinaremos el Nivel de Seguridad de su Clave "<< endl;
    

password = getpass(" Ingresela para que pueda ser analizada: ");
n = strlen(password);
//cout << n <<endl;
//cout <<"La Contraseña Ingresada es: " << password <<endl;


for ( int i = 0; i < n ; i++) {
        
        clave[i] = password[i];
    }


 /* for ( int i = 0; i < n ; i++) {
        
        cout << clave [i] ;
    }*/
    
   primero = comparacion1(clave,n);
   segundo = comparacion2(clave,n);
   tercero = comparacion3(clave,n);
   cuarto = comparacion4(clave,n);
    
  
  
  if ( primero > 0 ) { cout << "Usted Ingreso " << primero << " letras minusculas" << endl; }
   
    
    
    if ( segundo > 0 ) { cout << "Usted Ingreso " << segundo << " letras mayusculas" << endl; }

    
    
    if ( tercero > 0  ) { cout << "Usted Ingreso " << tercero << " numeros" << endl; }
   
    
   
    if ( cuarto > 0 ) {  cout << "Usted Ingreso " << cuarto << " caracteres" << endl; }
  
  

    cout << "La Longitud de la palabra ingresada es de " << n << " caracteres" << endl; 
  
      
     
     if ( primero > 0 ) {   a = 27; }
     if ( segundo > 0 ) { b = 27;}    
     if ( tercero > 0 ) {   c = 10;}
     if ( cuarto > 0 ) {  d = 19 ;}
     
     longitud = a + b + c + d;
    permutacion = n ;
    
    long long int perm = potencia(longitud,permutacion);

    // cout <<"Con " << permutacion <<" elementos la cantidad de permutaciones es: " << perm <<endl;
     
 cantidad = n;
 
if ( cantidad > 7 ) { 
    
    
    for ( int i = 0; i < 7 ; i++) {
        
        palabra[i] = clave[i];
    }
}

    
/*if ( cantidad > 7 ) {
    
    for ( int i = 0; i < 7 ; i++) {
        
        cout << palabra [i] ;
    }
    
}  */
    

       
  
if ( cantidad > 7 ) {  
    ofstream ver("impresiones.txt");
    
    tiempoparcial = Permutaciones(palabra,&ver,0); 
   //cout <<"El tiempo parcial es: " <<  tiempoparcial <<endl; 
   ver.close();
   
       tam = 5040;
       //cout <<" instrucciones " <<  tam <<endl; 
} 

 if ( cantidad <= 7 ) { 
      ofstream ver("impresiones.txt");    
     tiempoparcial = Permutaciones(clave,&ver,0); 
      //cout <<"El tiempo parcial es: " <<  tiempoparcial <<endl; 
     ver.close();
    
     
       int temp=cantidad-1; 
       int r=cantidad; 
    while (temp>=1)  { 
                     r=r*temp; 
                     temp--; 
                     } 

    tam = r;
     
}


 
    rendimiento = tam/tiempoparcial;
    tiempo = (perm/rendimiento);
    conversion(tiempo);
    seguridad(tiempo);
  
  // cout <<"tiempo total " << tiempo << " segundos" <<endl;
  //cout <<"El rendimiento es de " <<  rendimiento << " instrucciones/segundos"<<endl;
  //cout <<"El tiempo parcial es: " <<  tiempoparcial/100 << " milisegundos" <<endl;
    return 0;
    
}


double potencia( double longitud, double permutacion ) {

              if ( permutacion == 0 ) {
    
                         return 1;
    
              } else {
   
                         return longitud * (potencia(longitud,permutacion-1));
   
                     }


}


int comparacion1( char clave [50], int n) {
    
    int contador = 0;
    int total;

    
    for ( int i = 0; i < n ; i++) {
       
               for ( int j = 0;  j < letras; j++) { 
          
                       if (clave[i] == minusculas[j]) { 
                           contador++;
                                                      }
        }
    }
    
    
    total = contador;
   
    return total;
}

int comparacion2(char clave[50], int n) {
    
    int contador = 0;
    int total;
 
    
    for ( int i = 0; i < n ; i++) {
       
               for ( int j = 0;  j < letras ; j++) { 
          
                       if (clave[i] == mayusculas[j]) { 
                           contador++;
                                                      }
        
        }
    }
    
    
    total = contador;
    
    return total;
    
}

int comparacion3(char clave[50], int n){
    
    int contador = 0;
    int total;
 
    
    for ( int i = 0; i < n ; i++) {
       
               for ( int j = 0;  j < entero ; j++) { 
          
                       if (clave[i] == numeros[j]) { 
                           contador++;
                                                   }
       
        }
    }
    
    
    total = contador;
    
    return total;
    
}



int comparacion4(char clave[50], int n) {
    
    int contador = 0;
    int total;
   
    
    for ( int i = 0; i < n ; i++) {
       
               for ( int j = 0;  j < symbolo ; j++) { 
          
                       if (clave[i] == simbolos[j]) { 
                           contador++; 
                                                    }
        }
    }
    
    
    total = contador;
    
    return total;
    
}

double conversion( long long int tiempo) {
    
    long double tiempo1 = 0;
    
    if ( tiempo <= 60 ) {   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo << " Milisegundos"<<endl; }
     
    
 if (tiempo > 60 && tiempo <= 3540 ) { 
        
                   tiempo1 = tiempo/60; 
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " Segundos"<<endl;

                   //para mostrar tiempo en segundos
    }
    
    
    if (tiempo > 3540 && tiempo <= 86400 ) {
                  
                   tiempo1 = tiempo/3540; // para mostrar tiempo en minutos
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " minutos"<<endl;
    }
    
    
     if (tiempo > 86400  && tiempo <= 2592000 ) {
                   tiempo1 = tiempo/86400; // para mostrar tiempo en horas
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " horas"<<endl;
    }
    
   
    
    if (tiempo > 2592000  && tiempo <= 31557600 ) {
                   tiempo1 = tiempo1/2592000; // para mostrar tiempo en dias
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " dias"<<endl;
    }
    
  
    
    if (tiempo > 31557600  && tiempo <= 3155760000 ) {
                   tiempo1 = tiempo/31557600; // para mostrar tiempo en mes
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " meses"<<endl;
    }
    
    if (tiempo > 3155760000   ) {
                   tiempo1 = tiempo/3155760000; // para mostrar tiempo en años
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo1 << " años"<<endl;
    }
    
    return tiempo1;

}


double seguridad(long long int tiempo) {
    
    
    
   if ( tiempo <= 3540 ) {
        
        cout <<"El Nivel de seguridad de su clave es: Demasiado Debil  " <<endl;  //seguridad demasiado debil
                          }
    
    if ( tiempo > 3540 && tiempo <= 86400 ) {
        
        cout <<"El Nivel de seguridad de su clave es: Debil  " <<endl;   //seguridad debil
                                            }
    
    if ( tiempo > 86400 && tiempo <= 2629800 ) {
        
        cout <<"El Nivel de seguridad de su clave es: Normal  " <<endl;  //seguridad normal
                                                }
    
    if ( tiempo > 2629800 && tiempo <= 31557600 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Rigida  " <<endl;     //seguridad rigida
                                                   }
    
    if ( tiempo > 31557600 && tiempo <= 315576000 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Fuerte  " <<endl;   //seguridad fuerte
                                                    }
    
    if ( tiempo > 315576000 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Super Fuerte  " <<endl;        //seguridad super fuerte
                               }
    
}


double Permutaciones(char * conjunto, ofstream *ver, int l)  {

clock_t inicio,fin;
inicio = clock();

int duracion = 0;
char c; // variable auxiliar para intercambio 
int i, j; // variables para bucles 
int n = strlen(conjunto); 

for(i = 0; i < n-l; i++) {
    
              if( n-l> 2) { 
                               Permutaciones(conjunto, ver, l+1);
                           }
              else {
                               *ver << conjunto <<endl;
                    }
//Intercambio de posiciones 
c = conjunto[l];
conjunto[l] = conjunto[l+i+1];
conjunto[l+i+1] = c;
if(l+i == n-1) {
for(j = l; j < n; j++) {
conjunto[j] = conjunto[j+1];}
conjunto[n] = 0;
}
}

fin = clock();
duracion = fin-inicio;

 return duracion;
 
}

