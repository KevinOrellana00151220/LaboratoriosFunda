#include "iostream "
#include "cmath"

using namespace std;

int main(void){

// se declaran la variable
int a;

// se manda un mensaje al usuario pidiendo la variable
cout << "Introduzca el valor" << endl ; 

// se pide la variable
cin >> a;

// se establece la condicion donde el numero es par o no a traves de dividirlo entre 2 y revisar el resultado de el residuo.
if ( (a % 2) == 0 || a == 0 ) {

// se envia el siguiente mensaje al usuario
cout << "El numero es par.";
}

// se establece la condicion en el caso que no sea par
else {

// se envia el siguiente mensaje al usuario
cout << "El numero es inpar." << endl ;
}






}