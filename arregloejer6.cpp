#include "iostream"

using namespace std;

int main(){

// se declaran las variables y el arreglo
int x;
int i;
int y []={1,2,1,1,2,2,2,2,4,2,5,4,4,5,3,3,6,6,7,8,8,8,9,3,2,9,10,10};
int b=0; // b es la variable que indicara cuantas veces se repite el numero


// se manda un mensaje pidiendo el valor de x
cout << "Escriba un numero entero del 1 al 10." << endl;

// se pide el valor de x
cin >> x; 
cout << endl;

// se establece la condicon si el numero es menor que 1 o mayor que diez
if (x<=10 && x>=1){
    // se establece una iteracion para ir revisando cada posicion del arreglo y comprobar si es el mismo numero que x, y si lo es entonces le sumara 1 a b
     for(i=0; i<28;i++){
       if (x == y[i]) {
       b=b+1;
       }
     }
}
else{

     cout << "El numero ingresado es invalido" << endl;

}

cout << "El numero que ingresaste se repite " << b << " en el arreglo." << endl;


return 0;

}