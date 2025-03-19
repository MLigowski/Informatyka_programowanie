#include <iostream>
#include <string>
using namespace std;

int main() {
    string ciag;
    char znak;
    

    cout << "Podaj ciag znakow: ";
    getline(cin, ciag); 
    cout << "Podaj znak do zliczenia: ";
    cin >> znak;  


    int licznik = 0;
    

    int pozycje[ciag.length()]; 
    int indeks = 0;  


    for (int i = 0; i < ciag.length(); i++) {
        if (ciag[i] == znak) {
            licznik++;
            pozycje[indeks++] = i + 1; 
        }
    }


    cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;
    cout << "Pozycje wystapien: ";
    for (int i = 0; i < licznik; i++) {
        cout << pozycje[i];
        if (i < licznik - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
