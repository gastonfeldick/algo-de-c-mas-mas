#include<iostream>
#include<stdlib.h>

using namespace std;

 class persona  {
 	private:
		string nombre;
		string apellido;
	public:
		 persona();
         persona(string , string);
         string getnombre();
         void setnombre( string  );
         string getapellido();
         void setapellido( string  );
         void mostrar();
 };
 persona::persona()   {
    	//vac�o porque son solo cadenas
 }
 persona::persona(string nom, string ape) {
    	nombre=nom;
    	apellido=ape;
}
string  persona::getnombre()    {
      return nombre;
}
   
void  persona::setnombre( string nom )    {
      nombre = nom;
}
string  persona::getapellido()   {
      return apellido;
}
   
void  persona::setapellido( string ape )  {
      apellido = ape;
}

 void persona::mostrar(){
      cout<< "Nombre: " <<getnombre() << "\n"<< "Apellido: " << getapellido();
 } 
	 

class  cuenta {
	private:
		float monto;
   		persona propietario;
    public:
        cuenta (float, string, string);
        void setmonto(float);
        float getmonto();
        void transaccion(float);
        void mostrar();
};
cuenta::cuenta( float m, string n , string a) {
     	monto= m;
     	propietario.setnombre(n);
     	propietario.setapellido(a);
}
     
void cuenta::setmonto(float m){
     	monto=m;
}

float cuenta::getmonto(){
     	return monto;
}

void cuenta::transaccion(float deposito)   {
     monto=monto + deposito;
}
 
void cuenta::mostrar()   {
     propietario.mostrar();
	 cout<<"\n"<< "Monto: " << getmonto();
} 
	 
 int main() {
  	cuenta cliente(1000,"JUAN" , "PEREZ");
   	cliente.transaccion(2000);
    cliente.mostrar();
    return 0;	
}