#include <iostream>
using namespace std;

int main (){
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int mayor = 0;
    int menor = 0;
    int medio = 0;
    
    cout <<"Ingrese El Primer Numero" <<endl;
    cin >> num1;
    cout <<"Ingrese El Segundo Numero " <<endl;
    cin >> num2;
    
    if (num1 == num2 ) { cout <<" Los Numeros Son Iguales" <<endl; }
    else if (num1 > num2 ) { cout << ( mayor = num1 ) << ( menor = num2) <<endl; }
    else { cout << ( mayor = num2) << ( menor = num1) <<endl; }
    
    
    cout <<"Ingrese el Tercer Numero" <<endl;
    cin >> num3;
    
    if ( num3 == mayor || num3 == mayor ) { cout << " Este Numero ya ha sido utilizado" <<endl; }
    else if ( num3 > mayor ) { if ( num1 > num2 ) { cout << " Los Numeros Ordenados quedan asi" <<endl;
                                                    cout << ( menor = num2 ) << endl;
                                                    cout << ( medio = num1 ) << endl;
                                                    cout << ( mayor = num3 ) << endl;}
        
                               else { cout << " Los Numeros Ordenados quedan asi " << endl;
                               cout << ( menor = num1 ) << endl; 
                               cout << ( medio = num2 ) << endl; 
                               cout << ( mayor = num3 ) << endl; } }
  
                               
    else if ( num3 < menor ) { if (num1 < num2 ) {  cout << " Los Numeros Ordenados quedan asi " << endl;
                                                    cout << ( menor = num3 ) << endl; 
                                                    cout << ( medio = num1 ) <<endl;
                                                    cout << ( mayor = num2 ) <<endl; }
    else {  cout << " Los Numeros Ordenados quedan asi " << endl;
                                  cout << ( menor = num3 ) <<endl;
                                  cout << ( medio = num2 ) <<endl;
                                  cout << ( mayor = num1 ) <<endl; } }
   
    else { if ( num1 < num3 ) { cout << " Los Numeros Ordenados quedan asi " << endl;
                                  cout << ( menor = num1 ) <<endl;
                                  cout << ( medio = num3 ) <<endl;
                                  cout << ( mayor = num2 ) <<endl; }
    else { cout <<" Los Numeros Ordenados quedan asi " << endl;
           cout << ( menor = num2 ) << endl;
           cout << ( medio = num3 ) << endl;
           cout << ( mayor = num1 ) << endl; } }
           
           
           
    return 0;
    
}