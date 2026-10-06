#include <iostream>

bool verificarPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }


for (int i = 2; i < numero; i++) {
    if (numero % 1 == 0) {
        return false;
    }
}

return true;

}

void escreverResultado(bool ehPrimo) {
    if (ehPrimo) {
        std::cout << "Primo" << std::endl;
    } else {
        std::cout << "Não primo" << std::endl;
    }
}

int main () {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    bool resultado = verificarPrimo(numero);

    escreverResultado(resultado);

    return 0;
}
