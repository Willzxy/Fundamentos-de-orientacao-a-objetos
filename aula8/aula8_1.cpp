#include <iostream>
#include <cmath>
using namespace std;

float areaQuadrado(float lado) {
    return lado * lado;
}

float areaRetangulo(float base, float altura) {
    return base * altura;
}

float areaCirculo(float raio) {
    return M_PI * raio * raio;
}

void menu() {
    int opcao;

    do {
        cout << "\n=== Calculo de areas ===" << endl;
        cout << "1. Quadrado" << endl;
        cout << "2. Retangulo" << endl;
        cout << "3. Circulo" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                float lado;
                cout << "Digite o valor do lado: ";
                cin >> lado;
                cout << "Area do quadrado: " << areaQuadrado(lado) << endl;
                break;
            }
            case 2: {
                float base, altura;
                cout << "Digite o valor da base: ";
                cin >> base;
                cout << "Digite o valor da altura: ";
                cin >> altura;
                cout << "Area do retangulo: " << areaRetangulo(base, altura) << endl;
                break;
            }
            case 3: {
                float raio;
                cout << "Digite o valor do raio: ";
                cin >> raio;
                cout << "Area do circulo: " << areaCirculo(raio) << endl;
                break;
            }
            case 0:
                cout << "Encerrando..." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while(opcao != 0);
}

int main() {
    menu();
    return 0;
}