// Curso de programación C++
// Steck Orozco Durán
// PRACTICA 2
// 

#include <iostream>
using namespace std;

int main(void) {
 
  // Declaracion de la variable "number" del tipo entera
  int number;

  // Lee dato del teclado
  cout<< "Digite un numero a convertir no mayor a tres digitos: ";
  
  // Almacena el dato en "number"
  cin >> number;     
  
  
  // Entra al ciclo y se mantiene dentro del mismo siempre y cuando 
  // "number" sea diferente a -1
  while (number!= -1) {
  
    // si "number" esta en el rango permitido
    // realiza las operaciones contenidas en el "if"
    if (number >= 0 && number < 1000){
      cout<< "Digite otro numero a convertir no mayor a tres digitos: ";
      cin >> number;
    }

    // si "number" no esta en el rango permitido 
    // asigna un -1 a "number" y sale del ciclo
    else{
      cout<< "El numero digitado no se encuentra en el rango permitido";
      number = -1;
    }

  }

  return 0;
}