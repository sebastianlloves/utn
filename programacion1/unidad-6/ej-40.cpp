#include <iostream>
using namespace std;

/*
a) Una función que reciba un número natural de 4 dígitos en formato de HHMM que corresponde a un tiempo
determinado en horas y minutos, retorne ese tiempo en minutos.
b) Un procedimiento que reciba el costo en pesos de un abono telefónico, la cantidad de minutos libres que incluye
el abono, el cargo en pesos por minuto excedente y la cantidad de minutos utilizados por un abonado, retorne la
cantidad de minutos excedidos y el monto en pesos a abonar (costo del abono más minutos excedidos por el
costo de minutos excedidos) más el 21% del valor del IVA

*/

int getInteger(string text) {
  int value;
  cout << text;
  cin >> value;
  return value;
}

float getFloat(string text) {
  float value;
  cout << text;
  cin >> value;
  return value;
}

int calculateMinutes(int time) {
  int hours = time / 100;
  int minutes = time - (hours * 100);
  return hours * 60 + minutes;
}

void getData(float costoAbono, float cargoMinExcedente, int cantMinLibres, int cantMinUsados, int& cantMinExcedidos, float& montoAbonar) {
  int minutosSobrantes = cantMinLibres - cantMinUsados;
  cantMinExcedidos = minutosSobrantes > 0 ? 0 : minutosSobrantes * (-1);
  montoAbonar = (costoAbono + cantMinExcedidos * cargoMinExcedente) * 1.21;
}

/* int main() {
  int time, minutesCount;
  time = getInteger("Ingrese la hora en formato HHMM: ");
  minutesCount = calculateMinutes(time);

  cout << minutesCount;

  return 0;
} */

int main() {
  float costoAbono, cargoMinExcedente, montoAbonar;
  int cantMinLibres, cantMinUsados, cantMinExcedidos;

  costoAbono = getFloat("Ingrese el costo en pesos del abono telefonico: ");
  cantMinLibres = getInteger("Ingrese la cantidad de minutos libres que incluye el abono: ");
  cargoMinExcedente = getFloat("Ingrese el cargo en pesos por minuto excedente: ");
  cantMinUsados = getInteger("Ingrese la cantidad de minutos utilizados por un abonado: ");

  getData(costoAbono, cargoMinExcedente, cantMinLibres, cantMinUsados, cantMinExcedidos, montoAbonar);

  cout << "La cantidad de minutos excedidos fue: " << cantMinExcedidos << endl;
  cout << "El monto total a abonar es $" << montoAbonar << endl;


  return 0;
}