#include<iostream>
using namespace std;

void leeCadena(int cant, int n[]){
    int i;
    cout << "  ==============================\n" << endl;
    for(i = 0; i < cant; i++){
        cout << "   ==> Ingresa el numero "<< i + 1 << ": ";
        cin >> n[i];
    }
}

void muestraCadena(int cant, int n[]){
    int i;
    cout << "  \n==============================\n" << endl;
    cout << "El arreglo de la cadena es:\n" << endl;
    cout << "| ";
    for(i = 0; i < cant; i++){
        cout << n[i];
        cout << " | ";
    }
    cout << "\n ";
}