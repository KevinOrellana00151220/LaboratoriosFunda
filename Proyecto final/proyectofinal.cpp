#include "iostream"
#include "string"
#include "string.h"

const int longcad = 20;

using namespace std;

struct costoporarticul{

char nombrearticul[longcad+1];

int cantidad;

float precio;

float costoporarticulo;


};

void creararreglo(int i, string nombre, int n,costoporarticul lista[]);
void costopor (int i, string nombre, int n,costoporarticul lista[]);
void imprimirarreglo (int i, string nombre, int n,costoporarticul lista[]);
float totalpagar(int i, string nombre, int n,costoporarticul lista[]);

int main (){

// se declaran las variables
int n;
int i; 
string nombre;
float total;

// se envia un mensaje al usuario pidiendo el tamaño del arreglo
cout << "Introduzca la cantidad de articulos que ingresara: ";

// se pide el tamaño del arreglo
cin >> n;
cout << endl;
cin.ignore(100, '\n');
costoporarticul lista[n];

// llamamos a las funciones 
creararreglo( i, nombre, n,  lista);
costopor ( i,  nombre, n, lista);
imprimirarreglo ( i,  nombre,  n, lista);
totalpagar ( i,  nombre,  n,lista);





return 0;

}

// se realiza la funcion que creara el arreglo 
void creararreglo(int i, string nombre, int n, costoporarticul lista[])
{
cout << "Escriba el nombre del producto, la cantidad comprada y su precio unitario." << endl;
for (i=0; i<n;i++)
 {
   cout << "Nombre del producto: ";
   getline(cin,nombre,'\n');
   // se copia lo que hay dentro del string nombre en lista[i].nombrearticul para ir colocando los nombres de los
   // distintos productos
   strncpy(lista[i].nombrearticul,nombre.c_str(),longcad);
   // esto se pone para evitar que el mismo nombre se coloque en todos los demas arreglos
   lista[i].nombrearticul[longcad]='\0';
   cout << "Cantidad comprada: ";
   cin >> lista[i].cantidad;
   cout << "Precio unitario del producto: ";
   cin >> lista[i].precio;
   cout << endl;
   cin.ignore(100, '\n');
 }

}

// funcion que creara el campo costoporartuculo y los metera en los arreglos
void costopor (int i, string nombre, int n,costoporarticul lista[])
{
for (i=0;i<n;i++)
 {
   // se multiplica cantidad y precio y se coloca en el arreglo i
  lista[i].costoporarticulo= lista[i].cantidad * lista[i].precio;
 }
}

// funcion que imprimira en pantalla el arreglo
void imprimirarreglo (int i, string nombre, int n,costoporarticul lista[])
{
cout << "Los productos ingresados son : " << endl << endl;
for(i=0;i<n;i++)
 {
  cout << lista[i].nombrearticul << " " ;
  cout << "cuesta $" << lista[i].precio << "," ;
  cout << " compro " << lista[i].cantidad << " ";
  cout << "y su costo por articulo es de $" << lista[i].costoporarticulo << "." << endl << endl;
 }

}

// funcion que suma todos los costos por articulo para obtener el total a pagar
float totalpagar(int i, string nombre, int n,costoporarticul lista[])
{
  // se declara la variable total
float total=0;
for (i=0;i<n;i++)
 {
   // se suma cada costo por articulo de cada arreglo
  total= total + lista[i].costoporarticulo;
 } 
 cout << "El total a pagar es de $" << total;
 return total;
}
