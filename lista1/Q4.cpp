#include <iostream>
using namespace std;

int main(){
    int N;
    float  percent, result;

    cout << "Digite um número inteiro qualquer ";
    cin >> N;

    cout << "Digite um percentual que você deseja aplicar sobre esse número ";
    cin >> percent;

    result = N*(percent/100);

    cout << "O valor do percentual é " << result;
}