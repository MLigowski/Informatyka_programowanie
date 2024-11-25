#include <iostream>
using namespace std;
int main(){
 
 int celcjusz;
 cout << "podaj temperature w celcjuszach: ";
 cin >> celcjusz;
 
 char znak;
 cout << "Liczymy na Kelvina(K) czy Fahreenheit(F)?";
 cin >> znak;
 
 float temp;
 
 switch(znak) {
 	case 'K':
 		temp = znak + 273.15;
 	cout << "Temperatura w stopniach Kelvina: " << temp << endl;
 	break;
	 case 'F':
 		temp = (celcjusz * 9/5) + 32;
 	cout << "Temperatura w stopniach Fahrenheita: " << temp << endl;
 	break;
 	deafult:
 		cout << "Error" << endl;
 		break;
 }
 
 

 
    return 0;
}