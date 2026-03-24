#include <iostream>
using namespace std;

int main(){
    float n1=0, n2=0, media=0;
    int faltas=0;

    cout << "Digite qtd faltas> ";
    cin >> faltas;

    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite a nota 2: ";
    cin >> n2;

    media = (n1 + n2) / 2;
    if (faltas > 180) {
        cout  << "Reprovado por faltas"
    } else {
        if (media >= 6) {
            cout << "Aluno aprovado";
        } else {
            cout << "Aluno reprovado media";
        }
    }

    return 0;
}