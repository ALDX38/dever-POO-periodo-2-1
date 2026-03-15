#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float  raio , area;
  const float  pi = 3.14159;
  
    cout << "Digite o Raio: ";
    cin >> raio;
   
   area = pi * raio * raio ; 
   
    cout << fixed << setprecision(2);
    cout << "O raio é "  << area  << endl;
    
    return 0;
}