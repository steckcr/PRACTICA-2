// Curso de programación C++
// Steck Orozco Durán
// PRACTICA 2
// 

#include <iostream>
using namespace std;

int main(void) {
 
  // Declaracion de variables del tipo "entera"
  int number=0,unientero,decientero,centientero;

  // Declaración de vectores del tipo "cadena de caracteres" 
  // que contendran las palabras necesarias para conformar los números del 1 al 999
  string unidades[20] = {"","uno","dos ","tres","cuatro","cinco","seis","siete","ocho","nueve","diez","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
  string decenas[10] = {"","","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "};
  string centenas[10] = {"","ciento ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "}; 
    
  // Entra al ciclo y se mantiene dentro del mismo siempre y cuando 
  // "number" sea diferente a -1
  while (number!= -1) {
    
    // Muestra en pantalla el mensaje de solicitud
    cout<< "Digite un número a convertir en palabras no mayor a tres dígitos (1-999): ";
    // Lee dato del teclado y lo almacena en "number"
    cin >> number;
    // Muestra en pantalla el mensaje de resultado
    cout<< "El resultado de la conversión es: ";

    // si "number" esta en el rango entre 1 y 999 y no es 100
    // realiza las operaciones contenidas en el "if"
    if (number >= 1 && number <= 999 && number!=100){
    
      // operaciones para obtener la parte entera de unidades, decenas y centenas
      centientero=number/100;
      decientero=(number/10)%10;
      unientero=number%10;
      
      // muestra en pantalla la palabra asociada a las centenas
      cout<< centenas[centientero];
      
      // Hace esto si la parte de las decenas es menor a 20
      if (decientero<2){
        // muestra en pantalla la palabra asociada a los números del "uno" al "diecinueve"
        cout<< unidades[decientero*10+unientero]<< endl<< endl;
      }
      
      // Si no es menor a 20 hace esta parte
      else{
        // muestra en pantalla la palabra asociada a las decenas del "veinte" al "noventa"
        cout<< decenas[decientero];
        if (unientero>0){
          cout<< "y ";
        }
        // muestra en pantalla la palabra asociada a las unidades del "uno" al "nueve"
        cout<< unidades[unientero]<< endl<< endl;
      }   
    }

    // si "number" es 100
    // muestra en pantalla la palabra "cien"
    if (number==100){
      cout<< "cien"<< endl<< endl;
    }

    // si "number" no esta en el rango permitido 
    // asigna un -1 a "number" y sale del ciclo
    if (number<0 || number>999){
      cout<< "número fuera del rango permitido";
      number = -1;
    }


  }

  return 0;
}