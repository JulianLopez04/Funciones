#include <iostream>

using namespace std;

int Max(int a, int b);

int main()
{
    int N1, N2, N3;
    cout << "\nMayor de tres numeros enteros." << endl;
    cout << "\nIntroduzca el valor del primer numero: ";
    cin >> N1;
    cout << "\nIntroduzca el valor del segundo numero: ";
    cin >> N2;
    cout << "\nIntroduzca el valor del tercer numero: ";
    cin >> N3;
    int max = Max(Max(N1,N2),N3);
    cout << "\nEl numero mayor es: " << max << endl;
    return 0;
}

int Max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
