#include "iostream"

using namespace std;
void notas(int i , int alum,int s, float notas[][6]);
float notafinal(int i , int alum, float suma, float nota[][6], int s, float promedio);

int main(){

// se declaran las variables
float promedio=0;
int alum=0;
int b=0;
float suma=0;
int i=0;
int aprobado=0;
int reprobado=0;
int s=0;
float m=0;

// se envia un mensaje al usuario pidiendo la cantidad de alumnos que ingresara
cout << "Ingrese la cantidad de alumnos que evaluara: " ;

// se pide la cantidad de alumnos
cin >> alum;

// se declara el arreglo con la variable cantidad de alumnos
float nota [alum][6]={};


notas ( i ,  alum, s,  nota);

notafinal(i , alum,  suma,  nota, s,  promedio);



return 0;
}
// se realiza un iteracion para solicitar los elementos del arreglo
// esta iteracion es para controlar el valor de las filas
void notas(int i , int alum,int s, float nota[][6])
{
 for(i=0;i<alum;i++)
 {
   cout << "Alumno " <<  i+1<< ":" << endl << endl ;
      // esta es para controlar el valor de las columnas 
      for(s=0;s<5;s++)
      { 
        cout << "Nota " << s+1 << " (solo valores del 1 al 10): " ;
        cin >> nota[i][s];
              
       
      }
           
 }
 
}

// la funcion que controla la nota media y si aprobo o reprobo el alumno
float notafinal(int i , int alum, float suma, float nota[][6], int s, float promedio)
{
 for(i=0;i<alum;i++)
 {
   suma =0; promedio=0;
      // esta es para controlar el valor de las columnas 
      for(s=0;s<5;s++)
      { 
        suma = suma + nota[i][s];
        
              
       
      }
   promedio = suma / 5;   
   // se establece una condicion si el alumno tiene un promedio mayor de 6 o no
   if ( promedio >=6)
     {  
       cout << "el promedio del alumno " << i+1 << " es: " <<  promedio << ", ha aprobado."<< endl;    
     }
     else{
       cout << "el promedio del alumno " << i+1 << " es: " <<  promedio << ", ha reprobado."<< endl;   
        }
 
}
}