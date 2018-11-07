#include <iostream>
using namespace std;

int main () {
    
    int num1 = 0;
   
    
    cout <<"Bienvenidos al Programa Stalin" <<endl;
    cout <<" Ingrese Un Numero " <<endl;
    cin >> num1;
    
    
    if ( num1 == 1 ) { cout <<" El Dia es Lunes " <<endl; }  
        else if ( num1 == 2 ) { cout << " El Dia es Martes " <<endl;  } 
        else if ( num1 == 3 ) { cout << " El Dia es Miercoles " <<endl; }
        else if ( num1 == 4 ) { cout << " El Dia es Jueves " <<endl; }
        else if ( num1 == 5 ) { cout << " El Dia es Viernes" <<endl;  }
        else if ( num1 == 6 ) { cout << " El Dia es Sabado " <<endl; }
        else if ( num1 == 7 ) { cout << " El Dia es Domingo " <<endl; }
        else { cout << "Numero No Corresponde A un Dia de la Semana " <<endl;} 
        
    
    
    return 0;
    
}