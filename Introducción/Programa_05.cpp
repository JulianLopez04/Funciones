#include <iostream>

using namespace std;

int factorial(int a);

int main()
{
    int N1;
    cout << "\nFactorial de un numero." << endl;
    cout << "\nIntroduzca el valor del numero: ";
    cin >> N1;
    int facto = factorial(N1);
    cout << "\nEl " << N1 << "! es: " << facto << endl;
    return 0;
}

int factorial(int a){
    int i;
    int resultado = 1;
    for(i=1; i<=a; i++){
        resultado*=i;
    }
    return resultado;
}
