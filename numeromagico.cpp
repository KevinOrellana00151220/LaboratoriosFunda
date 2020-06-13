#include "iostream"

using namespace std; 


int main(){

// se declaran las variables
int num = 28;
int a;
int c=5;

cout << "¡Trata de adivinar el numero entre el 1 al 100! tienes 5 intentos. " << endl;

// se establece un do while donde todo se repetira todo hasta que la variable de los intentos llegue a 0
do{

// se reinicia el valor a para que no cause problemas
a=0;

// se pide el numero al usuario
cin >> a;


// se establece la condicion si el usuario adivina el numero o no, y si el numero que ha puesto esta cerca o lejos 
if (a==num){

   cout << "¡Felicidad!,¡Has ganado!" << endl;
   return 0;
}

else{
     c=c-1;
    if (a <= num && a!=num ){

  cout << "Te equivocaste. Pista: " << a << " es menor que el numero secreto. Te quedan " << c << " intentos. Prueba de nuevo o si quieres dejar de jugar presiona Ctrl + z y luego enter:" << endl; 

    }
    else{
       if (c!=0){

 cout << "Te equivocaste. Pista: " << a << " es mayor que el numero secreto. Te quedan " << c << " intentos. Prueba de nuevo o si quieres dejar de jugar presiona Ctrl + z y luego enter:" << endl; 


    }
    

}
}


}while (c!=0);

cout << "Te has quedado sin intentos, ¡suerte a la proxima!" << endl; 

return 0;

}