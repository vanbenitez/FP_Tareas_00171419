#include <iostream>

using namespace std;

int main(){
   
    float cantN,prom=0,acum=0;
   
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>cantN;
   
    for(int i=0; i<cantN; i++){
       
        int notas[i];  
        cout<<"Ingrese el dato: "<<endl;
        cin>>notas[i];
        acum=notas[i]+acum;
       
    }
   
    prom=acum/cantN;
   
    cout<<"Promedio: "<<prom<<endl;
   
return 0;
}