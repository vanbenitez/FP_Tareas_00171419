#include <iostream>

using namespace std;

int main(){
    float peso, k, altura, imc;
   
    cout<<"Calcular el indice de masa corporal IMC"<<endl;
   
    cout<<"Ingrese su peso: "<<endl;
    cin>>peso;
   
    cout<<"Ingrese su altura: "<<endl;
    cin>>altura;

    k=peso/2.2046;
   
    imc=k/(altura*altura);

    cout<<"Su indice de masa corporal es: "<<imc<<endl;

    return 0;
}
