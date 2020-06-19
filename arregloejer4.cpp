#include "iostream"

using namespace std;

int main(){
    // se declaran los arreglos con lo que contendran y se declara solo el tamaño del tercer arreglo
    int arreglo1 [12] = {14,3,6,7,2,12,64,21,23,6,12,1};
    int arreglo2 [12]= {2,12,45,2,5,7,12,87,12,4,2,12};
    int arreglo3 [12]={};
    int a; 
    int i=0; // estas variables las usaremos para los iteradores 
    int y=0;
    int x=0;
    

cout << "Los numeros dentro del arreglo antes de realizar la suma son: ";

// mostraremos al usuario como es el arreglo 3 antes de realizar la suma de los arreglos para eso usaremos un iterador para mostrar cada posicion
for (a=0;a<12;a++){
 cout << arreglo3[a] << " ";
}

cout << endl;
cout << endl;

cout << "Los numeros dentro del arreglo despues de realizar la suma son: ";

// usamos un iterador do, mientras i sea menor que 12 entonces realizara las sumas de los numeros de los arreglos en las posiciones del 0 al 11
    do{

      arreglo3[i] =arreglo1[y]+arreglo2[x];
      cout << arreglo3 [i] << " " ;   
i++;
y++;
x++;

    }while(i<12);

return 0;

}
    
