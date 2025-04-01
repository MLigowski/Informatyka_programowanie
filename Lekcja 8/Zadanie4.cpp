#include <iostream>
using namespace std;

void GetArrayFromUser(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> arr[i];
	}
}

int FindMaxValue(int arr[], int size) {
    int maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;

}

void DisplayResult(int maxValue) {
    cout << "Najwieksza liczba: " << maxValue << endl;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    GetArrayFromUser(numbers, SIZE);
    int maxValue = FindMaxValue(numbers, SIZE);
    DisplayResult(maxValue);

    return 0;
}
