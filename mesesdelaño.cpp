#include <iostream>
using namespace std;

int main () {
    
    int num1 = 0;
   
    
    cout <<"Bienvenidos al Programa Stalin" <<endl;
    cout <<" Ingrese Un Numero " <<endl;
    cin >> num1;
    
    
    if ( num1 == 1 ) { cout <<" El Mes es Enero " <<endl; }  
        else if ( num1 == 2 ) { cout << " El Mes es Febrero " <<endl;  } 
        else if ( num1 == 3 ) { cout << " El Mes es Marzo " <<endl; }
        else if ( num1 == 4 ) { cout << " El Mes es Abril " <<endl; }
        else if ( num1 == 5 ) { cout << " El Mes es Mayo" <<endl;  }
        else if ( num1 == 6 ) { cout << " El Mes es Junio " <<endl; }
        else if ( num1 == 7 ) { cout << " El Mes es Julio " <<endl; }
        else if ( num1 == 8 ) { cout << " El Mes es Agosto" <<endl; }
        else if ( num1 == 9 ) { cout << "El Mes es Septiembre" <<endl; }
        else if ( num1 == 10 ) { cout << " El Mes es Octubre" <<endl; }
        else if ( num1 == 11 ) { cout << " El Mes es Noviembre" <<endl; }
        else if ( num1 == 12 ) { cout << " El Mes es Diciembre " <<endl; }
        else { cout << "Numero No Corresponde A un Mes del Año " <<endl;} 
        
    
    return 0;
    
}