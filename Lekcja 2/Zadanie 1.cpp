#include <iostream>
using namespace std;
int main(){
	
	int liczba;
cout << "Podaj ocene: ";
cin >> liczba ;

if ((liczba >=0) && (liczba <= 49)) {
	cout << "Wynik egzaminu: " << liczba << endl;
	cout << "Ocena niedostateczna" << endl; 
}
	else if ((liczba >=50) && (liczba <= 69)) {
	cout << "Wynik egzaminu: " << liczba << endl;
	cout << "Ocena dostateczna" << endl; 
}
	else if ((liczba >=70) && (liczba <= 84)) {
	cout << "Wynik egzaminu: " << liczba << endl;
	cout << "Ocena dobra" << endl;
}
	else if ((liczba >=85) && (liczba <= 99)) {
	cout << "Wynik egzaminu: " << liczba << endl;	
	cout << "Ocena bardzo dobra" << endl;
}
	else if (liczba ==100) {
	cout << "Wynik egzaminu: " << liczba << endl;
	cout << "Ocena celujaca" << endl;
}
	else {
	cout << "Jest z ciebie idiota" << endl;
	cout << "Zdobyles az: " << liczba << " punktow" << endl;
}
    
	return 0;

}


