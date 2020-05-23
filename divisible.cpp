#include "iostream "


using namespace std;

int main(){

// se declaran las variables
int dividendo ;
int divisor ;

// se envia un mensaje al usuario pidiendo los valores de las variables
cout << "Ingrese los dos valores a dividir" << endl;

//se piden los valores al usuario
cin >> dividendo ;
cin >> divisor ;

// se declara la variable que definira si es divisible o no
float cociente = dividendo/divisor;

// se establece la condicion donde es divisible
if ((dividendo % divisor) == 0 ) { 

// se le muestra el siguiente mensaje al usuario
cout << " Es divisible y el resultado es " << cociente  ;

}

// se establece la condicion donde no es divisible
else {

// se le muestra el siguiente mensaje al usuario
cout << dividendo << " no es divisible por " << divisor ;

}


return 0; 

}
