#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int m1=0, comida=0, bebida=0;
   
    cout<<"Restaurante pt\n"<<endl;
    cout<<"Menu."<<endl;
    cout<<"1. Desayunos. "<<endl;
    cout<<"2. Almuerzos. "<<endl;
    cout<<"3. Cenas. \n"<<endl;
    cin>>m1;

           switch(m1){
            case 1: cout<<"Seleccione el desayuno: "<<endl;
                    cout<<"1. Pupusas. "<<endl;
                    cout<<"2. Waffles. "<<endl;
                    cout<<"3. Desayuno tipico. \n"<<endl;
                    cin>>comida;
                    
            break;
       
            case 2: cout<<"Seleccione el almuerzo: "<<endl;
                    cout<<"1. Pollo frito. "<<endl;
                    cout<<"2. Alitas. "<<endl;
                    cout<<"3. Hamburguesa. \n"<<endl;
                    cin>>comida;
            break;

            case 3: cout<<"Seleccione la cena: "<<endl;
                    cout<<"1. Tamales. "<<endl;
                    cout<<"2. Cena tipica. "<<endl;
                    cout<<"3. Pupusas. \n"<<endl;
                    cin>>comida;
            break;
        }
    
    cout<<"Bebidas."<<endl;
    cout<<"1. Cafe. "<<endl;
    cout<<"2. Soda. "<<endl;
    cout<<"3. Chocolate. \n"<<endl;
    cin>>bebida; 
    cout<<endl;
    
    if(m1==1){
        if(comida==1 && bebida==1){
            cout<<"Ha seleccionado pupusas y cafe";
        }
    }
    
    if(m1==1){
        if(comida==1 && bebida==2){
            cout<<"Ha seleccionado pupusas y soda";
        }
    }
    
    if(m1==1){
        if(comida==1 && bebida==3){
            cout<<"Ha seleccionado pupusas y chocolate";
        }
    }
    
    if(m1==1){
        if(comida==2 && bebida==1){
            cout<<"Ha seleccionado waffles y cafe";
        }
    }
    
    if(m1==1){
        if(comida==2 && bebida==2){
            cout<<"Ha seleccionado waffles y soda";
        }
    }
    
    if(m1==1){
        if(comida==2 && bebida==3){
            cout<<"Ha seleccionado waffles y chocolate";
        }
    }
    
    if(m1==1){
        if(comida==3 && bebida==1){
            cout<<"Ha seleccionado un desayuno tipico y cafe";
        }
    }
    
    if(m1==1){
        if(comida==3 && bebida==2){
            cout<<"Ha seleccionado un desayuno tipico y soda";
        }
    }
    
    if(m1==1){
        if(comida==3 && bebida==3){
            cout<<"Ha seleccionado un desayuno tipico y chocolate";
        }
    }
    
    if(m1==2){
        if(comida==1 && bebida==1){
            cout<<"Ha seleccionado pollo frito y cafe";
        }
    }
    
    if(m1==2){
        if(comida==1 && bebida==2){
            cout<<"Ha seleccionado pollo frito y soda";
        }
    }
    
    if(m1==2){
        if(comida==1 && bebida==3){
            cout<<"Ha seleccionado pollo frito y chocolate";
        }
    }
    
    if(m1==2){
        if(comida==2 && bebida==1){
            cout<<"Ha seleccionado alitas y cafe";
        }
    }
    
    if(m1==2){
        if(comida==2 && bebida==2){
            cout<<"Ha seleccionado alitas y soda";
        }
    }
    
    if(m1==2){
        if(comida==2 && bebida==3){
            cout<<"Ha seleccionado alitas y chocolate";
        }
    }
    if(m1==2){
        if(comida==3 && bebida==1){
            cout<<"Ha seleccionado hamburguesa y cafe";
        }
    }
    
    if(m1==2){
        if(comida==3 && bebida==2){
            cout<<"Ha seleccionado hamburguesa y soda";
        }
    }
    
    if(m1==2){
        if(comida==3 && bebida==3){
            cout<<"Ha seleccionado hamburguesa y chocolate";
        }
    }
    if(m1==3){
        if(comida==1 && bebida==1){
            cout<<"Ha seleccionado tamales y cafe";
        }
    }
    
    if(m1==3){
        if(comida==1 && bebida==2){
            cout<<"Ha seleccionado tamales y soda";
        }
    }
    
    if(m1==3){
        if(comida==1 && bebida==3){
            cout<<"Ha seleccionado tamales y chocolate";
        }
    }
    
    if(m1==3){
        if(comida==2 && bebida==1){
            cout<<"Ha seleccionado cena tipica y cafe";
        }
    }
    
    if(m1==3){
        if(comida==2 && bebida==2){
            cout<<"Ha seleccionado cena tipica y soda";
        }
    }
    
    if(m1==3){
        if(comida==2 && bebida==3){
            cout<<"Ha seleccionado cena tipica y chocolate";
        }
    }
    if(m1==3){
        if(comida==3 && bebida==1){
            cout<<"Ha seleccionado pupusas y cafe";
        }
    }
    
    if(m1==3){
        if(comida==3 && bebida==2){
            cout<<"Ha seleccionado pupusas y soda";
        }
    }
    
    if(m1==3){
        if(comida==3 && bebida==3){
            cout<<"Ha seleccionado pupusas y chocolate";
        }
    }
    
    return 0;
}
