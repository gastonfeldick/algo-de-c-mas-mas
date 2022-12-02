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
    controld();
}
void fecha::setmes(int m){
    mes=m;
    controlm();
}
void fecha::setanio(int a){
    anio=a;
    controla();
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

int fecha::controld(){
    int aux=0;
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        if(dia>=1&&dia<=31){
            aux=1;
        }
    }
    return aux;
}

int fecha::controlm(){
    int aux=0;
    if(mes>=1&&mes<=12){
        aux=1;
    }
    return aux;
}

int fecha::controla(){
    int aux=0;
    if(anio>=0&&anio<=30000){
        aux=1;
    }
    return aux;
}

int main(){
    fecha obj;
    int d,m,a;
    cin>>d;
    cin>>m;
    cin>>a;

    fecha obj2(d,m,a);
    obj.setdia(21);

    obj.setmes(2);
    obj.setanio(2022);











    return 0;
}