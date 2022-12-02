#include <iostream>

using namespace std;

class fecha{
    private:
        int dia,mes,anio;
    public:
        fecha();
        fecha(int,int,int);
        
        void setdia(int);
        void setmes(int);
        void setanio(int);
        int getdia();
        int getmes();
        int getanio();
        int controld();
        int controlm();
        int controla();
        void controltrolal(int,int,int);
};

fecha::fecha(){
    dia=0;
    mes=0;
    anio=0;
}

fecha::fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anio=a;
}
void fecha::setdia(int d){
    dia=d;
    
}
void fecha::setmes(int m){
    mes=m;
    
}
void fecha::setanio(int a){
    anio=a;
    
}
int fecha::getdia(){
    return dia;
}
int fecha::getmes(){
    return mes;
}
int fecha::getanio(){
    return anio;
}


class alumno{
    private:
        string nombre, apellido, lugar;
        fecha nac;
    public:
        alumno();
        alumno(string,string,string,int,int,int);
        void setnombre(string);
        void setapellido(string);
        void setlugar(string);
        string getnombre();
        string getapellido();
        string getlugar();
        void mostrar();
};
alumno::alumno(){
}
alumno::alumno(string nom,string ape,string lu,int d, int m,int a){
    nombre=nom;
    apellido=ape;
    lugar=lu;
    nac.setdia(d);
    nac.setmes(m);
    nac.setanio(a);
}

void alumno::setnombre(string a){
    nombre=a;
}
void alumno::setapellido(string a){
    apellido=a;
}
void alumno::setlugar(string a){
    lugar=a;
}
string alumno::getapellido(){
    return apellido;
}
string alumno::getnombre(){
    return nombre;
}
string alumno::getlugar(){
    return lugar;
}
void alumno::mostrar(){
    cout<<"nombre " << nombre <<" " <<apellido <<" " <<lugar;
    cout<<"\nfecha"<<nac.getdia()<<nac.getmes()<<nac.getanio();

}

int main(){

    
    
    string nom,ape,lu;
    int d,m,a;
    cout<<"ingrese nombre";
    cin>>nom;
    cout<<"ingrese apellido";
    cin>>ape;
    cout<<"ingrese lugar";
    cin>>lu;
    cout<<"ingrese fehca";
    cin>>d;
    cin>>m;
    cin>>a;

    alumno obj1(nom,ape,lu,d,m,a);
    
    cout<<"\n";

    obj1.mostrar();

    

}
        
        

    

