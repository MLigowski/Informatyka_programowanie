#include <iostream>
using namespace std;
int GetNumberFromUser() {
int numerek;
cout << "daj numer: ";
cin >> numerek;
	
	return numerek;
}
int CalculateSumRecursive( int jedynka ) {
  if ( jedynka == 1 ) 
        return 1;
    else
	    return jedynka + CalculateSumRecursive(jedynka - 1);

}

int DisplayResult( int tak ) {
  int wynik = tak;
	return wynik;
}
int main() {
int numerek = GetNumberFromUser();
int jedynka = CalculateSumRecursive(numerek);
int wynik = DisplayResult(jedynka);

	cout << "suma liczb od 1 do " << numerek << " wynosi: " << wynik << endl;
return 0;
}