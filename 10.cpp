#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float celsius, fahrenheit;
    
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;
    
    fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
    
    cout << fixed << setprecision(1);
    cout << "A temperatura em Fahrenheit eh: " << fahrenheit << endl;
    
    return 0;
}