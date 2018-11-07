#include<iostream>

using namespace std;
int num = 0;
int dato =0;
int fact =1;
int x = 0;
int dec = 0;
int factorial(int){
    if(num==0){
        return 0;
    }else{
    x=x+1;
    fact=fact*x;
    num--;    
    }
    
    factorial(num);
}

int main(){
    std::cout << "Factorial" << std::endl;
    cin>>num;
    dato=num;
    if(num>=0){
        if(num==0){
            std::cout << "El factorial de 0 es 1" << std::endl;
        }else{
            factorial(num);
        }
        
    }else{
        std::cout << "No existe factorial de un numero negativo" << std::endl;
    }
    std::cout << "El factorial de "<<dato<<" es: "<<fact << std::endl;
    return 0;
}