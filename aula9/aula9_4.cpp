#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pessoa { 
    string nome;
    int idade;
    float altura;
};

int main(){
    vector<Pessoa> pessoas;
    char continuar = 's';

    while(continuar == 's' || continuar == 'S'){
        Pessoa p;

        cin.ignore(1000, '\n');

        cout << "Digite o nome: ";
        getline(cin, p.nome);

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura (em metros)";
        cin >> p.altura;

        cout << "\nDados da pessoa:\n";
        cout << "Nome: " << p.nome << endl;
        cout << "idade: " << p.idade << " anos" << endl;
        cout << "Altura: " << p.altura << " m" << endl;

        cout << "Quer continuar? S/N";
        cin >> continuar;
    }

    cout << "\nPrograma encerrado.\n";
    return 0;
}
