#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char caractere;
    
    cout << "Digite um unico caractere: ";
    cin >> caractere;
    
    cout << "O codigo ASCII do caractere '" << caractere << (int)caractere << endl;
    
    return 0;
}