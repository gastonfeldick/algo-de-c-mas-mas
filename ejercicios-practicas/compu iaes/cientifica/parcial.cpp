#include <iostream>

//Firma Feldick Gastón

using namespace std;

int control(int,int,int);
int finalizacion(int,int);
void mostrar(int,int,int);

int main(){
    int hora,min,seg,dur,fin;
    cout<<"Ingrese la hora de inicio: ";
    cin>>hora;
    

    while(hora!=-1){
        cout<<"Ingrese minutos: ";
        cin>>min;
        cout<<"Ingrese segundos: ";
        cin>>seg;

        while (control(hora,min,seg)==0){
            cout<<"Ingreso mal la hora vuelva a ingresar";
            cin>>hora;
            cin>>min;
            cin>>seg;
        }  
        
        cout<<"\n ingrese la duracion de la actividad: ";
        cin>>dur;
        fin=finalizacion(hora,dur);
        mostrar(fin,min,seg);




        cout<<"\nexcelente";
        cout<<"\nVuelva a ingrese la hora de inicio, ingrese -1 para salir";
        cin>>hora;

        
    }
    
    return 0;
}

int control(int h,int m,int s){
    int bar=0;
    if(h>=0 && h<=23 && m>=0 && m<=59 && s>=0 &&m<=59){
        bar=1;
    }
    return bar;
}

int finalizacion(int h,int d){
    int f;
    f=h+d;
    if(f>23){
        f=f-24;
    }
    return f;
}

void mostrar(int f,int m,int s){
    if (f<=12){
        cout<<f<<":"<<m<<":"<<s<<" am";
    }else{
        f=f-12;
        cout<<f<<":"<<m<<":"<<s<<" pm";
    }
    
}
