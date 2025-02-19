#include <iostream>
using namespace std;

int main() {
    int liczby[10];
    int najmniejsza; 


    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    najmniejsza = liczby[0];


    for (int i = 1; i < 10; i++) {
        if (liczby[i] < najmniejsza) {
            najmniejsza = liczby[i];
        }
    }


    cout << "Najmniejsza liczba to: " << najmniejsza << endl;

    return 0;
}
