#include "iostream "


using namespace std;

int main(){

// se declaran las variables
string a;

// se envia un mensaje al usuario pidiendo la palabra.
cout << "Dime la palabra que quieres ingresar" << endl;

// se pide la palabra 
cin >> a;

// se declara las variables que define el numero del tamaño de la palabra 
int b = a.size();

// se establece una condicion que detectara la primera y ultima palabra y hara una comparacion entre ellas, si son la misma o no
if (a.at(b-1)==a.at(0)) {

// se manda el mensaje al usuario
cout << "La palabra ingresada inicia y termina con la misma letra, "  <<a.at(b-1) <<" y " << a.at(0) << "." ;

}

else {

// se manda el mensaje al usuario
cout << "La palabra ingresada no inicia y termina con la misma letra, "  <<a.at(b-1) <<" y " << a.at(0) << "." ;




}
















}