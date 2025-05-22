/*
18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y
columnas. Desarrollar un programa que determine e imprima:
a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la
sumatoria de elementos.
b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor
(considerando que N fuera par).
c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria
de elementos.
*/

#include <iostream>
using namespace std;

int readInt(string message) {
  int value;
  cout << message << ": ";
  cin >> value;
  cout << endl;
  return value;
}


int main() {
  cout << endl;
  int N = readInt("Ingrese la cantidad de filas y columnas");
  int arrs[N][N] = { 0 };

  // Cargar la matriz
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      arrs[i][j] = readInt("Ingrese un valor");
    }
  }

  // Mostrar la matriz
  for (int i = 0; i < N; i++) {
    cout << "\n";
    for (int j = 0; j < N; j++) {
      cout << arrs[i][j] << "\t";
    }
    cout << "\n";
  }

  // Hallar diagonal principal
  int diagPrincipal[N] = { 0 };
  int accDiagPrin = 0;
  for (int i = 0; i < N; i++)
  {
    int value = arrs[i][i];
    diagPrincipal[i] = value;
    accDiagPrin += value;
  }
  cout << "accDiagPrin" << ": " << accDiagPrin << "\n";

  // Hallar diagonal Secundaria
  int diagSecundaria[N] = { 0 };
  int accDiagSec = 0;
  for (int i = 0; i < N; i++)
  {
    int value = arrs[i][N - 1 - i];
    diagSecundaria[i] = value;
    accDiagSec += value;
  }
  cout << "accDiagSec" << ": " << accDiagSec << "\n";

  cout << "diagPrincipal" << "\n";
  for (int i = 0; i < N; i++) {
    cout << diagPrincipal[i] << "\t";
  }
  cout << "\n";
  cout << "diagSecundaria" << "\n";
  for (int i = 0; i < N; i++) {
    cout << diagSecundaria[i] << "\t";
  }
  cout << "\n";

  return 0;
}