#include <iostream>

using namespace std;

int main(){
   
    int cantNumeros=5;
    int numeros[cantNumeros];
   
    for(int i=0; i<cantNumeros; i++){
        //numeros[i]=i+1;
        cout<<"Ingrese el dato "<<i+1<<": "<<endl;
        cin>>numeros[i];
    }
   
    //Mostrar el contenido de un arreglo
    cout<<"Los numeros ingresados son: "<<endl;
    for (int i=0; i<cantNumeros; i++){
        cout<<numeros[i]<<endl;
    }
   

return 0;
}

