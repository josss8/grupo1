#include <iostream>

using namespace std;

void situacion2() {
    int decision;
    cout << "Situacion 2: Te encontraste un telefono en la calle.\n";
    cout << "1. Esperar a que llamen.\n";
    cout << "2. Buscar el contacto de emergencia y llamar.\n";
    cout << "3. Llevarlo a una estacion de policias.\n";
    cout << "4. Apagarlo y sacarle el chip.\n";
    cout << "5. Dejarlo donde lo encontre.\n";
    cout << "Elige una decision: (1-5): ";
    cin >> decision;

    switch (decision) {
        case 1: cout << "Te podran dar una recompensa.\n"; break;
        case 2: cout << "Puede que no tenga ningun contacto de emergencia.\n"; break;
        case 3: cout << "La policia puede dar el aviso del celular perdido.\n"; break;
        case 4: cout << "Estaria mal y no sabe cuanto le costo a la persona poder tener un celular.\n"; break;
        case 5: cout << "Podria llegar el que lo perdio a ese mismo lugar.\n"; break;
        default: cout << "Decision no valida.\n"; break;
    }
}

int main() {
    situacion2();  
    return 0;
}
