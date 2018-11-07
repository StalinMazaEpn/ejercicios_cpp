#include<iostream>
#include<stdlib.h>

using namespace std;
int num = 0;
int a=0;
int b=1;
int c=0;
int fibonacci(int){
   
    if(num==0){
        return  0;
    }else{
        /*c=a+b;
        std::cout << a<<" " << b << " "<<c << endl;
        a=b;
        b=c;*/
        c=a+b;
        std::cout << c <<" " ;
        a=b;
        b=c;
        num--;
    }
    
    fibonacci(num);
}


int main(){
    std::cout << "Ingrese un numero: "<< std::endl;
    cin>>num;
    num=num-2;
    std::cout << a << " "<<b<<" ";
    fibonacci(num);
    
    return 0;
}