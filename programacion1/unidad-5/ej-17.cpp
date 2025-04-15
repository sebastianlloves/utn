/*
Ej. MI-17: Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3
que no lo sean de 5, dentro del conjunto de los números naturales.
*/

#include <iostream>
using namespace std;

int main() {
  int newValue, count = 0, lastValue = -1;

  cout << "Ingrese el valor: ";
  cin >> newValue;

  while (count < newValue) {
    if (lastValue == -1) {
      int restToFirstMultiple = 3 - (newValue % 3);
      lastValue = newValue + restToFirstMultiple;
    }
    else lastValue = lastValue + 3;

    if (lastValue % 5 != 0) {
      cout << count + 1 << " multiplo: " << lastValue << endl;
      count++;
    }
  }

  system("pause");

  return 0;
}