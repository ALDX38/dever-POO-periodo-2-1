#include <iostream>
using namespace std;

int main()
{
    int dias, horas, segundos;

    cout << "Numero de dias: ";
    cin >> dias;

    horas = dias * 24;
    segundos = horas * 3600;

    cout << "Numero de segundos é: " << segundos << endl;

    return 0;
}