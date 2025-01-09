#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj liczbe calkowita N: ";
    cin >> N;

	cout << "\n iczby nieparzyste od 1 do " << N << ":" << endl;
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {  
            cout << i << " " << endl;
        }
    }

    cout << endl; 
    return 0;
}
