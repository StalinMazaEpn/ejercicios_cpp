#include <iostream>
#include <time.h>
using namespace std;
 
void burbuja(int TAM, int lista[]);
void imprimir(int TAM, int lista[]);
void insercion(int lista[], int TAM);
void seleccion(int TAM, int lista[]);
void shell(int TAM, int lista[]);
void quickSort(int lista[], int left, int right);
void makeheap ( int lista[], int TAM) ;
void heapsort ( int lita[], int TAM) ;
void merge(int lista[],int, int , int );
void mergesort(int lista[], int low, int high);
 
int lista [] = {5,6,1,0,3,5,20,-3};
//int lista [] = {1,2,3,4,5,6,7,8,9,11,10};
 
int main(){
    cout << "Lista sin ordenar\n";
    imprimir(8,lista);
     
    clock_t inicio, fin; 
    inicio = clock(); 
     
    //cout << "Ordenamiento con Burbuja\n";
    //burbuja(8,lista);
     
    //cout << "Ordenamiento con Insercion\n";
    //insercion(lista,8);
     
    //cout << "Ordenamiento con Seleccion\n";
    //seleccion(8,lista);
     
    //cout << "Ordenamiento con Shell\n";
    //seleccion(8,lista);
     
    //cout << "Ordenamiento con QuickSort\n";
    //quickSort(lista,0,7);
    //imprimir(8,lista);
     
     
    //cout << "Ordenamiento con HeapSort\n";
    //makeheap(lista,8);
    //heapsort(lista,8);
    //imprimir(8,lista);
     
    cout << "Ordenamiento con MergeSort\n";
    mergesort(lista,0,7);
    imprimir(8,lista);
     
    fin = clock(); 
    std::cout << (fin - inicio) / 1 << std::endl;
     
 
    //system("pause"); 
    return 0;
}
 
void burbuja(int TAM, int lista[]){
    int cont = 0;
    int temp;
    for (int i=1; i<TAM; i++){
        for (int j=0 ; j<TAM - 1; j++){
            if (lista[j] > lista[j+1]){
                    temp = lista[j];
                    lista[j] = lista[j+1];
                    lista[j+1] = temp;
                    cout<<"       cambio "<<lista[j+1]<<" por "<<lista[j]<<"\n";
            }
            imprimir(TAM, lista);
            cont++;
        }   
    }
    std::cout << "instrucciones: "<<cont << std::endl;
}
 
 
void insercion(int lista[], int TAM){
    int x,z, aux;
    bool b;
    for(x = 1; x < TAM; x++)
    {
        aux = lista[x];
        z = x - 1;
        b = false;
        while(b == false && z >= 0)
        {
            if(aux < lista[z])
            {
                lista[z + 1] = lista[z];
                z--;
            }
            else
                b = true;
        }
    lista[z + 1] = aux;
    imprimir(TAM, lista);
    }
}
 
 
void seleccion(int TAM, int lista[]){
    int i, j, min, aux;
    i = 0;
    while(i < TAM)
    {
        min = i;
        j = i + 1;
        while (j < TAM)
        {
            if(lista[j] < lista[i])
            {
                min = j;
                aux = lista[i];
                lista[i] = lista[min];
                lista[min] = aux;
                imprimir(TAM, lista);
            }
            j++;
        }
        i++;
    }
}
 
 
void shell(int TAM, int lista[]){
    int intervalo, k, j, i, aux;
    intervalo = TAM / 2;
    while(intervalo > 0)
    {
        for(i = intervalo - 1; i < TAM; i++)
        {
            j = i - intervalo;
            while(j >= 0)
            {
                k = j + intervalo;
                if(lista[k] <= lista[j])
                {
                    aux = lista[j];
                    lista[j] = lista[k];
                    lista[k] = aux;
                }
                else
                    j = 0;
                    j = j - intervalo;
                    imprimir(TAM , lista);
            }
        }
        intervalo = intervalo / 2;
    }
}
 
 
void quickSort(int lista[], int left, int right) {
 
      int i = left, j = right;
      int tmp;
      int pivot = lista[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
          while (lista[i] < pivot){
            i++;
          }
          while (lista[j] > pivot){
            j--;
          }
            if (i <= j) {
 
                  tmp = lista[i];
                  lista[i] = lista[j];
                  lista[j] = tmp;
                  i++;
                  j--;
                  std::cout << "cambio "<<lista[i]<<" por "<<lista[j] << std::endl;
            }
      };
 
      /* recursion */
 
      if (left < j){
          quickSort(lista, left, j);
      }
 
      if (i < right){
          quickSort(lista, i, right);
      }
}
 
 
 
void makeheap ( int lista[ ], int TAM )
{
    int i, val, s, f ;
    for ( i = 1 ; i < TAM ; i++ )
    {
        val = lista[i] ;
        s = i ;
        f = ( s - 1 ) / 2 ;
        while ( s > 0 && lista[f] < val )
        {
            lista[s] = lista[f] ;
            s = f ;
            f = ( s - 1 ) / 2 ;
        }
        lista[s] = val ;
    }
}
 
void heapsort ( int lista[ ], int TAM )
{
    int i, s, f, ivalue ;
    for ( i = TAM - 1 ; i > 0 ; i-- )
    {
        ivalue = lista[i] ;
        lista[i] = lista[0] ;
        f = 0 ;
 
        if ( i == 1 )
            s = -1 ;
        else
            s = 1 ;
 
        if ( i > 2 && lista[2] > lista[1] )
            s = 2 ;
 
        while ( s >= 0 && ivalue < lista[s] )
        {
            lista[f] = lista[s] ;
            f = s ;
            s = 2 * f + 1 ;
 
            if ( s + 1 <= i - 1 && lista[s] < lista[s + 1] )
                s++ ;
            if ( s > i - 1 )
                s = -1 ;
        }
        lista[f] = ivalue ;
    }
}
 
 
void mergesort(int lista[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(lista,low,mid);
        mergesort(lista,mid+1,high);
        merge(lista,low,high,mid);
    }
    return;
}
 
void merge(int lista[], int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (lista[i] < lista[j])
        {
            c[k] = lista[i];
            k++;
            i++;
        }
        else
        {
            c[k] = lista[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = lista[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = lista[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        lista[i] = c[i];
    }
}
 
 
void imprimir(int TAM, int lista[]){
    for (int i=0; i<TAM; i++){
            cout <<lista[i]<<", ";  
    }
    cout <<"\n";
}
 
//><
