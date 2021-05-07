// Curso de programación C++
// Steck Orozco Durán
// PRACTICA 2
// 

#include <iostream>
using namespace std;

int main(void) {
 
  // Declaracion de la variable "number" del tipo entera
  int number,unientero,decientero,centientero;

  string unidades[16] = {"","uno","dos ","tres","cuatro","cinco","seis","siete","ocho","nueve","diez","once","doce","trece","catorce","quince"};
  string decenas[10] = {"","dieci","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "};
  string centenas[10] = {"","ciento ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "}; 

  // Lee dato del teclado
  cout<< "Digite un numero a convertir no mayor a tres digitos: ";
  
  // Almacena el dato en "number"
  cin >> number;     
  
  
  // Entra al ciclo y se mantiene dentro del mismo siempre y cuando 
  // "number" sea diferente a -1
  while (number!= -1) {
  
    // si "number" esta en el rango entre 16 y 999 y no es 100
    // realiza las operaciones contenidas en el "if"
    if (number >= 16 && number <= 999 && number!=100){
    
      centientero=number/100;
      decientero=(number-(centientero*100))/10;
      unientero=(number-(centientero*100)-(decientero*10));
      cout<< centenas[centientero];
      cout<< decenas[decientero];
   
       if (decientero>1 && unientero>0){
        cout<< "y ";
       }
      
      cout<< unidades[unientero]<< endl;
      cout<< "Digite otro numero a convertir no mayor a tres digitos: ";
      cin >> number;
    }

    // si "number" esta en el rango entre 1 y 15
    // realiza las operaciones contenidas en el "if"
    if (number>=1 && number<=15){
      cout<< unidades[number]<< endl;
      cout<< "Digite otro numero a convertir no mayor a tres digitos: ";
      cin >> number;
    }

    // si "number" es 100
    // realiza las operaciones contenidas en el "if"
    if (number==100){
      cout<< "cien"<< endl;
      cout<< "Digite otro numero a convertir no mayor a tres digitos: ";
      cin >> number;
    }


    // si "number" no esta en el rango permitido 
    // asigna un -1 a "number" y sale del ciclo
    if (number<=0 || number>999){
      cout<< "El numero digitado no se encuentra en el rango permitido";
      number = -1;
    }

  }

  return 0;
}