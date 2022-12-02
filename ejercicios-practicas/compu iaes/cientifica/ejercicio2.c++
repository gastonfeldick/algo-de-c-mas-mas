#include <iostream>
#include <string.h>
using namespace std;

float vec[20];
void cargar();
void mostrar();
void burbuja();
float mostrarpos(int);
void borrar();
int main(){
    int pos;
    cargar();
    mostrar();
    burbuja();
    mostrar();
    cout<<"\ningrese una posicion para mostrar";
    cin>>pos;
    cout << "\nposicion"<< mostrarpos(pos-1);
    return 0;
}

void mostrar(){
    int i;
    cout<<"\n";
    for(i=0;i<20;i++){
        cout<<" "<<vec[i]; 
    }
}
void cargar(){
    int i;
    for(i=0;i<20;i++){
        cout<<"\ningrese pos:"<<i<<"\n";
        cin>>vec[i];
    }
    
}
void burbuja(){ 
    int i,j;
    float k;

    for (i=1; i<20; i++) { 
        j=i; 
            while (j>=0 && vec[j]<vec[j-1]) { 
                k=vec[j]; 
                vec[j]=vec[j-1]; 
                vec[j-1]=k; 
                j--; 
            } 
    }
} 

float mostrarpos(int p){

    return (vec[p]);

}