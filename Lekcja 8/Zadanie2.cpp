#include <iostream>
using namespace std;

int main() {
    int wybor;
    double liczba1, liczba2, wynik;

    do {
        cout << "Wybierz funkcje:\n";
        cout << "1. Suma\n";
        cout << "2. Roznica\n";
        cout << "3. Iloczyn\n";
        cout << "4. Iloraz\n";
        cout << "0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba2;

        switch (wybor) {
            case 1:
                wynik = liczba1 + liczba2;
                cout << "Wynik: " << wynik << endl;
                break;
            case 2:
                wynik = liczba1 - liczba2;
                cout << "Wynik: " << wynik << endl;
                break;
            case 3:
                wynik = liczba1 * liczba2;
                cout << "Wynik: " << wynik << endl;
                break;
            case 4:
                if (liczba2 != 0) {
                    wynik = liczba1 / liczba2;
                    cout << "Wynik: " << wynik << endl;
                } else {
                    cout << "Blad: dzielenie przez zero!" << endl;
                }
                break;
            default:
                cout << "Nieprawidlowy wybor. Sproboj ponownie." << endl;
        }

    } while (wybor != 0);

    return 0;
}
