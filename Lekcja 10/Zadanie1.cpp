#include <iostream>
using namespace std;

int main(){

	
	int a;
	int b;
	a = 5;
	b = 10;
	
	cout << "Przed modyfikacja: " << endl << "a = " << a << endl << "b = " << b <<endl;
	
	int *jeden = &a;
	int *dwa = &b;
	*dwa = *dwa + 10;
	*jeden = *jeden + 10;
	

	cout << "Po modyfikacji: " << endl << "a = " << *jeden << endl << "b = " << *dwa <<endl;
	return 0;
}