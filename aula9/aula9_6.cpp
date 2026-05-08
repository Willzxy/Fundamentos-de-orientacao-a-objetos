#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    cout << "Topo da pilha: " << pilha.top() << endl;
    pilha.pop();

    cout << "Agora o tpo da pilha: "<< pilha.top() << endl;
    cout << "teste";
    return 0;
}