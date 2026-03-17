    #include <iostream>
    using namespace std;

    int main(){
        string nome = "celia";
        string letra = "a";
        string sobrenome = " kouth cabral";

        cout << "meu nome e :" << nome << endl;
        cout << "nome completo " << (nome.append(sobrenome)) << endl;
        cout << "tamanho " << (nome.length()) << endl;
        cout << "\nPrimeira letra do nome: " << nome[0];
        nome[0] = 't';
        cout << "meu nome agora e :" << nome <<endl;

        return 0;
    }