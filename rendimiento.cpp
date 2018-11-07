#include <iostream>
#include <string.h>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <unistd.h>

using namespace std;


int comparacion(char clave [50], int n, char conjunto [], int l);
double potencia( double longitud, double permutacion );
void Permutaciones(char * conjunto, ofstream *ver, int l);
int conversion(  long long int tiempo);
int seguridad(  long long int tiempo);


# define letras 26
# define entero 10
# define symbolo 19


              char minusculas[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
                     's','t','u','v','w','x','y','z'} ;

              char mayusculas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
                     'Q','R','R','S','T','U','V','W','X','Y','Z'};

              char numeros[]= {'0','1','2','3','4','5','6','7','8','9'};

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
    long long int duracion = 0;
    
    
    cout<<"\t\tBienvenido al Programa Stalin "<< endl;
    cout<<"\tEste programa tiene sólo fines educativos "<< endl;
    cout<<"\tVamos a Determinar el Nivel de Seguridad de su Clave "<< endl;
    password = getpass("Ingrese su clave: ");
    n = strlen(password);
    //cout << n <<endl;
   // cout <<"La Contraseña Ingresada es: " << password <<endl;

    for ( int i = 0; i < n ; i++) {
        
           clave[i] = password[i];
                                 }

        primero = comparacion(clave,n,minusculas,26);
      segundo = comparacion(clave,n,mayusculas,26);
      tercero = comparacion(clave,n,numeros,10);
      cuarto = comparacion(clave,n,simbolos,19);
    
    if ( primero > 0 ) { cout << "Usted Ingreso " << primero << " letras minusculas" << endl; }
    if ( segundo > 0 ) { cout << "Usted Ingreso " << segundo << " letras mayusculas" << endl; }
    if ( tercero > 0  ) { cout << "Usted Ingreso " << tercero << " numeros" << endl; }
    if ( cuarto > 0 ) {  cout << "Usted Ingreso " << cuarto << " caracteres" << endl; }
 
    cout << "La Longitud de la palabra ingresada es de " << n << " caracteres" << endl; 
 
     if ( primero > 0 ) {   a = letras; }
     if ( segundo > 0 ) { b = letras;}    
     if ( tercero > 0 ) {   c = entero;}
     if ( cuarto > 0 ) {  d = symbolo ;}
     
    longitud = a + b + c + d;
    permutacion = n ;
    long long int perm = potencia(longitud,permutacion);

    //cout <<"Con " << permutacion <<" elementos la cantidad de permutaciones es: " << perm <<endl;
 cantidad = n;
 
if ( cantidad > 7 ) { 
    
    for ( int i = 0; i < 7 ; i++) {
        
        palabra[i] = clave[i];
    }
}

clock_t inicio,fin;
inicio = clock();

if ( cantidad > 8 ) {  
     ofstream ver("impresiones.txt");
     Permutaciones(palabra,&ver,0); 
     ver.close();
     tam = 10000;
} 

 if ( cantidad <= 7 ) { 
      ofstream ver("impresiones.txt");    
     Permutaciones(clave,&ver,0); 
     ver.close();
     
       int temp=cantidad-1; 
       int r=cantidad; 
    while (temp>=1)  { 
                     r=r*temp; 
                     temp--; 
                     } 
    tam = r;
     
}

fin = clock();
tiempoparcial = fin-inicio;

    rendimiento = tam/tiempoparcial;
    tiempo = (perm/rendimiento);
   
 if ( tiempo < 1000 ) {
     
     cout <<"tiempo total " << tiempo << " milisegundos" <<endl;
 } else if ( tiempo >= 1000 ){
   duracion = tiempo/1000;
   //cout <<"duracion " << duracion << " segundos" <<endl;
   conversion(duracion); 
 }
 
   seguridad(duracion);
 
    return 0;
    
}





