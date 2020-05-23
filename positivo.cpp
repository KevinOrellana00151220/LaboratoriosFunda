#include "iostream "


using namespace std;

int main(){

// se declara la variable
float a;

// se envia un mensaje al usuario pidiendo la variable
cout << "Introduzca el numero" << endl;

// se pide al usuario la variable
cin >> a;

// se establece la condicion si el numero es mayor a cero
if (a>0 ) {

    cout << "El numero es positivo" ;
}

// se establece una condicion especial si el numero es cero
else if (a == 0) {

    cout << "El numero es cero"; 

}

else {

cout <<"El numero es negativo"; 

}


return 0; 









}
