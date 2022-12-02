#include <iostream>

using namespace std;
/*
//clase: un conjunto de carc 
//metodos(FUNCIONES) y atributos  
//herencia
//polimorfismo la misma clase q se ve diferente

*/

class persona{
    //encapsulamiento: public,private,protected
    private:
        //atributos
        string nombre;
        int edad;
    public:
        //metodos
        persona(string,int); //constructor
        persona();
        void mostrar();
        
};

persona::persona(){
    nombre="vacio";
    edad=0;
}
persona::persona(string n, int e){
    nombre=n;
    edad=e;
}
void persona::mostrar(){
    cout<<"\nNombre obj:"<<nombre;
    cout<<"\nEdad obj:"<<edad;
}


int main(){

    string nom;
    int ed;
    persona p1; //p1("Juan",20)
    
    cout<<"\nIngrese nombre";
    cin>>nom;
    cout<<"\nIngrese Edad";
    cin>>ed;

    persona p2(nom,ed);

    p1.mostrar();
    p2.mostrar();

    return 0;
}