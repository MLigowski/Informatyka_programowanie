#include <iostream>
using namespace std;

int main() {
    int tablica[10]; 
    int sumaParzystych = 0; 

    
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }


    cout << "Liczby parzyste: ";
    bool pierwszaLiczba = true;  
    for (int i = 0; i < 10; i++) {
        if (tablica[i] % 2 == 0) { 
            if (!pierwszaLiczba) {
                cout << ", "; 
            }
            cout << tablica[i];  
            sumaParzystych += tablica[i];  
            pierwszaLiczba = false; 
        }
    }

    cout << endl;  
    cout << "Suma liczb parzystych: " << sumaParzystych << endl;  

    return 0;
}
