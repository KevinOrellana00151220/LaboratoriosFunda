#include "iostream"
#include "cmath" 

using namespace std;

int main(){

// se declaran las variables a, b y c
int a; int b; int c;

// se declara la variable de la suma de a,b y c
float suma= a+b+c;

// se declara el promedio 
float promedio; promedio= suma/3;

//se manda un mensaje al usuario pidiendo que introduzca los valores de las variables
cout << "introduzca los 3 digitos" << endl;

//se le pide al usuario el valor de las 3 variables
cin >> a;
cin >> b; 
cin >> c; 

// se muestra al usuario el promedio obtenido 
 cout << "promedio = " << promedio << endl;
    
    

return 0;

}