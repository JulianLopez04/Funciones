#include <iostream>

using namespace std;

void Max(int a, int b);

int main()
{
    int N1, N2;
    cout << "\nMayor de dos numeros enteros." << endl;
    cout << "\nIntroduzca el valor del primer numero: ";
    cin >> N1;
    cout << "\nIntroduzca el valor del segundo numero: ";
    cin >> N2;
    Max(N1,N2);
    return 0;
}

void Max(int a, int b){
    if(a>b){
        cout << "\n" << a << " es mayor.\n" << endl;
    }
    else if(a<b){
            cout << "\n" << b << " es mayor.\n" << endl;
    }
    else
        cout << "\nSon iguales.\n" << endl;
}
