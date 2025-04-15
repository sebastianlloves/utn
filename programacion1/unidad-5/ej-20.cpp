/*
Ej. MI-20: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la
más joven.
 */
#include <iostream>
using namespace std;

int main() {
  string newName, oldestName = "", youngestName = "";
  int newDate, oldestDate = 0, youngestDate = 0;

  cout << "Ingrese el nombre de la persona: ";
  cin >> newName;

  while (newName != "FIN") {
    cout << "Ingrese la fecha de nacimiento de la persona (AAAAMMDD): ";
    cin >> newDate;

    if (newDate >= 10000000) {
      if (newDate < oldestDate || oldestDate == 0) {
        oldestDate = newDate;
        oldestName = newName;
      }
      if (newDate > youngestDate || youngestDate == 0) {
        youngestDate = newDate;
        youngestName = newName;
      }
    }

    cout << "Ingrese el nombre de la persona: ";
    cin >> newName;
  }

  if (oldestName != "" && youngestName != "") {
    cout << "El mas viejo fue: " << oldestName << "." << endl;
    cout << "El mas joven fue: " << youngestName << "." << endl;
  }
  return 0;
}