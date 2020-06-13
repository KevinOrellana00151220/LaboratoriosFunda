#include "iostream"

using namespace std;

int main(){

// se declaran las variables
float horasn= 1.75;
float horasex= 2.50;
float horatra;
float horaex;
float impuesto = 0.1025;
float salariototal;
float salarioreal;
float salariorealreal;
float salarioabsoluto = 0;
string c;

// se establece una condicion donde mientras el usuario no presione Ctrl + Z, seguira pidiendo las horas trabajadas y extras de los empleados
do{

// se inicia reiniciando los valores de las horas extras, las horas trabajas y los salarios
horatra = 0;
horaex = 0;
salariototal = 0;
salarioreal = 0;
salariorealreal = 0;

// se manda un mensaje al usuario pidiendo las horas trabajadas del empleado
cout << "Escriba las horas trabajadas del empleado. (Solo escriba numeros)" << endl;
 
 // se pide las horas trabajadas
 cin >> horatra;
 cout << endl;

 // se manda un mensaje al usuario pidiendo las horas extras del empleado
cout << "Escriba las horas extras del empleado. (Solo escriba numeros) " << endl;

// se pide las horas extras
cin >> horaex ;
cout << endl;
// se declaran las variables estableciendole las horas ingresadas
salariototal = (horasn * horatra) + (horasex * horaex);

// se establece una condicion donde si el salario sobre pasa los 500 dolares entonces se impone impuesto de renta
if (salariototal > 500){

impuesto = impuesto + 0.10;
}
else{
    impuesto = impuesto;
 
}


salarioreal = salariototal * impuesto;
salariorealreal = salariototal - salarioreal;
salarioabsoluto = salarioabsoluto + salariorealreal;

// se muestra el salario total y el real de este empleado
cout << "El salario total de este empleado es: $" << salariototal << " y el salario real con los descuentos es: $" << salariorealreal << endl << endl ;

// se envia un mensaje preguntando si quiere continuar escribiendo salarios
cout << "Si desea seguir escribiendo escriba ""Si"" o cualquier tecla, si quieres finalizar presione Ctrl + z y presione enter: " << endl  ;

// mientras siga leyendo cualquiera caracter este seguira realizando el do 
} while (cin >>c);

// se imprime en pantalla el salario mensual en total de todos los empleados que la empresa debe pagar
cout << "El salario mensual en total de los empleados es de: $" << salarioabsoluto;


return 0;






}