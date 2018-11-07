#include <iostream>
#include <math.h>
using namespace std;

int main () {
    
    int a = 0;
    int b= 0;
    int c= 0;
    
    double x1 = 0;
    double x2 = 0;
    double discriminante = 0;
    double denominador = 0;
    
      cout <<" Bienvenidos al Programa Ecuaciones" <<endl;
       cout <<"Ingrese el Valor de a" <<endl;
       cin>> a;
       cout <<"Ingrese el Valor de b" <<endl;
       cin>> b;
       cout <<"Ingrese el Valor de c" <<endl;
       cin >> c;
       
       
       discriminante = pow (b,2)-(4*a*c) ;
       denominador = 2*a ;
       
       if ( denominador == 0 ) { cout <<" El Valor de a nunca puede ser 0, revise sus calculos "<<endl; }
                       else if ( discriminante < 0 ) { cout <<"No existen raices negativas, revise sus calculos" <<endl; }
                       else { 
       x1 = ( -b + sqrt ( discriminante )) / denominador ;
    x2 = (-b - sqrt ( discriminante ))/denominador ;
       
                       }
       
    
    
    
    cout <<" raiz 1 : " << x1 <<endl;
    cout <<" raiz 2 : " << x2 <<endl;
    









    
    return 0;
}
