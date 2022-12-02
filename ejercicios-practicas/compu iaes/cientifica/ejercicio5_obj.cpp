#include <iostream>

using namespace std;

class persona{
    private:
        unsigned long int telefono;
        string nombre, apellido;
    public:
        persona();
        persona(unsigned long int,string,string);
        
        void settelefono(unsigned long int);
        void setnombre(string);
        void setapellido(string);
        unsigned long int gettelefono();
        string getnombre();
        string getapellido();
};
persona::persona(){
    telefono=0;
    nombre="";
    apellido="";
}
persona::persona(unsigned long int t,string n,string a){
    telefono=t;
    nombre=n;
    apellido=a;
}
void persona::settelefono(unsigned long int t){
    telefono=t;
}
void persona::setapellido(string a){
    apellido=a;
}
void persona::setnombre(string n){
    nombre=n;
}
unsigned long int persona::gettelefono(){
    return telefono;
}
string persona::getapellido(){
    return apellido;
}
string persona::getnombre(){
    return nombre;
}

//Crear una clase Cuenta, con número Cuenta, saldo y propietario. 
//El propietario es un objeto tipo Persona.

class cuenta{
    private:
        int numero;
        float saldo;
        persona propietario;
    public:
        cuenta();
        cuenta(int,float,string,string,unsigned long int);
        void setnumero(int);
        void setsaldo(float);
        int getnumero();
        float getsaldo(); 
};

cuenta::cuenta(){
    numero=0;
    saldo=0;
}
cuenta::cuenta(int n,float s,string nom,string ape,unsigned long int tel){
    numero=n;
    saldo=s;
    propietario.setapellido(ape);
    propietario.setnombre(nom);
    propietario.settelefono(tel);
}

void cuenta::setnumero(int n){
    numero=n;
}
void cuenta::setsaldo(float f){
    saldo=f;
}
int cuenta::getnumero(){
    return(numero);
}
float cuenta::getsaldo(){
    return(saldo);
}





int main(){

int cuent;
unsigned long int tel;
float sal;
string nom,ape;

cout<<" Ingrese nombre";
cin>>nom;
cout<<"\nIngrese apellido";
cin>>ape;
cout<<"\nIngrese Numero de telefono";
cin>>tel;
cout<<"\nIngrese Numero de cuenta";
cin>>cuent;
cout<<"\nIngrese saldo";
cin>>sal;

cuenta obj(cuent,sal,nom,ape,tel);



}