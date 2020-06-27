#include "iostream"

using namespace std;
void codificar(string palabra, string codigo,int i, int k , int c);

int main(){

// se declaran las variables
string palabra;
string codigo="";
int i=0;
int c;
int k=0;
string espacio = " ";
 

// se envia un mensaje al usuario pidiendo la cantidad de letras de su frase.
cout << "Ingrese la cantidad de palabras que introducira:" << endl;

// se pide la cantidad de palabras al usario
cin >> c;


// llamamos a la funcion para que realice la traduccion
codificar(palabra, codigo, i,  k , c);





return 0;







}

// creamos la funcion que codificara la frase
void codificar(string palabra, string codigo,int i, int k , int c){

// haremos una iteracion donde primero pediremos las palabras una por una, asi cada la palabra se analiza letra por letra
// a partir de un switch junto a un for que va yendo letra por letra usando la funcion at. y al final se va sumando cada
// uno en un solo string.

// esta iteraccion ayuda a ir cambiando de palabra a palabra
do{

// reinicia el string "palabra" para empezar con la siguiente palabra y analizarla
palabra="";
cout << "Ingrese la palabra "<< k+1 << endl;
cin >> palabra;
// se declara la variable b que contendra el tamaño de la palabra
int b = palabra.size()-1;

// se establece otra iteracion dentro donde comenzaremos a analizar cada letra de la palabra
do{
codigo =codigo + " "; 
// se establece otra iteracion for para poder ir de letra en letra 
 for(i=0;i<=b;i++){  
// se establece un switch para cada caso de las letras "murcielago"
switch (palabra.at(i)){

case 'm':
codigo =codigo+"0";
break;

case 'u':
codigo =codigo+"1";
break;

case 'r':
codigo =codigo+"2";
break;

case 'c':
codigo =codigo+ "3";
break; 

case 'i':
codigo =codigo+ "4";
break;

case 'e':
codigo =codigo+ "5";
break;

case 'l':
codigo =codigo+"6";
break;

case 'a':
codigo =codigo+  "7";
break;

case 'g':
codigo =codigo+ "8";
break;

case 'o':
codigo =codigo+ "9";
break;

default:
codigo = codigo + palabra.at(i) ;
break;






}
}
}while (i<=b);
k++;
}while(k<c);
cout << "La frase codificada queda asi: " << codigo ;

}