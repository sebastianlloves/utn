/*
17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada
fila.
*/

#include <iostream>
using namespace std;

int readInt(string message) {
  int value;
  cout << message << ": ";
  cin >> value;
  return value;
}


int main() {
  int M = readInt("Ingrese la cantidad de filas");
  int N = readInt("Ingrese la cantidad de columnas");
  int MATRIZ[M][N];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << "Ingrese el valor de la fila " << i + 1 << ", columna " << j + 1 << ": ";
      cin >> MATRIZ[i][j];
    }
  }

  // a) Imprima la matriz MATRIZA por columnas.
  cout << endl;
  cout << "Las columnas son: " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << "Fila " << j + 1 << ", columna " << i + 1 << ": " << MATRIZ[j][i] << endl;
    }
  }

  // b) Calcule e imprima el valor promedio de los componentes de la matriz.
  int acc = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      acc += MATRIZ[i][j];
    }
  }
  float prom = acc / (float)(M * N);
  cout << "El promedio de todos los elementos de la matriz es " << prom << endl;

  // c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna homóloga.
  int VECSUMCOL[N] = { 0 };
  for (int i = 0; i < N; i++) {
    int accCol = 0;
    for (int j = 0; j < M; j++) {
      accCol += MATRIZ[j][i];
    }
    VECSUMCOL[i] = accCol;
  }
  cout << endl;
  cout << "La suma de las columnas es: " << endl;
  for (int i = 0; i < N; i++) {
    cout << "Columna " << i + 1 << ": " << VECSUMCOL[i] << endl;
  }

  // d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila.
  int VECMAXFIL[M] = { 0 };

  for (int i = 0; i < M; i++) {
    int maxRow;
    for (int j = 0; j < N; j++) {
      if (j == 0 || MATRIZ[i][j] > maxRow) maxRow = MATRIZ[i][j];
    }
    VECMAXFIL[i] = maxRow;
  }
  cout << endl;
  cout << "Los maximos de cada fila son: " << endl;
  for (int i = 0; i < M; i++) {
    cout << "Fila " << i + 1 << ": " << VECMAXFIL[i] << endl;
  }


  return 0;
}