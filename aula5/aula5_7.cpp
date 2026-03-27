#include <iostream>
using namespace std;

int main(){
    char tamanho;
    cout << "Digite o tamnho: (P/M/G)";
    cin >> tamanho;
    switch (tamanho)
    {
    case 'P':
        cout << "pequeno";
        break;
    case 'M':
        cout << "médio";
        break;
    default:
        cout << "nao atendemos este publico";
        break;
    }
}