/*
Ej. MI-38: Una bodega quiere lanzar una oferta para terminar con el stock de dos productos. Para ello cuenta con B
cantidad de cajas de vino blanco y T cantidad de cajas de vino tinto. Desea armar la mayor cantidad posible de paquetes
con la oferta y que todos los paquetes tengan igual cantidad de cajas de vino blanco y de vino tinto.
Se pide informar cuántos paquetes se podrán armar como máximo, y cuántas cajas de vino blanco y cuantas de vino tinto
contendrán cada uno.
Utilice las funciones desarrolladas en ejercicios anteriores
*/

/*
45-15. mcd --> cantPaquetes  B/mcd cantBxPaq T/mcd cantTxPaq

*/
using namespace std;
#include <iostream>

int getInteger(string text) {
  int value;
  cout << text;
  cin >> value;
  return value;
}

int getMaxCommonDivisor(int num1, int num2) {
  int potencialMCD = num1 < num2 ? num1 : num2;
  bool isCommonDivisor;
  while (potencialMCD >= 1) {
    isCommonDivisor = num1 % potencialMCD == 0 && num2 % potencialMCD == 0;
    if (isCommonDivisor) return potencialMCD;
    potencialMCD--;
  }
  return potencialMCD;
}

int main() {
  int B, T, countPackages, countB, countT, surplusB = 0, surplusT = 0;
  B = getInteger("Ingrese la cantidad de cajas de vino blanco: ");
  T = getInteger("Ingrese la cantidad de cajas de vino tinto: ");

  countPackages = getMaxCommonDivisor(B, T);
  // /* while(countPackages == 1){
  //   T > B ? surplusB
  // } */

  countB = B / countPackages;
  countT = T / countPackages;
  cout << "Se podran armar " << countPackages << " paquetes con " << countB << " vinos blancos y " << countT << " vinos tintos en cada paquete" << endl;
  

  return 0;
}