#include<iostream>

using namespace std;

int main (){
    int num1 = 0;
    int b= 0;
    int c = 0;
    int d= 0;
    std::cout << "Ingrese un numero: " << std::endl;
    cin>>num1;
    b = num1;
    c= num1  + 1;
    
    
    while(num1 >= 0){ 
                 if(d != c ){
                 std::cout << d << std::endl;
                 d++;
                 }if(b != 0 && d==c){
                     b--;
                     std::cout << b << std::endl;
    
                }
                 
    }

return 0;

}