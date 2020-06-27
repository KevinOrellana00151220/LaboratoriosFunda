#include "iostream"

using namespace std;
float promedios ( float estatura[], int abajo, int arriba);
float estaturas (float estatura[], int abajo, int arriba, float promedio, int i);

int main(){

    // se declaran las variables
    float promedio;
    float estatura [25]={};
    int a;
    int b=0;
    float suma=0;
    int i=0;
    int arriba=0;
    int abajo=0;
    int s=1;
    float m;

 cout << "Introduzca las 25 estaturas de los alumnos." << endl ;

 cout << "Digite las estaturas:"   << endl;
 
// se realiza un iteracion para solicitar los elementos del arreglo
for(i=0;i<25;i++){
  cout << "Estatura " << s << ":" << endl;
      cin >> estatura[i];
    
      s++;
    }
   
  
// se invocan las funciones para realizar las medias
 promedios (estatura, abajo, arriba);
 estaturas( estatura, arriba, abajo,  promedio, i);


return 0;
}

// funcion para realizar la media
float promedios( float estatura[],int abajo, int arriba)
{
    float suma=0, promedio=0;

    for(int i=0; i<25 ;i++)
    {
        suma = suma + estatura[i];
    }
    promedio = suma/25;
 cout << "El promedio de estaturas es: " << promedio ;
    return promedio;

}


// funcion donde se realiza la condiciones si la estatura del alumno esta por debajo o por encima de la media
float estaturas(float estatura[],int arriba, int abajo, float promedio,int i){
    abajo=0;
    arriba=0;
float suma=0; promedio=0;

    for(int i=0; i<25 ;i++)
    {
        suma = suma + estatura[i];
    }
    promedio = suma/25;
for(i=0;i<25;i++){
float p;
p=estatura[i];
if(estatura[i]<promedio && estatura[i]!=promedio ){
         abajo=abajo+1;     
 
}
if(estatura[i]>promedio && estatura[i]!=promedio ){
         arriba=arriba+1;     
}
}
cout << " y hay " << abajo << " abajo de la media y " << arriba << " arriba de la media.";

return arriba;
return abajo;
}

