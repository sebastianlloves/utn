/*
5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.
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


int main() {
  int cantElementos;
  readInt("Ingresar la cantidad de componentes", cantElementos);

  int arr1[cantElementos] = { 0 };
  int arr2[cantElementos] = { 0 };
  int arr3[cantElementos] = { 0 };

  fillArr(arr1, cantElementos, "Ingrese un valor");
  showArrValues(arr1, cantElementos);
  fillArr(arr2, cantElementos, "Ingrese un valor");
  showArrValues(arr2, cantElementos);

  for (int i = 0; i < cantElementos; i++)
  {
    arr3[i] = i % 2 == 0 ? arr1[i] : arr2[i];
  }
  cout << "Arr3:" << endl;
  showArrValues(arr3, cantElementos);


  return 0;
}