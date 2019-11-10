#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float area, p, a, b, c; //p es el semiperimetro p=(a+b+c)/2
   
    cout<<"Calcular el area de un triangulo."<<endl;
   
    cout<<"Ingrese el los lados del triangulo: "<<endl;
    cin>>a>>b>>c;
   
    p=(a+b+c)/2;
   
    area=sqrt(p*(p-a)*(p-b)*(p-c));
   
    cout<<"El area del triangulo es: "<<area<<endl;

    return 0;
}