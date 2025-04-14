#include <iostream>
using namespace std;

/*
Ej. MI-21. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir
(si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.
*/

int main() {
  float newValue, maxNegative = 0, minPositive = -1, minInRange = 0, acc = 0, count = 0, average;

  cout << "Ingrese un valor: ";
  cin >> newValue;

  while (newValue != 0) {
    acc = acc + newValue;
    count++;
    if (newValue < 0) {
      if (newValue > maxNegative || maxNegative == 0) {
        maxNegative = newValue;
      }
    }
    else {
      if (newValue < minPositive || minPositive == -1) {
        minPositive = newValue;
      }
    }
    if (newValue >= -17.3 && newValue <= 26.9) {
      if (newValue < minInRange || minInRange == 0) {
        minInRange = newValue;
      }
    }
    cout << "Ingrese un valor: ";
    cin >> newValue;
  }
  if (count > 0) {
    average = acc / count;
    if (maxNegative != 0) cout << "El valor máximo negativo fue: " << maxNegative << endl;
    if (minPositive != -1) cout << "El valor mínimo positivo fue: " << minPositive << endl;
    if (minInRange != 0) cout << "El valor mínimo dentro del rango -17.3 y 26.9 fue: " << minInRange << endl;
    cout << "El promedio de todos los valores fue: " << average << endl;

    system("pause");
  }

  return 0;
}