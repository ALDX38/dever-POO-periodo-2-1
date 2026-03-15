#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n1 ,n2 ,n3 ;
cout<<" digite 3 numeros ";
cin>> n1>>n2>>n3;

float media = (n1 + n2 + n3) / 3.0f;

cout << fixed << setprecision(2);
cout << "A media é: " << media << endl;


    return 0;
}