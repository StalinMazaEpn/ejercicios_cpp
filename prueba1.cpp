#include <iostream>

using namespace std;


int main () { 

                int valor = 0;
                int valor2= 0;
                int n = 0;
                bool quiebre = false;
                int a = 0;
                int valor3 = 0; 
                 
                 
             cout <<"\t Bienvenidos al Menu Bucles de Stalin Maza" <<endl;
             cout <<"1.- For" <<endl;
             cout <<"2.- While" <<endl;
             cout <<"3.- Do While " <<endl;


             cout <<"Elija una de las opciones para observar su funcionamiento" <<endl;
             cin >> valor;


        switch ( valor ) { 

                           case 1:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> n;
                                 
                            for ( int i = 0;  i < (n*2) + 1 ; i++ ) {
                                           cout << valor2 <<endl;
                                           if ( valor2 == n ) { quiebre = true ; }
                                           if ( quiebre == true ) { valor2-- ;} else { valor2++; }
                            } 

                           
                          

                            break ; 
            
                           case 2:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> n;
                           
                            

                           while ( valor3 < ( n*2 )+ 1 ) { valor3++ ; cout << valor2 <<endl;  
                           if ( valor2 == n ) { quiebre = true ; } 
                           if ( quiebre == true ) { valor2-- ; } else { valor2++ ; }
                          
                           }
                           
                           
                           
                           
                           break ;


                           case 3:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> valor2;


                           do { cout << a <<endl; 
                                   a++; 
                           
                               
                           } while ( valor2 >= a);



                           do { valor2-- ;
                           cout << valor2 <<endl; 
                                
                               
                           } while (valor2 != 0 ) ;
                           
                           break ;
              
                    default : 
                    
                    cout << " Numero Ingresado No Corresponde a las opciones del programa" <<endl;
                    
                    
                        }

                              
                               return 0;

                }