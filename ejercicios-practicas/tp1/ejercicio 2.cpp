#include <iostream>

using namespace std;

int bisiesto(int y){
	int bar=0;
	if((y%4)==0&&(y%100)!=0){
		bar=1;
	}else{
		if((y%400)==0){
			bar=1;
		}
	}
	return bar;
}

/*
Tienen 31 días: Enero, marzo, mayo, julio, agosto, octubre y diciembre.

Tienen 30 días: Abril, junio, septiembre y noviembre.

Tienen 28/29 días: Febrero. */


int dias(int d,int m,int y,int b){
	int res=0;
	res=d-1;
	
	switch(m){
		case 1:
			res=res;
			break;
		case 2:
			res=res+31;
			break;
		case 3:
			res=res+31+28;
			break;
		case 4:
			res=res+31+28+31;
			break;
		case 5:
			res=res+31+28+31+30;
			break;
		case 6:
			res=res+31+28+31+30+31;
			break;
		case 7:
			res=res+31+28+31+30+31+30;
			break;
		case 8:
			res=res+31+28+31+30+31+30+31;
			break;
		case 9:
			res=res+31+28+31+30+31+30+31+31;
			break;
		case 10:
			res=res+31+28+31+30+31+30+31+31+30;
			break;
		case 11:
			res=res+31+28+31+30+31+30+31+31+30+31;
			break;
		case 12:
			res=res+31+28+31+30+31+30+31+31+30+31+30;
			break;
		default:
			cout<< "error";
			break;
	}
	if(b==1&&m>1){
		res++;
	}
	return res;
	
}

int main(){
	int day,month,year,bis;
	
	cout<<"Ingrese la fecha en formato dia, mes, year \n";
	cin>>day >> month >> year;
	bis=bisiesto(year);
	cout<< "cantidad de dias es: " << dias(day,month,year,bis);
	
		
}
