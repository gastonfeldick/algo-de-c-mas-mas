#include <iostream>
#include <fstream>
using namespace std;

class cuenta{
    protected:
        float cc, pf, ca;
        int dias;
        string recibosueldo,monotributo,boletadeservicio;
        /*string cccc, pfpf, caca;"*/
    public:
        cuenta();
        cuenta(float,float,float,int);
        void depocc(float);
        void extraccioncc(float);
        void depopf(float);
        void extraccionpf(float);
        void depoca(float);
        void extraccionca(float);
    
};

cuenta::cuenta(){
    cc=0;
    pf=0;
    ca=0;
    dias=0;
    /*
    cccc="cuenta corriente";
    pfpf="plazo fijo";
    caca="caja de ahorro";*/
}
cuenta::cuenta(float c,float p,float x, int d){
    cc=c;
    pf=p;
    ca=x;
    dias=d;
}

void cuenta::depocc(float c){
    int aux;
    if(recibosueldo!=""||monotributo!=""&&boletadeservicio!=""){
        cc=cc+c;
    }else{
        cout<<"\nIngrese \n1.Recibo de sueldo\n2.Monotributo\n";
        cin>>aux;
        if(aux==1){
            cout<<"\nIngrese monto de recibo de sueldo: ";
            cin>>recibosueldo;
        }else if(aux==2){
            cout<<"\nIngrese monto de Monotributo: ";
            cin>>monotributo;
        }
        cout<<"\nIngrese boleta de servicio: ";
        cin>>boletadeservicio;
        cc=cc+c;
    }
    
    
}

void cuenta::extraccioncc(float x){
    float aux;
    aux=cc*1.20;
    if(x<=aux){
        cout<<"\nExtrayendo";
        cc=cc-x;
    }else{
        cout<<"Limite permitido superado, repita la operacion cc";
    }
}

void cuenta::depopf(float x){
    int aux,d;
    if(recibosueldo!=""||monotributo!=""&&boletadeservicio!=""){
        pf=pf+x;
    }else{
        cout<<"\nIngrese \n1.recibo de sueldo\n2.monotributo\n";
        cin>>aux;
        if(aux==1){
            cout<<"\nIngrese monto de recibo de sueldo: ";
            cin>>recibosueldo;
        }else if(aux==2){
            cout<<"\nIngrese monto de Monotributo: ";
            cin>>monotributo;
        }
        cout<<"\nIngrese boleta de servicio: ";
        cin>>boletadeservicio;
        pf=pf+x;
    }
    cout<<"\nIngrese la cantidad de dias: ";
    cin>>d;
    dias=d;
}

void cuenta::extraccionpf(float x){
    int cantidad;
    float total;
    cout<<"Ingrese la cantidad de dias transcurridos: ";
    cin>>cantidad;
    
    if(cantidad>=dias){
        total=(pf*0.02*dias)+pf;
    }else{
        total=pf;
    }

    if(x<=total){
        pf=total-x;
    }else{
        cout<<"Limite permitido superado, repita la operacion pf";
    }
}

void cuenta::depoca(float x){
    float aux;
    if(recibosueldo!=""){
        ca=ca+x;
    }else{
        cout<<"\nIngrese monto de recibo de sueldo: ";
        cin>>recibosueldo;
        ca=ca+x;
    }

}

void cuenta::extraccionca(float x){
    if(x<=ca){
        ca=ca-x;
    }else{
        cout<<"Limite permitido superado, repita la operacion ca";
    }
}

class fecha{
    private:
        int dia,mes,anio;
    public:
        fecha();
        fecha(int,int,int);
        int getdia();
        int getmes();
        int getanio();
        void setdia(int);
        void setmes(int);
        void setanio(int);
};

