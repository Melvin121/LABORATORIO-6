#include "iostream"
using namespace std;

int main(){

    int i, arreglo[7] = {4,1,2,3,3,2,1};
    
    int x = 0;

    for( i=0; i < 7; i++){
        if( arreglo[i] == 0){
            x += 1;
        }
    }
     cout << "El numero 0 se repite: " << x << "veces" << endl;
     x = 0;

         for( i=0; i < 7; i++){
            if( arreglo[i] == 1){
            x += 1;
            }
        }
        cout << "El numero 1 se repite: " << x << "veces" << endl;
        x = 0;
              
              for( i=0; i < 7; i++){
                 if( arreglo[i] == 2)  {
                      x += 1;
                    }
                 }
                 cout << "El numero 2 se repite: " << x << "veces" << endl;
                 x = 0;
                     
                     for( i=0; i < 7; i++){
                        if( arreglo[i] == 3){
                         x += 1;
                        }
                    }
                    cout << "El numero 3 se repite: " << x << "veces" << endl;
                    x = 0;

                         for( i=0; i < 7; i++){  
                            if( arreglo[i] == 4){
                            x += 1;
                            }
                        }
                        cout << "El numero 4 se repite: " << x << "veces" << endl;
                        x = 0;
    

    return(0);

}