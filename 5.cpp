
#include <iostream>
using namespace std;



int main() {
	int decision;
	
	cout << "Un tren fuera de control se dirige hacia cinco personas en la via principal.\n";
	cout << "hay una posibilidad de accionar una palanca para desviarlo a una via secundaria.\n";
	cout << "¿Que decides hacer?\n";
	cout << "1. No hacer nada.\n";
	cout << "2. Accionar la palanca pero hay un descocnosido.\n";
	cout << "3. Accionar la palanca pero hay un animal\n";
	cout << "4. Accionar la palanca pero hay un Anciano\n";
	cout << "5. Accionar la palanca pero hay un pariente tuyo\n";
		
		
	cin >> decision;
	
	if (decision == 1) {
		cout << " el tren paso sobre las cinco personas\n";
	} else if (decision == 2) {
		cout << "el tren paso sobre una mujer embarazada\n";
	}
	else if (decision == 3) {
		cout << "el tren paso sobre una Tu perro\n";
	}
	else if (decision == 4) {
		cout << "el tren paso sobre Tu abuelo\n";
	}	
	else if (decision == 5) {
		cout << "el tren paso sobre tu Mama\n";
	} else {
		cout << "Decision invalida. El tren sigue su curso...";
	}
}
