#include <iostream>
#include "cajeroclass.cpp"
#include <fstream>
using namespace std;

void escritura();
void lectura();
int main(){

    
    escritura();
    lectura();

}

void lectura(){
    fstream per;
    per.open("archivito.txt",ios::in);

    string r;
    while (!per.eof()){
         getline(per,r);
         cout<<r<<endl;
    }
    
    per.close();
}

void escritura(){
    fstream per;
    per.open("archivito.txt",ios::app);
    per<<" aqui toy"<<endl;
    per.close();
}