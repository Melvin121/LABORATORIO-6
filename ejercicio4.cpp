#include "iostream"
using namespace std;
int sumando();

int main(){

    int num, i, Arreglo1[100], Arreglo2[100], Arreglo3[100];
    
    cout << "Sumador arreglos :D" << endl << endl;

    
    cout << "Ingrese tamano de los arreglos"<< endl;
    cin >> num;

    for(i=0; i<num; i++){
        cout << "Ingrese valor del primer arreglo" << endl;
        cin >> Arreglo1[i];

    }
    for(i=0; i < num; i++){
        cout << "Ingrese valor del segundo arreglo" << endl;
        cin >> Arreglo2[i];

    }
    for(i=0; i < num; i++){
        Arreglo3[i] = Arreglo1[i] + Arreglo2[i];

        cout << "La suma de arreglos es: " << Arreglo3[i] << endl << endl;

    
    }

    return(0);
    

}




