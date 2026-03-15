#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    cout << "Divisao inteira por 2: " << numero / 2 << endl;
    cout << "Divisao real (ponto flutuante) por 2: " << numero / 2.0 << endl;
    
    return 0;
}
