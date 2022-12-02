#include <iostream>

using namespace std;

class rectangulo{
    private:
        float lado,alto;
    public:
        void setlado(float);
        void setalto(float);
        float getlado();
        float getalto();
        rectangulo();
        rectangulo(float,float);
        float area();
        float perimetro();
};

void rectangulo::setalto(float a){
    alto=a;
}
void rectangulo::setlado(float l){
    lado=l;
}
float rectangulo::getalto(){
    return alto;
}
float rectangulo::getlado(){
    return lado;
}

rectangulo::rectangulo(float l, float a){
    lado=l;
    alto=a;
}

rectangulo::rectangulo(){
    lado=0;
    alto=0;

}


float rectangulo::area(){
    return (lado*alto);
}

float rectangulo::perimetro(){
    return (lado+lado+alto+alto);
}

int main(){

    rectangulo r1(3,9);
    cout<<"\n";
    cout<<r1.getlado();
    cout<<"\n";


    r1.setalto(200);
    cout<<"\n";
    cout<<r1.getalto();
    cout<<"\n";


    return 0;

}