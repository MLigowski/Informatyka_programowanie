#include <iostream> 
int main() {
 int liczba; 
 std::cout << "Podaj liczbe calkowita: "; 
 std::cin >> liczba; 
 if (liczba % 2 == 0) { 
 std::cout << "Liczba " << liczba << " jest parzysta." << std::endl; 
 } 
 else { 
 std::cout << "Liczba " << liczba << " jest nieparzysta." << std::endl; 
 } 
 if (liczba % 3 == 0) { 
 std::cout << "Liczba " << liczba << " jest podzielna przez 3." << std::endl; 
 }
  else { 
  std::cout << "Liczba " << liczba << " nie jest podzielna przez 3." << std::endl; 
  }
  
   return 0; }