int comparacion( char clave [50], int n, char conjunto [], int l) {
    
    int contador = 0;
    int total;

    
    for ( int i = 0; i < n ; i++) {
       
               for ( int j = 0;  j < l; j++) { 
          
                       if (clave[i] == conjunto[j]) { 
                           contador++;
                                                      }
        }
    }
    
    
    total = contador;
   
    return total;
}

int conversion(  long long int tiempo) {
    
    long long int tiempot = 0;
    
   if ( tiempo < 60) {  
        cout <<"Su clave se hackearia en aproximadamente: " <<  tiempo << " Segundos"<<endl; 
        cout <<"Antes que pueda decir la palabra Opps!!  " <<endl; 
   }
     
    if (tiempo >= 60 && tiempo <= 3540 ) { 
                   tiempot= tiempo/60; 
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Minutos"<<endl;
                   cout <<"Tiempo suficiente para dar un paseo y regresar con su clave descifrada!!  " <<endl; 
    }
    
    if (tiempo >= 3600 && tiempo <= 86400 ) {
                   tiempot = tiempo/3600; // para mostrar tiempo en minutos
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Horas"<<endl;
                   cout <<"En este tiempo usted puede viajar por el Pais !!  " <<endl; 
    
    }
    
     if (tiempo > 86400  && tiempo <= 2592000 ) {
                   tiempot = tiempo/86400; // para mostrar tiempo en horas
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Dias"<<endl;
                   cout <<"Se necesitaría todo este tiempo para viajar 442 km en su nuevo Ferrari!!  " <<endl; 
    
    }
    
    if (tiempo > 2592000  && tiempo <= 31557600 ) {
                   tiempot = tiempo/2592000; // para mostrar tiempo en dias
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Meses"<<endl;
                    cout <<"Este tiempo se demoraria en darse unas buenas vacaciones!!  " <<endl; 
                   
    }
    
    if (tiempo > 31557600  && tiempo <= 31557600000 ) {
                   tiempot = tiempo/31557600; // para mostrar tiempo en mes
                   cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Años"<<endl;
                    cout <<"En este tiempo usted podria viajar en barco por todo el mundo!!  " <<endl; 
    }
    
    if (tiempo > 31557600000  ) {
                 tiempot = tiempo/31557600000 ;
                 cout <<"Su clave se hackearia en aproximadamente: " <<  tiempot << " Siglos"<<endl;
                  cout <<"Puede pasar este tiempo viajando a la luna ida y vuelta 20 veces!!  " <<endl; 
     }
     
    return tiempot;

}

int seguridad( long long int tiempo) {
    
   if ( tiempo <= 3540 ) {
        
        cout <<"El Nivel de seguridad de su clave es: Demasiado Debil  " <<endl;  //seguridad demasiado debil
                          }
    
    if ( tiempo >= 3600 && tiempo <= 86400  ) {
        
        cout <<"El Nivel de seguridad de su clave es: Debil  " <<endl;   //seguridad debil
                                            }
    
    if ( tiempo >= 86400 && tiempo <= 2592000 ) {
        
        cout <<"El Nivel de seguridad de su clave es: Normal  " <<endl;  //seguridad normal
                                                }
    
    if ( tiempo > 2592000 && tiempo <= 31536000 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Rigida  " <<endl;     //seguridad rigida
                                                   }
    
    if ( tiempo > 31536000 && tiempo <= 315360000 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Fuerte  " <<endl;   //seguridad fuerte
                                                    }
    
    if ( tiempo > 315360000 ) {
        
         cout <<"El Nivel de seguridad de su clave es: Super Fuerte  " <<endl;        //seguridad super fuerte
                               }
    
}


void Permutaciones(char * conjunto, ofstream *ver, int l)  {

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
}

double potencia( double longitud, double permutacion ) {

              if ( permutacion == 0 ) {
                                                   return 1;
              } else {
                             return longitud * (potencia(longitud,permutacion-1));
                     }

}