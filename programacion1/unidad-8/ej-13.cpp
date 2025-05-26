/*
13. Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT
elementos. Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico: A[1] con
A[CANT], A[2] con A[N-1], ..... etc.
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posición que
ocupaba cada elemento en el conjunto original.

*/

#include <iostream>
using namespace std;

void readInt(string message, int& var) {
  cout << message << ": ";
  cin >> var;
}

void fillArr(int arr[], int cantElementos, string message) {
  for (int i = 0; i < cantElementos; i++)
  {
    readInt(message, arr[i]);
  }
}

void showArrValues(int arr[], int cantElementos) {
  for (int i = 0; i < cantElementos; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;
}

int main() {
  int cant;
  readInt("Ingrese la cantidad de elementos", cant);

  int SINOR[cant] = { 0 };
  fillArr(SINOR, cant, "Ingrese el elemento");

  int simetricSINOR[cant] = { 0 };
  for (int i = 0; i < cant; i++) {
    int simetricIndex = cant - 1 - i;
    simetricSINOR[i] = SINOR[simetricIndex];
  }
  showArrValues(simetricSINOR, cant);

  int orderedSINOR[cant] = { 0 };
  int indexArr[cant] = { 0 };

  for (int i = 0; i < cant; i++) {
    //
    int analyzedIndex = i;
    int analyzedElement = SINOR[analyzedIndex];
    int nextElement = SINOR[analyzedIndex + 1];
    if (analyzedElement < nextElement) {
      orderedSINOR[analyzedIndex] = analyzedElement;
    }
    else {
      // analizar en reversa si es más chico que elementoAnalizado. 
      // Si no lo es, definir en esa posición ese elemento y correr los demás
    }
  }

  return 0;
}

// [1,8,6,2,9,3,5,4] --> [1,6,2,8,9,3,5,4] --> [1,2,6,8,9,3,5,4] --> [1,2,6,8,3,5,4,9]
// [1,8,6,2,9,3,5,4] -->
// [1]