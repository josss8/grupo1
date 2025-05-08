#include <iostream>
using namespace std;

void entrevistaTrabajo() {
    int decision;
    cout << "Situación 1: Estás en una entrevista de trabajo.\n";
    cout << "1. Llegas temprano\n2. Llegas tarde\n3. No llegas\n4. Llegas sin CV\n5. Llegas bien vestido\n";
    cout << "Elige tu decisión (1-5): ";
    cin >> decision;

    switch (decision) {
        case 1: cout << "Te contratan inmediatamente.\n"; break;
        case 2: cout << "Te entrevistan pero te rechazan.\n"; break;
        case 3: cout << "Pierdes la oportunidad.\n"; break;
        case 4: cout << "El entrevistador se molesta.\n"; break;
        case 5: cout << "Causas una buena impresión.\n"; break;
        default: cout << "Decisión no válida.\n";
    }
}

int main() {
    entrevistaTrabajo();
    return 0;
}
