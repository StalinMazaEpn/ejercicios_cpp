#include <iostream>

using namespace std;


int main () { 

                int valor = 0;
                int num = 0;


             cout <<"Stalin Maza" <<endl;
             cout <<"1,- for" <<endl;
             cout <<"2.- while" <<endl;
             cout <<"3.- Do While " <<endl;


             cout <<"Elija una de las opciones" <<endl;
             cin >> valor;


        switch ( valor ) { 

                           case 1:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> num;


                            int numt = 0;

 
                            for (num >= 0 ) { numt++ ; } 

                            for (numt <= num) { num-- ;}

                          

                            break; 




            
                           case 2:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> num;
                           
                           int numt = 0;


                           while ( num >= 0 ) { numt++ ; }
}

                           while ( numt <= num ) { num-- }
                           
                           



                           break;


                           case 3:

                                   cout <<"Ingrese un Numero" <<endl;
                                   cin >> num;

                           
                            int numt = 0;

                           do {numt++ } while ( numt = num );


                           do { num-- } while ( num = numt );


                           break;
              

                        }


                                return 0;



                }