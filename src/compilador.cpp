//
// Created by Miguel on 09/07/2025.
//

#include "../include/compilador.h"
#include <iostream>
using namespace std;

compilador::compilador(string& codigo) {
    codigoFuente = codigo;
}
void compilador::iniciar() {

    cout << "Compilador iniciado." << std::endl;
    // Unsigned para evitar valores negativos
    mapearcodigoFuente();
    vector <unsigned char> vectorCodigo(30000, 0);
    int puntero = 0;
    for (int i = 0; i < codigoFuente.size(); i++) {
        switch (codigoFuente[i]) {
            case '+':
                vectorCodigo[puntero]++;
                break;
            case '-':
                vectorCodigo[puntero]--;
                break;
            case '>':
                puntero++;
                break;
            case '<':
                puntero--;
                break;
            case '.':
                cout << vectorCodigo[puntero];cout << static_cast<char>(vectorCodigo[puntero] + '0');
                break;
            case ',':
                char entrada;
                cin >> entrada;
                vectorCodigo[puntero] = static_cast<unsigned char>(entrada);
                break;
            case '[':
                if (vectorCodigo[puntero] == 0) {
                    i = tablaSimbolos[i]; // Salta al cierre del bucle
                }
                break;
            case ']':
                if (vectorCodigo[puntero] != 0) {
                    i = tablaSimbolos[i]; // Vuelve al inicio del bucle
                }
                break;
        }
    }


}

void compilador::mapearcodigoFuente() {
    for (int i = 0; i < codigoFuente.size(); i++) {
        if (codigoFuente[i] == '[') {
            pilaAbiertos.push(i);
        } else if (codigoFuente[i] == ']') {
            tablaSimbolos[i] = pilaAbiertos.top();
            tablaSimbolos[pilaAbiertos.top()] = i;
            pilaAbiertos.pop();
        }
    }
    cout << "Codigo mapeado" << endl;
}