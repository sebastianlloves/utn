/*
8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación
*/

#include <iostream>
using namespace std;

void readInt(string message, int& var) {
  cout << message << ": ";
  cin >> var;
}

void showArrValues(int arr[], int cantElementos) {
  for (int i = 0; i < cantElementos; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;
}

void fillArr(int arr[], int cantElementos, string message) {
  for (int i = 0; i < cantElementos; i++)
  {
    readInt(message, arr[i]);
  }
}

void reverseArr(int arr[], int reverseArr[], int cantElementos) {
  for (int i = 0; i < cantElementos; i++) {
    int inverseIndex = cantElementos - i - 1;
    reverseArr[i] = arr[inverseIndex];
  }
}

int main() {
  int cantElementos;
  readInt("Ingrese la cantidad de elementos", cantElementos);

  int GG[cantElementos] = { 0 };
  fillArr(GG, cantElementos, "Ingrese el elemento");

  int inverseGG[cantElementos] = { 0 };
  reverseArr(GG, inverseGG, cantElementos);

  cout << "1) " << endl;
  for (int i = 0; i < cantElementos; i++) {
    cout << inverseGG[i] << endl;
  }
  cout << endl;

  cout << "2) " << endl;
  for (int i = 0; i < cantElementos; i++) {
    string separator = (i + 1) % 10 == 0 ? "\n" : "\t";
    cout << inverseGG[i] << separator;
  }
  cout << endl;

  cout << "3) " << endl;
  for (int i = 0; i < cantElementos; i++) {
    string separator = (i + 1) % 5 == 0 ? "\n" : "\t";
    cout << "Elemento " << i+1 << ": " << inverseGG[i] << separator;
  }

  return 0;
}