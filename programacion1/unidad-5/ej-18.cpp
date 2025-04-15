/* Ej. MI-18: Dados 10 valores informar el mayor */
#include <iostream>
using namespace std;

int main() {
  int newValue, maxValue;

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el " << i + 1 << " numero: ";
    cin >> newValue;
    if (i == 0 || newValue > maxValue)  maxValue = newValue;
  }
  cout << "El mayor numero fue: " << maxValue << ".";

  return 0;
}