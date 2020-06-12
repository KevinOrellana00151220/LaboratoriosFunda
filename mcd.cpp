#include "iostream"

using namespace std;

int main(){

// se declaran las variables
int a;
int  b;
int residuo = a % b ; 

// se manda un mensaje al usuario pidiendo los valores de las variables
cout << "Introduzca los valores (escriba el numero mayor primero)" << endl; 

// se piden las variables al usuario
cin >> a; 
cin >> b; 

// se declaran las variables
int dividendo=a;
int divisor =b;

// se establece un Do para que a y b intercambien sus valores para hallar el mcd y dejen de hacerlo una vez que el residuo sea cero.
do{
  residuo=dividendo%divisor;
  dividendo=divisor;
  divisor=residuo;
 }
 // parara hasta que el residuo sea cero
 while(residuo!=0);

// se manda el siguiente mensaje
 cout<<"El MCD es :"<<dividendo<<endl;
 



return 0;

}
