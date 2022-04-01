#include <iostream>
#include <windows.h>
#include "LeerArreglo.h"

using namespace std;
#define maximo 100

void quicksort(int pivote[], int izq, int der);

int main (){
    int pivote[maximo], n;
    system("cls");
    do{
    cout << "=======================================" << endl;
    cout << "\tOrdenamiento QuickSort" << endl;
    cout << "=======================================" << endl;
    cout << " \nCantidad de numeros a ingresar: ";
    cin >> n;
    cout << "\n";
        if(n <= 0 || n > maximo){
            cout<<"Debe ingresar un valor mayor a 0 y menor a "<< maximo << endl;
            Sleep(1000);
            cout<<"\nReinicando programa, espere un momento..." << endl;
            Sleep(4000);
            system("cls");
        }
        else{
            leeCadena(n, pivote); // <--- leemos la cadena.
            quicksort(pivote, 0, n - 1); // <-- Ordenamos la cadena.
            muestraCadena(n, pivote); // <-- Mostramos la cadena ordenada.
        }
    }
    while(n <= 0 || n > maximo);
}

void quicksort(int pivote[], int izq, int der){
int i, j, x, aux;
i = izq; 
j = der; 
x = pivote[(izq + der) / 2]; 

    do{ 
        while( (pivote[i] < x) && (j <= der)){ 
            i++;
        } 
 
        while( (x < pivote[j]) && (j > izq)){ 
            j--;
        }
 
        if(i <= j){ 
            aux = pivote[i];
            pivote[i] = pivote[j];
            pivote[j] = aux;
            i++;
            j--;
        }
         
    }while(i <= j); 
 
    if(izq < j) 
        quicksort(pivote, izq, j); 

    if(i < der) 
        quicksort(pivote, i, der); 
}