#include <iostream>
using namespace std;

void menu() {
    cout << "Que periodo do dia esta:\n";
    cout << "1. Manha\n";
    cout << "2. Tarde\n";
    cout << "3. Noite\n";
    cout << "Escolha uma opcao: ";
}

void boas_vindas() {
    int op;
    cin >> op;

    if (op == 1) {
        cout << "Bom dia!\n";
    } else if (op == 2) {
        cout << "Boa tarde!\n";
    } else if (op == 3) {
        cout << "Boa noite!\n";
    } else {
        cout << "Opcao invalida!\n";
    }
}

int main() {
    menu();
    boas_vindas();
    return 0;
}