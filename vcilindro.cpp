#include <iostream>

using namespace std;

int main(){
    float volumen=0, area=0, radio=0, altura=0;
   
    cout<<"Calcular el volumen de un cilindro."<<endl;
   
    cout<<"Ingrese el valor del radio: "<<endl;
    cin>>radio;
   
    cout<<"Ingrese el valor de la altura: "<<endl;
    cin>>altura;
   
    area=(3.1416)*((radio)*(radio));
   
    volumen=area*altura;
   
    cout<<"El volumen del cilindro es: "<<volumen<<endl;

    return 0;
}