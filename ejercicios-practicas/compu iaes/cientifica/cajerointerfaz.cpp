
#include <iostream>
#include "cajeroautomatico.cpp"

using namespace std;

int main(){

    int i=-1;
    while (i!=0){
        cout<<"1. Consultar saldo\n";
        cout<<"2. Extraer\n";
        cout<<"3. Depositar\n";
        cout<<"4. Movimientos de cuenta\n";
        cout<<"5. Mas opciones\n";
        cout<<"0. Salir\n";
        cin>>i;
        
        #ifdef _WIN32
             system("cls");
        #else
            system("clear");
        #endif
    }
    
    

}