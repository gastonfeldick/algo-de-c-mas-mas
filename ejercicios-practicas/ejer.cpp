#include <iostream>
using namespace std;
	int main(){
	
	int i,a,count,mayor;
	i=1;
	cout << i <<" ingrese un numero";
	cin >> a ;
	mayor=a;
	for(i=1;i<=10;i++){
		if(a>=mayor){
			mayor=a;
		}
		
		cout << i << " ingrese un numero";
		cin >> a ;	
	}
	
	cout << "el mayor es"<< mayor;
	return 0; 
}
