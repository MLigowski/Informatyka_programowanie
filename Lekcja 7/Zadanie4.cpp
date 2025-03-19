#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    cout << "Podaj ciag znakow: ";
    cin.getline(str, 100);

    int length = strlen(str);
    char reversed[100];

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0';
    cout << "Odwrocony ciag: " << reversed << endl;

    return 0;
}
