#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    
    char menu ;
    int peso = 0; // variable donde ingresamos el peso
    float vaso = 0.0024; // equivalencia de un vaso de 250 ml de Whisky en Lt
    float sangre = 13; // divisor para obtener litros de sangre
    float tolerancia = 0; // es el 3% del valor maximo de alcohol
    float rangoM = 0; // rangomaximo que soporta su cuerpo con la tolerancia de 3%
    float maximoalcohol = 0; // es el valor maximo que soporta su cuerpo de alcohol
    int numvaso = 0; // esta variable me indicara el numero de vasos
    float vasoW = 0; // sera la varible que aumente cada que toma un vaso y me indicara los litros de Whisky que tomo
  
    
    
    cout << "Bienvenidos al Programa Stalin " <<endl;
    cout <<" Aqui vamos a determinar su tolerancia al alcohol de acuerdo a su peso "<< endl;
    cout <<"Ingrese su Peso " <<endl;
    cin >> peso ;
    
    sangre = (peso/sangre) ;
    //cout <<"Su cantidad de sangre es : " << sangre << "  litros"<<endl;
    
    
    maximoalcohol = ( ( sangre * 8 ) / 1000 ) ;
   // cout <<" La Cantidad Maxima de Litros de Alcohol que soporta es : " << maximoalcohol <<endl;
    
    tolerancia = ( maximoalcohol * 0.03 ) ;
   // cout <<" Su tolerancia es " << tolerancia <<endl;
    
    
    rangoM = ( maximoalcohol + tolerancia ) ;

    //cout<<"Tolerancia Maxima es " << rangoM <<endl;
       
   do { 
       
     
       
        cout <<"Desea Ingerir un Vaso de Whisky" <<endl;
       cout <<"Escriba S si desea o N si no desea " <<endl;
       cin >>menu;
       
       system("clear") ;
       
       if ( menu == 'S' || menu == 's') { 
           
           
       vasoW = ( vasoW +  vaso ) ;
       numvaso++ ;        
      // cout << vasoW <<endl;
       // cout << numvaso <<endl;
                               
     if ( vasoW >= rangoM ) {  menu = 'n' ; 
                              cout <<" Usted ya no debe ingerir mas alcohol o ira directo al hospital" <<endl;
     }
     
     
        } 
       
    
    
   } while ( menu == 's' || menu == 'S' ) ;
     cout <<"Usted Bebio :" << vasoW <<" litros de Whisky" <<endl;
     cout <<"Y el total de Vasos que tomo fue de:" << numvaso <<" vasos" <<endl;



     return 0;
}