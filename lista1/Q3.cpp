#include <iostream>
using namespace std;

int main() {
    int compra, parcela, resultado;
    
    cout << "\nSeja bem vindo a loja Sua Melhor Compra!";
    
    cout << "\nDigite o valor do produto que você deseja comprar.";
    cin >> compra;
    
    cout << "\nAgora digite em quantas vezes deseja parcelar esse valor (Deve ser no máximo em 10 parcelas)";
    cin >> parcela;
    
    resultado = compra/parcela;
    
    cout << "\nO valor da sua parcela será de " << resultado << " reais";

    system("pause");
}