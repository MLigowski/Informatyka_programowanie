#include <iostream>
using namespace std;
int main(){
	
	int liczba_calkowita1;
	cout << "Podaj pierwsza liczbe calkowita: " << endl;
	cin >> liczba_calkowita1;
	
	int liczba_calkowita2;
	cout << "Podaj drugom liczbe calkowita: " << endl;
	cin >> liczba_calkowita2;
	
	char znak;
	cout << "Podaj znak(+,-,*,/): ";
	cin >> znak; 
	int wynik;
	switch( znak ) {
		case '+':
		wynik = liczba_calkowita1 + liczba_calkowita2;
		cout << wynik <<endl;
		break;
		case '-':
		wynik = liczba_calkowita1 - liczba_calkowita2;
		cout << wynik <<endl;
		break;
		case '*':
		wynik = liczba_calkowita1 * liczba_calkowita2;
		cout << wynik <<endl;
		break;
		case '/':
			if ((liczba_calkowita1 == 0) || (liczba_calkowita2 == 0)){
	cout << "Error" << endl;			
	}
	else{
		wynik = liczba_calkowita1 / liczba_calkowita2;
		cout << wynik <<endl;
	}
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
} 
