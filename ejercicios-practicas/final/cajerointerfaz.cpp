#include <iostream>
#include "cajeroclass.cpp"
#include <fstream>
using namespace std;


int main(){
  int aux=-1, d,m,a, tipocuenta;
  string pass;
  cajeroclass user(0,0,0,0,"1234",0,0,0);
  cout<<"Ingrese su contrasena\n";
  cin>>pass;
  double montoaux;
  while (user.validar(pass)==0){
    #ifdef _WIN32
      system("cls");  //windows
    #else
      system("clear"); //linux
    #endif
    cout<<"Error, Vuelva a Ingrese su contrasena\n";
    cin>>pass;
  }


  if(user.validar(pass)==1){
    
    cout<<"tipo de cuenta:\n";
    cout<<"1. Cuenta corriente\n2. Plazo fijo\n3. Caja de ahorro \n\n0. Salir \n Ingrese: ";
    cin>>tipocuenta;
    #ifdef _WIN32
      system("cls");  //windows
    #else
      system("clear"); //linux
    #endif
    cout<<"correcto\n";
    cout<<"Ingrese fecha de operacion\n";
    cout<<"Dia: ";
    cin>>d;
    cout<<"Mes: ";
    cin>>m;
    cout<<"Anio: ";
    cin>>a;

    user.fechaop.setdia(d);
    user.fechaop.setmes(m);
    user.fechaop.setanio(a);
    user.p.setnombre("Gaston");
    user.p.setapellido("Feldick");
    user.primeraescritura();

    while(tipocuenta>=1&&tipocuenta<=3){
      while(aux!=0){
        cout<<"1. Deposito\n2. Extraccion\n3. Consulta de saldo\n4. movimiento de cuenta\n5. Cambiar contrasena\n\n0. Salir\n";
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
          user.deposito(tipocuenta);
          user.escritura(0,tipocuenta);


          break;
        case 2://extraccion
          cout<<"\nCuanto desea extraer?\n";
          cin>>montoaux;
          user.setmonto(montoaux);
          //if(user.controlar()==1){
            //cout<<"Extrayendo\n";
            user.extraccion(tipocuenta);
            user.escritura(1,tipocuenta);
          /*}else{
            cout<<"Monto superior al saldo, repita operacion\n";
          }*/
          break;
        case 3:
          cout<<"Su saldo es: "<<user.leersaldo(tipocuenta);
          cout<<"\n";
          break;
        case 4:
          user.lectura(tipocuenta);
          cout<<"\n";
          break;
        case 5:
          user.cambiarconstrasena();
          break;
        default:
          cout<<"saliendo\n";
          break;
        }
      }
      #ifdef _WIN32
          system("cls");  //windows
        #else
          system("clear"); //linux
        #endif
      cout<<"tipo de cuenta:\n";
      cout<<"1. Cuenta corriente\n2. Plazo fijo\n3. Caja de ahorro \n\n0. Salir \n Ingrese: ";
      cin>>tipocuenta;
      aux=-1;
    }
  }
  
  return 0;
}

