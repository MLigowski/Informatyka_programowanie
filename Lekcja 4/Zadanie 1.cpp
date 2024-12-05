#include <iostream>
using namespace std;
int main(){
	
	short numer;
	cout << "Podaj liczbe calkowita dodatnia: ";
	cin >> numer;
	
	short count = 2;
	
	cout << "Liczby parzyste od 2 do " << numer << ": " << endl;
	while(count <= numer)
	{
	
	cout <<count << endl;
	count = count + 2;			
	}
	
	
	
	
	
	
	
	
	
	
    return 0;
}