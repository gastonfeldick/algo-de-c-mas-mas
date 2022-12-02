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
        i++;
    }

    pos=calcular(cant);
    mostrar(pos);
    i=0;
    cout<< "/n"<<vector[i].apellido <<" "<< vector[i].nombre<<" "<< vector[i].promedio;

    return 0;
}

alumnos cargar(alumnos v){
    cin.getline(v.apellido,20);
    cin.getline(v.nombre,20);
    cin.getline(v.nombre,20);
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
    return pos;
    
}

void mostrar(int p){
    vector[i].
}