#include <iostream>
#include <fstream>
using namespace std;

class persona{
    private:
        string nombre, apellido,fechanac; 
    public:
        
        persona();
        persona(string,string,string);
        string getnombre();
        string getapellido();
        string getfechanac();
        
        void setnombre(string);
        void setapellido(string);
        void setfechanac(string);
        
};

persona::persona(){
    nombre="";
    apellido="";
    fechanac="";
    
}
persona::persona(string n ,string a ,string f){
    nombre=n;
    apellido=a;
    fechanac=f;
}
string persona::getnombre(){
    return nombre;
}
string persona::getapellido(){
    return apellido;
}
string persona::getfechanac(){
    return fechanac;
}
void persona::setnombre(string aux){
    nombre=aux;
}
void persona::setapellido(string aux){
    apellido=aux;
}
void persona::setfechanac(string aux){
    fechanac=aux;
}
/*Contraseña.
• Número de cuenta.
• Fecha operación. (tipo string o char)
• Monto (depositado o a extraer)
• Saldo.
*/
class cajeroclass{
    private:
        string contrasena,fechaop;
        long  numcuenta;
        double monto;
        
        double saldo;
        fstream arch;
    public:
        persona p;
        cajeroclass();
        cajeroclass(string,string,long,double,double);
        string getcontrasena();
        string getfechaop();
        long getnumcuenta();
        double getmonto();
        double getsaldo();
        void setcontrasena(string);
        void setfechaop(string);
        void setnumcuenta(long);
        void setmonto(double);
        void setsaldo(double);

        int validar(string);
        void deposito();
        void extraccion();
        int controlar();

        void escritura(int);
        void lectura();
        void primeraescritura();
};
cajeroclass::cajeroclass(){
    contrasena="1234";
    fechaop="";
    numcuenta=0;
    monto=0;
    saldo=0;
}
cajeroclass::cajeroclass(string c,string f,long numc,double m,double s){
    contrasena=c;
    fechaop=f;
    numcuenta=numc;
    monto=m;
    saldo=s;
}

string cajeroclass::getcontrasena(){
    return contrasena;
}
string cajeroclass::getfechaop(){
    return fechaop;
}
long cajeroclass::getnumcuenta(){
    return numcuenta;
}
double cajeroclass::getmonto(){
    return monto;
}
double cajeroclass::getsaldo(){
    return saldo;
}
void cajeroclass::setcontrasena(string aux){
    contrasena=aux;
}
void cajeroclass::setfechaop(string aux){
    fechaop=aux;
}
void cajeroclass::setnumcuenta(long aux){
    numcuenta=aux;
}
void cajeroclass::setmonto(double aux){
    monto=aux;
}


int cajeroclass::validar(string c){
    int bar=0;
    if(c==contrasena){
       bar=1; 
    }
    return bar;
}

void cajeroclass::deposito(){
    saldo=monto+saldo;
}

void cajeroclass::extraccion(){
    saldo=saldo-monto;
}

int cajeroclass::controlar(){
    int aux=0;
    if(monto<=saldo){
        aux=1;
    }
    return aux;
}


void cajeroclass::lectura(){
    
    arch.open("archivito.txt",ios::in);

    string r;
    while (!arch.eof()){
         getline(arch,r);
         cout<<r<<endl;
    }
    
    arch.close();
}

void cajeroclass::escritura(int i){
    arch.open("archivito.txt",ios::app);

    if(i==0){ //deposito
        
        arch<<"deposito: "<<monto<<endl;
        
    }else{ //extraccion

        arch<<"extraccion: "<<monto<<endl;
    }

    arch.close();
}
void cajeroclass::primeraescritura(){
    arch.open("archivito.txt",ios::out);
    arch<<"Apellido: "<<p.getapellido()<<endl;
    arch<<"Nombre:   "<<p.getnombre()<<endl;
    arch<<"Fecha de operacion: "<<fechaop<<endl;
    arch.close();
}