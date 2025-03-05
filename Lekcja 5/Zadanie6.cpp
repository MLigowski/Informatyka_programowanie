#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

   
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;


    for (int i = 1; i <= wysokosc; i++) {
       
        for (int j = 1; j <= szerokosc; j++) {
           
            if (i == 1 || i == wysokosc || j == 1 || j == szerokosc) {
                cout << "*";  
            } else {
                cout << " ";  
            }
        }
        cout << endl; 
    }

    return 0;
}
