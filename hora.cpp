#include "iostream"
using namespace std;


int main() {   
  
  // se declara la variables de tiempo que contendran la hora
   int hora;
   int minuto;
   int segundo;

// se envia un mensaje al usuario pidiendo la hora, minutos y segundos
cout << "ingrese la hora, los minutos y los segundos." << endl;

cout << "Hora :" << endl;

// se pide la hora al usuario
cin >> hora; 
cout << endl;

cout << "Minutos:" << endl;

// se pide los minutos al usuario
cin >> minuto;
cout << endl;

cout << "Segundos:" << endl;

// se pide los segundos al usuario
cin >> segundo;
cout << endl;

// se pone una condicion que tendra en cuenta si al sumarle un segundo debe sumarse un minuto y al sumar ese minuto, debe sumarse una hora
if (hora<=242 && hora>=0 && minuto<=59 && minuto >=0 && segundo<=59 && segundo>=0){
  if(segundo==59){
    if (minuto == 59) {
      if (hora==23){
        cout << "El tiempo 1 segundo despues es: " << 24 << ":" << 00 << ":" <<  00 << ". Es media noche." << endl;
      }
      else {

        cout << "El tiempo 1 segundo despues es: " << hora+1 << ":" << 00 << ":" << 00 << endl;
      }
    
    
    }
    else {

      cout << "El tiempo 1 segundo despues es: " << hora << ":" << minuto+1 << ":" <<  00;
    }


  }
  else {

cout << "El tiempo 1 segundo despues es: " << hora << ":" << minuto << ":" <<  segundo+1;
  }
  




    
}
else{

cout << "Uno de los valores ingresados es invalido." << endl; 


}

return 0;

}