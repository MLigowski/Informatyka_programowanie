#include <iostream>
#include <string>
using namespace std;

string GetTextFromUser() {
    string text;
    getline(cin, text);
    return text;
}

string ReverseString(const string& text) {
    string reversedText = text;
    int n = reversedText.length();
    for (int i = 0; i < n / 2; i++) {
        swap(reversedText[i], reversedText[n - i - 1]);
    }
    return reversedText;
}

void DisplayResult(const string& reversedText) {
    cout << "Odwrocony ciag: " << reversedText << endl;
}

int main() {
    cout << "Podaj ciag znakow: ";
    string text = GetTextFromUser();
    string reversedText = ReverseString(text);
    DisplayResult(reversedText);
    return 0;
}
