#include <iostream>
using namespace std;
int main(){
 
 int N;
 int suma = 0;
 cout << "Podaj  liczbe (dodatnia i calkowita): ";
 cin >> N;
 
 for (int i = 1; i <= N; i++) {
 	
 	suma += i;
 	
 	
 }
 
 cout << "Suma liczb od 1 do " << N << (" = ") << suma << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}