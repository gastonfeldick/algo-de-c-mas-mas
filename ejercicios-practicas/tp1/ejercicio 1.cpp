#include <iostream>

using namespace std;

int main(){
	
	int numeros,moda=0,media=0,cont=0,cont2,notas[30],i,j;
	for(i=0;i<30;i++){
		notas[i]=-1;
	}
	cout <<"Ingrese una calificacion: ";
	cin>> numeros;
	
	while(numeros>0 && numeros<=10){
		notas[cont]=numeros;
		cont++;
		cout <<"\nIngrese una calificacion: ";
		cin>> numeros;
		media=media+numeros;
		
	}
	media=media/cont;
	
	
	cont=0;
	cont2=0;
	
	for(i=0;i<30;i++){
		if(notas[i]!=-1)
			cout<< "\n Notas: "<< notas[i];
	}
	
	
	for(i=0;i<30;i++){
		for(j=0;j<30;j++){
			if(notas[i]==notas[j]&&i!=j&&notas[i]!=-1){
				cont++;
			}
				
		}
		if(cont>cont2){
			cont2=cont;
			moda=notas[i];
		}
		cont=0;
	} 
	
	
	cout<<"\nLa media es igual a: " << media;
	cout<<"\nLa moda es igual a: " << moda;
}
