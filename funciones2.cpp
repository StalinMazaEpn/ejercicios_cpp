#include <iostream>
using namespace std;


int valor (int c, int d);

int referencia(int &C , int &d);

#define x 35

int main() {
    
    int a = 20;
    int b = 10;
    
    cout <<"valor inicial a: " << a <<endl;
    cout << valor(a,b) <<endl;
    cout << "valor de a despues de paso por valor" << a <<endl;
    cout << referencia(a,b) <<endl;
    cout <<"valor de a despues de paso por referencia:" << a <<endl;
    cout << a <<endl;
    
    
    
    
    return 0;
}


int valor ( int c, int d) {
    
    c=30;
    return c+d;
}

int referencia( int &c , int &d) {
    c=30;
    
    return c+d;
}