#include "iostream"
#include "cmath"


using namespace std;

int main(void){
    //se declara las variables
     float a;
  float b;
    float c;


    //se manda un mensaje al usuario pidiendo las variables a usar
    cout << "Introduzca las variables a, b y c. (colocar segun la formula cuadratica)"<< endl;

    //se piden las variables al usuario.
    cin >> a;   cin >> b;    cin >> c;

//se declaran las variables para armar la formula general.
      float p=pow(b,2);
      float o= (4*a*c);
      float r= p-o;
      float v= sqrt(r);
      float u= (-b)  + v; 
      float h= (-b) - v ;
      float l=(2*a);
      float x=u/(l);
      float y=h/(l);

      //se establece una condicion si el resultado no pertenece a los reales
 if (r < 0)  {
     cout << "La ecuacion no tiene soluciones reales."<< endl;
   
return 0;

     }

      //se establece una condicion para mostrar las dos respuestas
      if (x!=y){

     cout << "X1 es igual a " << x << " y X2 es igual a " << y << "." << endl; 

    return 0;
    }

     //se establece una condicion si el resultado solo tiene una solucion unica
else if (x=y){
    cout << "la ecuacion tiene una sola solucion y es igual a " << x << endl;

    return 0;
}
        
        return 0;
}























