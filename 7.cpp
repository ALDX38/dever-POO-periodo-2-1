#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero ";
    cin >> numero;
     float quadrado = numero * numero;
    
    cout << "O valor " << numero << " elevado ao quadrado eh: " << quadrado << endl;
    
    return 0;
}