#include <iostream>
using namespace std;

int main() {
    int tablica[3][3]; 
    int suma = 0;


    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j+1 << ": ";
            cin >> tablica[i][j];
            suma += tablica[i][j]; 
        }
    }

 
    double srednia = suma / 9.0;

 
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
