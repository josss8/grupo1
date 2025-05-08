#include <iostream>
using namespace std;

int main() {
	int decision;
	
	cout << "Eres un cirujano con un órgano vital disponible para trasplante.\n";
	cout << "Solo puedes salvar a una persona con él, pero hay varios pacientes esperándo.\n";
	cout << "¿A quién salvas?\n";
	cout << "1. Un científico brillante que podría curar enfermedades.\n";
	cout << "2. Un niño de 5 años.\n";
	cout << "3. Una madre soltera con tres hijos pequeños.\n";
	cout << "4. Un anciano .\n";
	cout << "5. dejas que el sistema de salud elija a alguien random.\n";
	
	cin >> decision;
	
	if (decision == 1) {
		cout << "Salvaste al científico. Podría revolucionar la medicina, pero los demás murieron.\n";
	} else if (decision == 2) {
		cout << "Salvaste al niño. Tiene toda la vida por delante.\n";
	} else if (decision == 3) {
		cout << "Salvaste a la madre. Sus hijos no quedaron huérfanos.\n";
	} else if (decision == 4) {
		cout << "Salvaste al anciano, pero su tiempo era limitado en comparación con otros.\n";
	} else if (decision == 5) {
		cout << "El sistema eligió, Tal vez fue justo, pero otros no lo verán así.\n";
	} else {
		cout << "Decisión inválida.\n";
	}
	
	
}
