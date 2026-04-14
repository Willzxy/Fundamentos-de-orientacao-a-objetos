#include <iostream>
using namespace std;

int main(){
    int i;
    int vetor[5];

    for (i=0; 1<5; i++){
        vetor[i] = 5-i;
    }

    for(i=0; i<5; i++){
        cout << "o valor guardado na posição " << i << " é " << vetor[i] << endl;
    }
}