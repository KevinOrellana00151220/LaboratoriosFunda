#include "iostream"
#include "cmath"    

using namespace std;

int main(void){

    // se declara la variable y se le asigna un valor
    string a;
    float b;
    float c;

    //se envia un mensaje al usuario pidiendo el nombre de su compra
    cout << "Introduzca el nombre de su compra."<< endl;

    // se pide el nombre de su compra al usuario
    cin >> a;

    // se condiciona para poder establecer un orden a la hora de pedir cada variable.
    if ( bool a= true ) {
        
    //se envia el mensaje al usuario pidiendo el precio de su compra
    cout << "introduzca el precio de su compra" << endl;

    // se pide el precio de su compra al usuario
    cin >> b;
           
    }

    // se condiciona para poder establecer un orden a la hora de pedir cada variable.
    if (b=b) {

    // se envia un mensaje al usuario pidiendo la cantidad comprada
    cout << "introduzca la cantidad comprada" << endl;

    // se pide la cantidad comprada al usuario
    cin >> c;
    }

    // se condiciona para poder establecer un orden a la hora de pedir cada variable.
    if (c=c) {

    // se muestra al usuario que fue lo que compro, su precio y cuantos compro, junto con el total.
    cout << "Usted compro " << a << " , su precio es de $" << b << " y compro una cantidad de " << c << " " << a << " , en total usted gasto $" << b*c << "." << endl;
    
    }
    return 0;




}