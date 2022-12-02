#include <iostream>
#include "cajeroclass.cpp"
#include <fstream>
using namespace std;


int main(){
  int aux=-1;
  string pass,fech;
  cajeroclass user("1234","",0,0,0);
  cout<<"Ingrese su contrasena\n";
  cin>>pass;
  double montoaux;
  
  if(user.validar(pass)==1){
    cout<<"correcto\n";
    cout<<"Ingrese fecha de operacion";
    cin>>fech;
    user.setfechaop(fech);
    user.p.setnombre("Gaston");
    user.p.setapellido("Feldick");
    user.primeraescritura();
    while(aux!=0){
      cout<<"1. Deposito\n2.Extraccion\n3.Consulta de saldo\n4.movimiento de cuenta\n\n0.Salir\n";
      cin>>aux;
      #ifdef _WIN32
        system("cls");  //windows
      #else
        system("clear"); //linux
      #endif
      switch(aux){
      case 1://deposito
        cout<<"\nCuanto desea depositar?\n";
        cin>>montoaux;
        user.setmonto(montoaux);
        user.deposito();
        user.escritura(0);


        break;
      case 2://extraccion
        cout<<"\nCuanto desea extraer?\n";
        cin>>montoaux;
        user.setmonto(montoaux);
        if(user.controlar()==1){
          cout<<"Extrayendo\n";
          user.extraccion();
          user.escritura(1);
        }else{
          cout<<"Monto superior al saldo, repita operacion\n";
        }
        break;
      case 3:
        cout<<"Su saldo es"<<user.getsaldo();
        cout<<"\n";
        break;
      case 4:
        user.lectura();
        cout<<"\n";
        break;
      default:
        cout<<"saliendo\n";
        
        break;
      }
    }
  }
  
  return 0;
}

