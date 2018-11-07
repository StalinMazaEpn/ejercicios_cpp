#include<iostream>

using namespace std;

int main (){
    int n = 0;
    int a = 0;
    int r = 0;
    
    while(n >= 0 && a >= 0 /*&& n<=9*/){
        
        if( n >= 0 && n < 9 ){
        
        n++;
        std::cout << n << std::endl;
        
            }else{
                --n;
                std::cout << n << std::endl;
                
            }
    }
    return 0;
}