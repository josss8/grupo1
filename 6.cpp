#include <iostream>
using namespace std;

int main() {
	int decision;
	
	cout << "Eres un cirujano con un �rgano vital disponible para trasplante.\n";
	cout << "Solo puedes salvar a una persona con �l, pero hay varios pacientes esper�ndo.\n";
	cout << "�A qui�n salvas?\n";
	cout << "1. Un cient�fico brillante que podr�a curar enfermedades.\n";
	cout << "2. Un ni�o de 5 a�os.\n";
	cout << "3. Una madre soltera con tres hijos peque�os.\n";
	cout << "4. Un anciano .\n";
	cout << "5. dejas que el sistema de salud elija a alguien random.\n";
	
	cin >> decision;
	
	if (decision == 1) {
		cout << "Salvaste al cient�fico. Podr�a revolucionar la medicina, pero los dem�s murieron.\n";
	} else if (decision == 2) {
		cout << "Salvaste al ni�o. Tiene toda la vida por delante.\n";
	} else if (decision == 3) {
		cout << "Salvaste a la madre. Sus hijos no quedaron hu�rfanos.\n";
	} else if (decision == 4) {
		cout << "Salvaste al anciano, pero su tiempo era limitado en comparaci�n con otros.\n";
	} else if (decision == 5) {
		cout << "El sistema eligi�, Tal vez fue justo, pero otros no lo ver�n as�.\n";
	} else {
		cout << "Decisi�n inv�lida.\n";
	}
	
	
}
