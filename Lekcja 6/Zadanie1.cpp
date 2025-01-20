#include <iostream>
using namespace std;

int main() {


    int tablica[5];  
    int suma = 0;    
    int srednia;  

    cout << "Podaj 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
    }


    for (int i = 0; i < 5; i++) {
        suma += tablica[i];
    }
	
	srednia = suma / 5;
    cout << "Srednia liczb: " << srednia << endl;
    return 0;
}
