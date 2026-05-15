#include <iostream>
#include <string>
using namespace std;

class Conta {
    private:
        int numeroConta;
        string titular;
        double saldo;
    
    public:
        Conta(int numero, string nome, double saldoInicial){
            numeroConta = numero;
            titular = nome;
            saldo = saldoInicial;
        }
        
    void depositar(double valor){
        saldo += valor;
        cout <<"Deposito realizado com sucesso ! " << endl;
    }

    void sacar(double valor){
        if (valor <= saldo){
            saldo == valor;
            cout << "Saque realizado com sucesso !" << endl;
        }else {
            cout << "Saldo insuficiente!" << endl;
        }
    }

    void exibitDados(){
        cout << "\n=== DADOS DA CONTA ===" << endl;
        cout << "Titular: " << titular << endl;
        cout << "conta: " << numeroConta << endl;
        cout << "Saldo : R$ " << saldo << endl;
    }
};


