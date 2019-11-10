#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float n=0, c=0,colones, euros, dolares, libras;

    cout<<"Convertidor"<<endl;
   
    cout<<"Ingrese la opcion que desea: "<<endl;
   
    cout<<"1-De euros a dolares"<<endl;
    cout<<"2-De dolares a euros"<<endl;
    cout<<"3-De colones a dolares"<<endl;
    cout<<"4-De dolares a colones"<<endl;
    cout<<"5-De libras a euros"<<endl;
    cout<<"6-De euros a libras"<<endl;
    cin>>n;
   
    cout<<"Ingrese la cantidad a convertir: "<<endl;
    cin>>c;
   
    if(n==1){
        dolares=c/1.19;
        cout<<"Son "<<dolares<<" dolares."<<endl;
       
    }else if(n==2){
        euros=c*1.19;
        cout<<"Son "<<euros<<" euros."<<endl;
       
    }else if(n==3){
        dolares=c*0.11;
        cout<<"Son "<<dolares<<" dolares."<<endl;
       
    }else if(n==4){
        colones=c/0.11;
        cout<<"Son "<<colones<<" colones."<<endl;
       
    }else if(n==5){
        euros=c*1.16;
        cout<<"Son "<<euros<<" euros."<<endl;
       
    }else if(n==6){
        libras=c/1.16;
        cout<<"Son "<<libras<<" libras."<<endl;
    }
   

    return 0;
}

