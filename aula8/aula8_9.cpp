#include <iostream>
using namespace std;

int main(){
    #define NLIN 4
    #define NCOOL 5

    int i, j;
    double Laboratorio[NLIN][NCOOL];

    for(i=0; i <= NLIN; i++){
        for(j=0; j <= NCOOL; j++){
            cout << "Digite o peso do aluno sentado no computador " << j << " da fila " <<i <<endl;
            cin >> Laboratorio[i][j];
        }
    }

    for(i=0; i <= NLIN; i++){
        for(j=0; j <= NCOOL; j++){
            cout << "o peso do aluno sentado no computador na fila " << i << "é " << j <<endl;
        }
    }

    return 0;
}