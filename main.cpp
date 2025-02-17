/*
Asignación 2: Suma de dos fracciones
Giovanny Rodríguez Rivera
801-24-2694
*/

#include<iostream>
using namespace std;

int main(){
  //Declarar las variables
  int numerador1, denominador1;
  int numerador2, denominador2;
  int sumaNumerador, sumaDenominador;

  //Desplegar el propósito del programa
  cout << "Este programa suma dos fracciones." << endl;

  //Pedirle al usuario el numerador y denominador de la primera fracción
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> numerador1;
  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> denominador1;

  //Pedirle al usuario el numerador y denominador de la segunda fracción
  cout << "Entre el numerador de la 2da fracción: ";
  cin >> numerador2;
  cout << "Entre el denominador de la 2da fracción: ";
  cin >> denominador2;

  //Calcular la suma de las fracciones
  sumaNumerador = (numerador1 * denominador2) + (numerador2 * denominador1);
  sumaDenominador = denominador1 * denominador2;

  //Desplegar el resultado de la sumatoria
  cout << "La suma es " << sumaNumerador << "/" << sumaDenominador << "." << endl;
  
  return 0;
}
