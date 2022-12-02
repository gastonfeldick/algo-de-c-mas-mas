#include <iostream>
#include <string.h>


using namespace std;

int main(){
	char cadena[30],aux[30];
	int i,j,longitud,bar=0,tam;
	cin.getline(cadena,30,'\n');
	strcpy(cadena,aux);
	longitud=strlen(cadena);
	j=longitud-1;

	for(i=0;i<longitud;i++){
		aux[i]=cadena[j];
		j--;
	}
	if(strcmp(cadena,aux)==0){
		bar=1;
	}
	if(bar==1){
		cout<<"es polindromo";
	}else{
		cout<<"no es polindromo";
	}






	return 0;
}
