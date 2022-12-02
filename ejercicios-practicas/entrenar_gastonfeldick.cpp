#include <iostream>

using namespace std;


struct alumnos{
    char nombre[20], apellido[20];
    float promedio;
};




alumnos cargar(alumnos);
alumnos vector[20];
int controlar(float);
int calcular(int); //retorna una posicion 

void mostrar(int);


int main(){
    
    int i,cant,mayor=0,aux=0,pos;
    cout<<"ingrese la cantidad de alumnos a cargar";
    cin>>cant;
    
    for(i=0;i<cant;i++){
        vector[i]=cargar(vector[i]);
    }

    pos=calcular(cant);
    mostrar(pos);
    
    return 0;
}

alumnos cargar(alumnos v){
    cout<<"ingrese apellido\n";
    cin.getline(v.apellido,20);
    cin.getline(v.apellido,20);
    cout<<"ingrese nombre\n";
    cin.getline(v.nombre,20);
    cout<<"ingrese promedio\n";
    cin>>v.promedio;
    
    while(controlar(v.promedio)==0){
        cout<<"\nPromedio fuera de rango vuelva a ingresas\n";
        cin>>v.promedio;
    }
    return(v);
    
}

int controlar(float n){
    int bar=0;
    if ( n>=1 && n<=10){
        bar=1;
    }
    return bar;
    
}

int calcular(int cant){
    int i,max=0,pos;
    for ( i = 0; i < cant;i++){
        if(vector[i].promedio>=max){
            max=vector[i].promedio;
            pos=i;
        }
    }
    return pos;
}

void mostrar(int p){
    cout<<"\nel promedio maximo es de: "<<vector[p].apellido;
    cout<<" "<<vector[p].nombre;
    cout<<" Promedio="<<vector[p].promedio;
}