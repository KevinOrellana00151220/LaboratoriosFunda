#include "iostream "


using namespace std;

int main(){

// se declara la variable 
string a ;

// se envia un mensaje al usuario pidiendo la palabra.
cout << "Dime la palabra que quieres ingresar" << endl;

// se pide la palabra 
cin >> a;

// se declara la variable que contendra el tamaño de la palabra
int b= a.size ();

// se establece la condicion donde la palabra tiene mayor a 10 caracteres o no
if (b>=10 && b!=10) {

    // se envia el siguiente mensaje al usuario
    cout << "La palabra ingresada es mayor a 10 caracteres " ;
}

// se establece un caso especial solo cuando el tamaño de la palabra es 10
else if (b==10 ) {

    // se envia el siguiente mensaje al usuario
    cout << "La palabra ingresada tiene 10 caracteres " ;
}

else  {

    // se envia el siguiente mensaje al usuario
    cout << "La palabra ingresada es menor a 10 caracteres  " ;
    }

// se establece una condicion donde si la longitud de la palabra es par o no
if ( b%2 == 0) {

// se envia el siguiente mensaje
cout << "y el numero del tamano de la palabra es par.";
}

else {

// se envia el siguiente mensaje
cout << "y el numero del tamano de la palabra es inpar.";

}




return 0;









}