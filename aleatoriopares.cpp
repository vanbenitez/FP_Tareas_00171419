#include <iostream>
#include <time.h>

using namespace std;

int main(){
   
    srand(time(0));
    int arr[10];
    int v;
     
        for(int i=0; i<10; i++){
        v = (rand()%100);
        arr[i] = v;
        }
        for(int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
   
    for(int i=0; i<10; i++){
        if(arr[i]%2 == 0) cout <<"Numeros pares: "<<arr[i] <<endl;
       
    }
   
   
}
