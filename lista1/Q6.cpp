// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int distribuidor, impostos, valorInicial, valorFinal;
    
    cout << "Olá consumidor digite o valor do custo de fábrica do seu carro que iremos calcular o valor final com todas as taxas.\n";
    cin >> valorInicial;
    
    distribuidor = valorInicial*0.28;
    impostos = valorInicial*0.45;
    
    valorFinal = valorInicial+distribuidor+impostos;
    
    cout << "\nO valor final do seu carro com todas as taxas é de " << valorFinal << " reais\n";

	system("pause");
}