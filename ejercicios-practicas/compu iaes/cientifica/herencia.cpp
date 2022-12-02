#include <iostream>
using namespace std;

class persona{
    private: //protected
        string nombre;
    public:
        persona();
        persona(string);

};

class estudiante: public persona{ //hereda de la clase persona
    private:
        string carrera;
    public:
        estudiante();
        estudiante(string,string);

};

estudiante::estudiante(string n, string c){ //primera forma
    persona(n);
    carrera=c;
}

estudiante::estudiante(string n, string c):persona(n){ //segunda
    carrera=c;
}




int main(){
    //clase padre.




}

