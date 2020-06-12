#include "iostream"

using namespace std;

int main(){

// se establecen las variables
int a;
bool b = 0;

// se envia un mensaje al usuario pidiendo el valor de la variable
cout << "Introduzca el año" << endl ;

// se pide el valor
cin >> a; 

// se establece la condicion si el año es bisiesto o no
if ( a % 400 == 0 || (a%4==0 && a%100 !=0) ){

b = b + 1;

}

else{

b= b+0;



}

// se establece una condicion donde el valor booleano es true o false
if (b==true){

    cout << "El año " << a <<  " es bisiesto." ; 
}

else {

cout << "El año " << a <<  " no es bisiesto." ; 


}
 


return 0; 

}