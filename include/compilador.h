//
// Created by Miguel on 09/07/2025.
//

#ifndef COMPILADOR_H
#define COMPILADOR_H
#include <stack>
#include <unordered_map>
#include <string>
#include <vector>


class compilador {
public:
    compilador(const std::string& codigo);

    void iniciar();
    void mapearcodigoFuente();

private:
    std::unordered_map<int, int> tablaSimbolos;
    std::string codigoFuente;
    std::stack<int> pilaAbiertos;

};



#endif //COMPILADOR_H
