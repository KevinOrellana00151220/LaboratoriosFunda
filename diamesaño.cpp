#include "iostream"

using namespace std;

int main(){

// se establecen las variables
int dia;
int mes;
int ano;
bool b ;

// se envia un mensaje al usuario pidiendo el valor de la variable
cout << "Introduzca el año" << endl ;

// se pide el valor
cin >> ano; 

// se establece la condicion si el año es bisiesto o no
if ( ano % 400 == 0 || (ano%4==0 && ano%100 !=0) ){

b = true;


}

else{

b= false;



}

// se envia un mensaje al usuario pidiendo el año
cout << "Introduzca el mes" <<  endl ;

// se pide el año al usuario
cin >> mes;
cout << endl;

// se envia un mensaje al usuario pidiendo el año
cout << "Introduzca el dia" <<  endl ;

// se pide el año al usuario
cin >> dia;
cout << endl;

// se establece la condicion sobre si el año es bisiesto o no y si el mes es febrero, agregando tambien condiciones si es el ultimo dia del mes entonces se suma 1 al mes o si es el ultimo dia del año entonces se pasa al siguiente año ,etc
if (b==true && mes==2 ){
    if (dia<=29 && dia >=1) {

      if (dia==29){
          cout << 1 << "/" << mes+1 << "/" << ano ;
      }
      else {
          cout << dia+1 << "/" << mes << "/" << ano ;
      }
    }
    else {
        cout << "Numero de dia invalido" << endl; 
    }





}

if (b==false && mes==2){
    if (dia <=28 && dia >=1){
        if (dia == 28){
            cout << 1 << "/" << mes+1 << "/" << ano ;
        }
        else {
            cout << dia+1 << "/" << mes << "/" << ano ;
        }
        
    }
    else {
        cout << "Numero de dia invalido" << endl ;
    }
}

else {
   if(mes<=12 && mes>=1){
     if (mes==1 || mes == 3 || mes == 5 || mes==7 || mes ==8 || mes== 10 || mes == 12 ){
        if(dia <= 31 && dia >=1) {
            if (dia==31){
                if (mes==12){
                    cout << 1 << "/" << 1 << "/" << ano+1 ;
                }
                else{
                    cout << 1 << "/" << mes+1 << "/" << ano ;
                }
            }
            else {
                cout << dia+1 << "/" << mes << "/" << ano ;
            }

          
           
         }
         else {
          cout << "Numero de dia invalido" << endl;
        
         }

        }
     else{
         if(dia <= 30 && dia >=1 && mes!=2 ) {
             if (dia==30){
                 cout << 1 << "/" << mes+1 << "/" << ano ;
             }
             else{
                 cout << dia+1 << "/" << mes << "/" << ano ;
             }

          
         }
         else {
             if(mes!=2){
          cout << "Numero de dia invalido" << endl;
          }
         }
        }
  }
  else{


      cout << "Numero de mes invalido" << endl; 
  }

} 









 


return 0; 

}