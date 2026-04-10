#include <iostream>
#include <string>

using namespace std;

class TrataDivZero {
    public:
        TrataDivZero(int n);
        void msg();
    private:
        int Nlinha;
};

TrataDivZero::TrataDivZero(int n){
    Nlinha = n;
}

void TrataDivZero::msg(){
    cout << "Tratador de erro foi chamado ..." << endl;
    cout << "Erro na linha: " << Nlinha << endl;
}

int main(){
    int n, m;
    cout << "Numerador: ";
    cin >> n;
    cout << "Denominador: ";
    cin >> m;

    try
    {
        if (m ==0 ){ 
            throw (TrataDivZero(__LINE__));
        }
        cout << "Divisão :" << (double)n/m << endl;
    }

    catch(TrataDivZero)
    {
        T.Msg();
    }

    catch (bad_alloc E){
        cout << "Faltou memoria...\n" << endl;
    }

    cout << "Fim..." <<endl;
    system("pause")
    
    return 0;
}