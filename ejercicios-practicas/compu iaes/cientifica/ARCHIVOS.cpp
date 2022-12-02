#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;



class persona
{
private:
int edad;
string nombre;
fstream alu; //clase para archivos de texto o bin 
public:
persona();
void leerdato();
void cargar();
int abrir(char[]);
void cerrar();
int salida(char[]);
void mostrar();
};
persona::persona()
{
edad=0;
}
void persona::leerdato()
{
cout << "nombre: ";
cin>>nombre;
cout << "edad: ";
cin >> edad;
}
int persona::abrir(char arc[])
{
int res=0;
alu.open(arc, ios::out); // out sobreescribe, app agrega. in 
if (!alu)
cout << "se produjo un error... ";
else {
res=1;
}
return res;
}
void persona::cargar()
{
alu<< nombre ;
alu << " ";
alu << edad << "\n";
}
void persona::cerrar()
{
alu.close();
}

int persona::salida(char arc[])
{
int res=0;
alu.open(arc, ios::in);
if (!alu)
cout << "ERROR NO SE PUDO ACCEDER";
else
res=1;
return res;
}
void persona::mostrar()
{
char datos;
while(alu.get(datos))
{
cout << datos;
}
}
int main()
{

int i, x;
char datos, archivo[10];
persona a;
cout << "Ingrese el nombre del archivo...";
cin>>archivo;
if (a.abrir(archivo))
{
for(x=0;x<5;x++)
{
a.leerdato();
a.cargar();
}
}
a.cerrar();
if(a.salida(archivo)){
a.mostrar();
a.cerrar();

return 0;
}
}