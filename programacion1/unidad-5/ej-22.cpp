/*
Ej. MI-22: Se dispone de un lote de valores enteros positivos que finaliza con un número
negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa
del mismo dentro del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos
los sub-lotes vacíos (ceros consecutivos) .
*/

#include <iostream>
using namespace std;

int main() {
  float averageSublot;
  int newValue, accSublot = 0, countSublot = 0, countLots = 0, maxOfSet = -1, lotMaxOfSet, posSublotMaxOfSet, minOfSublot = -1;

  cout << "Ingrese un valor: ";
  cin >> newValue;

  if (newValue >= 0) {
    while (newValue >= 0) {
      if (newValue == 0) {
        countLots++;
        averageSublot = accSublot / countSublot;
        cout << "El promedio de este sublote fue: " << averageSublot << endl;
        cout << "El valor minimo de este sublote fue: " << minOfSublot << endl;
        accSublot = 0;
        countSublot = 0;
        minOfSublot = -1;
      }
      else {
        accSublot = accSublot + newValue;
        countSublot++;
        if (minOfSublot == -1 || newValue < minOfSublot) minOfSublot = newValue;
      }
      if (newValue > maxOfSet) {
        maxOfSet = newValue;
        lotMaxOfSet = countLots + 1;
        posSublotMaxOfSet = countSublot;
      }

      cout << "Ingrese un valor: ";
      cin >> newValue;
    }
    cout << "El total de sublotes procesados fue: " << countLots << endl;
    cout << "El valor maximo del conjunto fue: " << maxOfSet << ", en el sublote " << lotMaxOfSet << " en la posicion realitva " << posSublotMaxOfSet << endl;
  }
  else cout << "Programa finalizado." << endl;


  return 0;
}