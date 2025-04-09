#include <iostream>
using namespace std;


int main() {
    float cotacao, dolar, real;

    cout << "Digite o valor da cotação do dolár no dia de hoje. ";
    cin >> cotacao;

    cout << "Quantos dolares você deseja converter para o real? ";
    cin >> dolar;

    real = dolar*cotacao;

    cout << "O valor em real é de " << real << " reais";
 
    system("pause");
}