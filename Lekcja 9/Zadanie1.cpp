#include <iostream>
using namespace std;


int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}


int CalculateSumRecursive(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + CalculateSumRecursive(n - 1); 
    }
}


void DisplayResult(int sum) {
    cout << "Suma liczb od 1 do n wynosi: " << sum << endl;
}

int main() {
    int n = GetNumberFromUser(); 
    int sum = CalculateSumRecursive(n); 
    DisplayResult(sum); 
    return 0;
}
