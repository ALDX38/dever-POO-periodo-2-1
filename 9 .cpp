#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    cout << "O antecessor de " << numero << " eh " << numero - 1 << endl;
    cout << "O sucessor de " << numero << " eh " << numero + 1 << endl;
    
    return 0;
}