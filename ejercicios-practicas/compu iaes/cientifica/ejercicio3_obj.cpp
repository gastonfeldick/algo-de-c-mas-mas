#include <iostream>
using namespace std;

class cliente{
    private:
        string nombre,apellido,direccion;
        float porcentaje,  montototal,  montoadeudado;
    public:
        cliente();
        cliente(string,string,string,float,float,float);
        int controlporc(float); 


        string getnombre();
        string getapellido();
        string getdireccion();
        float getporcentaje();
        float getmontotal();
        float getmontoadeudado();
        void setnombre(string);
        void setapellido(string);
        void setdireccion(string);
        void setporcentaje(float);
        void setmontotal(float);
        void setmontoadeudado(float);

};

cliente::cliente(){
    nombre="";
    apellido="";
    direccion="";
    porcentaje=0;
    montototal=0;
    montoadeudado=0;
}

cliente::cliente(string n,string a,string d,float p,float t,float ade){
    nombre=n;
    apellido=a;
    direccion=d;
    porcentaje=p;
    montototal=t;
    montoadeudado=ade;
}

string cliente::getnombre(){
    return nombre;
}
string cliente::getapellido(){
    return apellido;
}
string cliente::getdireccion(){
    return direccion;
}
float cliente::getmontoadeudado(){
    return montoadeudado;
}
float cliente::getmontotal(){
    return montototal;
}
float cliente::getporcentaje(){
    return porcentaje;
}
void cliente::setnombre(string n){
    nombre=n;
}
void cliente::setapellido(string a){
    apellido=a;
}
void cliente::setdireccion(string d){
    direccion=d;
}
void cliente::setmontotal(float t){
    montototal=t;
}
void cliente::setmontoadeudado(float ade){
    montoadeudado=ade;
}
void cliente::setporcentaje(float p){
    porcentaje=p;
}

int controlporc(float c){
    int bar=0;
    if (c<=60){
        bar=1;
    }
    return bar;
} 

int main(){
    cliente obj;
    cliente obj2("juan","feldick","ceibo",22,1200,1333);
    
    int i; 
    string nom,ape,dir;
    float por,total,adeu;
    cliente vecobj[3];

    cout<<"\ningrese nombre ";
    cin>>nom;
    vecobj[0].setnombre(nom);
    cout<<"\ningrese apellido ";
    cin>>ape;
    vecobj[0].setapellido(ape);
    cout<<"\ningrese direccion ";
    cin>>dir;
    vecobj[0].setdireccion(dir);

    cout<<"\ningrese porcentaje";
    cin>>por;
    vecobj[0].setporcentaje(por);
    controlporc(por); 

    cout<<"\ningrese monto total";
    cin>>total;
    vecobj[0].setmontotal(total);
    
    
    return 0;
}