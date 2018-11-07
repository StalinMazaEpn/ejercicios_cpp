#include <iostream>
using namespace std;

int main () {
  
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  int num6 = 0;
  int num7 = 0;
  int num8 = 0;
  int num9 = 0;
  int num10 = 0;
  int mayor = 0;
  
  cout <<"Ingrese el Primer Numero" <<endl;
  cin >> num1;
  cout <<"Ingrese el Segundo Numero" <<endl;
  cin >> num2;
  
  if ( num1== num2 ) { cout <<"Los Numeros Son Iguales" <<endl; }
  else if ( num1 > num2 ) {  cout << ( mayor = num1 ) <<endl; }
  else { cout << ( mayor = num2 ) <<endl; } 
  
  cout <<"Ingrese el Tercer Numero" << endl;
  cin >> num3;
  
  
  
  if ( num3 == mayor ) { cout << " El Numero ya ha sido utilizado " <<endl;}
  else if ( num3 > mayor ) { cout << ( mayor = num3 ) << endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  cout <<"Ingrese el Cuarto Numero " <<endl;
  cin >> num4;
  
  if ( num4 == mayor ) { cout << " El Numero Ya ha sido utilizado " <<endl; }
  else if ( num4 > mayor ) { cout << ( mayor = num4 ) <<endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  
  
  cout <<"Ingrese el Quinto Numero " <<endl;
  cin >> num5;
  
  if ( num5 == mayor ) { cout <<"El Numero Ya Ha Sido Utilizado" << endl; }
  else if ( num5 > mayor ) { cout << ( mayor = num5 ) <<endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  
  cout << " Ingrese el Sexto Numero " <<endl;
  cin >> num6;
  
  if ( num6 == mayor ) { cout <<" El Numero Ya Ha Sido Utilizado" << endl; }
  else if ( num6 > mayor ) { cout << ( mayor = num6 ) << endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  cout << " Ingrese el Septimo Numero " <<endl;
  cin >> num7;
  
  if ( num7 == mayor ) { cout <<"El Numero ya ha sido utilizado " <<endl; }
  else if ( num7 > mayor ) { cout << ( mayor = num7) <<endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  cout << " Ingrese el Octavo Numero " <<endl;
  cin >> num8;
  
   if ( num8 == mayor ) { cout <<"El Numero ya ha sido utilizado " <<endl; }
  else if ( num8 > mayor ) { cout << ( mayor = num8 ) <<endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  
  cout << " Ingrese el Noveno Numero " <<endl;
  cin >> num9;
  
   if ( num9 == mayor ) { cout <<"El Numero ya ha sido utilizado " <<endl; }
  else if ( num9 > mayor ) { cout << ( mayor = num9 ) <<endl; }
  else { cout << ( mayor = mayor ) <<endl; }
  
  cout << " Ingrese el Decimo Numero " <<endl;
  cin >> num10;
  
   if ( num10 == mayor ) { cout <<"El Numero ya ha sido utilizado " <<endl; }
  else if ( num10 > mayor ) { cout <<" El Mayor de los Numeros Ingresados es : " << ( mayor = num10 ) <<endl; }
  else { cout <<" El Mayor de los Numeros Ingresados es : " << ( mayor = mayor ) <<endl; }
  
  
  
  
    return 0;
    
}