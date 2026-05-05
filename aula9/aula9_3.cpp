#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pessoas {
    string nome;
    int idade;
    float altura;
};

int main(){
    vector<Pessoas> pessoas;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S'){
        Pessoas p;

        cin.ignore();

        cout << "Digite o nome: ";
        getline(cin, p.nome);

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura (em metros): ";
        cin >> continuar;
    }

    cout << "/n=== Lista de Pessoas ===/n";
    for (int i=0; i < pessoas.size(); i++){
        cout << "/nPessoas " << i+ 1 << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Idade: " << pessoas[i].idade << " anos" << endl;
        cout << "Altura: " << pessoas[i].altura << " m" << endl;
    }

    return 0;
}