fecha::fecha(){
    dia=0;
    mes=0;
    anio=0;
}
fecha::fecha(int d,int m, int a){
    dia=d;
    mes=m;
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
void fecha::setdia(int x){
    dia=x;
}
void fecha::setmes(int x){
    mes=x;
}
void fecha::setanio(int x){
    anio=x;
}

class persona{
    private:
        string nombre, apellido; 
        fecha fechanac;
    public:
        
        persona();
        persona(string,string,string);
        string getnombre();
        string getapellido();
        
        
        void setnombre(string);
        void setapellido(string);
        
        
};

persona::persona(){
    nombre="";
    apellido="";
    
    
}
persona::persona(string n ,string a ,string f){
    nombre=n;
    apellido=a;
}
string persona::getnombre(){
    return nombre;
}
string persona::getapellido(){
    return apellido;
}

void persona::setnombre(string aux){
    nombre=aux;
}
void persona::setapellido(string aux){
    apellido=aux;
}


class cajeroclass : public cuenta{
    private:
        string contrasena;
        
        long  numcuenta;
        double monto;
        
        double saldo;
        fstream arch;
        fstream password;
    public:
        fecha fechaop;
        persona p;
        cajeroclass();
        cajeroclass(float,float,float,int,string,long,double,double);
        string getcontrasena();
        
        long getnumcuenta();
        double getmonto();
        double getsaldo();
        double leersaldo(int);
        void setcontrasena(string);
        void setnumcuenta(long);
        void setmonto(double);
        void setsaldo(double);

        int validar(string);
        void deposito(int);
        void extraccion(int);
        int controlar();

        void escritura(int,int);
        void lectura(int);
        void primeraescritura();
        void cambiarconstrasena();
};
cajeroclass::cajeroclass(){
    contrasena="1234";
    numcuenta=0;
    monto=0;
    saldo=0;
}
cajeroclass::cajeroclass(float c1,float c2,float c3,int d,string c,long numc,double m,double s):cuenta(c1,c2,c3,d){
    contrasena=c;
    numcuenta=numc;
    monto=m;
    saldo=s;
}

string cajeroclass::getcontrasena(){
    return contrasena;
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
double cajeroclass::leersaldo(int tipo){
    if(tipo==1){
        saldo=cc;
    }else if(tipo==2){
        saldo=pf;
    }else if(tipo==3){
        saldo=ca;
    }
    return saldo;
}
void cajeroclass::setcontrasena(string aux){
    contrasena=aux;
}

void cajeroclass::setnumcuenta(long aux){
    numcuenta=aux;
}
void cajeroclass::setmonto(double aux){
    monto=aux;
}


int cajeroclass::validar(string c){
    int bar=0;
    string r;
    

    password.open("contrasena.txt",ios::in);
    if(!password.fail()){
        while(!password.eof()){
            //cout<<"bucle";
            getline(password,r);
        }
        contrasena=r;
        password.close();

    }else{
        //cout<<"estoy";
        password.open("contrasena.txt",ios::out);
        password<<"1234";
        password.close();
        contrasena="1234";
    }


    if(c==contrasena){
       bar=1; 
    }
    return bar;
}

void cajeroclass::deposito(int tipo){
    if(tipo==1){
        depocc(monto);
        saldo=cc;
    }else if(tipo==2){
        depopf(monto);
        saldo=pf;
    }else if(tipo==3){
        depoca(monto);
        saldo=ca;
    }
    
}

void cajeroclass::extraccion(int tipo){
    if(tipo==1){
        extraccioncc(monto);
        saldo=cc;
    }else if(tipo==2){
        extraccionpf(monto);
        saldo=pf;
    }else if(tipo==3){
        extraccionca(monto);
        saldo=ca;
    }
}

int cajeroclass::controlar(){
    int aux=0;
    if(monto<=saldo){
        aux=1;
    }
    return aux;
}


void cajeroclass::lectura(int tipo){


    if(tipo==1){
        arch.open("cuentacorriente.txt",ios::in);
    }else if(tipo==2){
        arch.open("plazofijo.txt",ios::in);
    }else{
        arch.open("cajadeahorro.txt",ios::in);
    }
    

    string r;
    while (!arch.eof()){
         getline(arch,r);
         cout<<r<<endl;
    }
    
    arch.close();
}

void cajeroclass::escritura(int i,int tipo){

    if(tipo==1){
        arch.open("cuentacorriente.txt",ios::app);
    }else if(tipo==2){
        arch.open("plazofijo.txt",ios::app);
    }else{
        arch.open("cajadeahorro.txt",ios::app);
    }
    

    if(i==0){ //deposito
        
        arch<<"deposito: "<<monto<<endl;
        
    }else{ //extraccion

        arch<<"extraccion: "<<monto<<endl;
    }

    arch.close();
}
void cajeroclass::primeraescritura(){
    arch.open("cuentacorriente.txt",ios::out);
    arch<<"Apellido: "<<p.getapellido()<<endl;
    arch<<"Nombre:   "<<p.getnombre()<<endl;
    arch<<"Fecha de operacion: "<<fechaop.getdia()<<"/"<<fechaop.getmes()<<"/"<<fechaop.getanio()<<endl;
    arch.close();

    arch.open("plazofijo.txt",ios::out);
    arch<<"Apellido: "<<p.getapellido()<<endl;
    arch<<"Nombre:   "<<p.getnombre()<<endl;
    arch<<"Fecha de operacion: "<<fechaop.getdia()<<"/"<<fechaop.getmes()<<"/"<<fechaop.getanio()<<endl;
    arch.close();

    arch.open("cajadeahorro.txt",ios::out);
    arch<<"Apellido: "<<p.getapellido()<<endl;
    arch<<"Nombre:   "<<p.getnombre()<<endl;
    arch<<"Fecha de operacion: "<<fechaop.getdia()<<"/"<<fechaop.getmes()<<"/"<<fechaop.getanio()<<endl;
    arch.close();
}

void cajeroclass::cambiarconstrasena(){
    string nueva;
    cout<<"\nIngrese la nueva constrasena";
    cin>>nueva;
    password.open("contrasena.txt",ios::out);
    password<<nueva;
    password.close();
    cout<<"\nLa Contrasena ha sido modificada con exito";
}