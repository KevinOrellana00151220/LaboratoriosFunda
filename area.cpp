#include "iostream"
#include "cmath"

using namespace std;

int main(){

// se declaran las variables
float radio; 
double pi=3.1416; 


// se envia un mensaje al usuario preguntando el radio del circulo
cout << " Introduzca el radio del circulo. (medidas en centimentros) " << endl;

//se pregunta el radio del circulo
cin >> radio;

// se declaran las variables
long double perimetro=2 * pi * radio; 
long double area= pi* (radio * radio) ;


// se condiciona si el radio ingresado es negativo no operar.
if (radio<0){
cout << "No se puede operar con radios negativos."<< endl;
radio=0;

//se vuelve a preguntar el radio del circulo
cout << endl << " Introduzca el radio del circulo en numeros positivos. (medidas en centimentros) " << endl;
cin >> radio; 
}

// se envia un mensaje con los resultados.
cout << " el area del circulo es de " << area << " cm" << endl;
cout << " el perimetro del circulo es de " << perimetro << " cm" << endl;

return 0;

} 