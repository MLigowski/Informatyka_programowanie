#include <iostream>
using namespace std;

int main() {
    int wiersze, kolumny;

  
    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;

    int macierz[wiersze][kolumny];
    int liczba = 1; 

 
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            macierz[i][j] = liczba;
            liczba += 2; 
        }
    }

  
    cout << "Macierz: " << endl;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
