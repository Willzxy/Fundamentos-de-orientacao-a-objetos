#include <iostream>
using namespace std;

int main(){
    int var1, var2;

    cout <<"Primeiro valor: ";
    cin >> var1;

    cout <<"Segundo valor: ";
    cin >> var2;

    cout << var1+var2 << endl;
    cout << var1-var2;
    cout << "\n";
    cout << var1*var2;
    cout << "\n";
    cout << var1/var2;

    cout << var1 << " + " << var2 << " = " << var1+var2 << "\n";
    cout << var1 << " - " << var2 << " = " << var1-var2 << "\n";
    cout << var1 << " * " << var2 << " = " << var1*var2 << "\n";
    cout << var1 << " / " << var2 << " = " << var1/var2 << "\n";
    return 0;
}