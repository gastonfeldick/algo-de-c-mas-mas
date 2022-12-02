#include <iostream>

using namespace std;
//Escriba un programa en C++ que permita
// rellenar una matriz de 6x5, determine y muestre el mayor y el menor de cada columna.
int main(){
	int m[6][5];
	int i,j,mayor,menor;
	i=i+1;
	mayor=0;
	menor=0;
	for (i=0;i<6;i++){
		cout<<"\n";
		for(j=0;j<5;j++){
			m[i][j]=i*j;
			m[0][3]=50;
			cout<<" "<<m[i][j];
			if(m[i][j]>mayor){
				mayor=m[i][j];
			}
			if(m[i][j]<menor){
				menor=m[i][j];
			}
			
		}
	
	}
	cout<<"\n el mayor es: " << mayor;
	cout<<"\n el menor es: " << menor;
	
	
}
