#include <iostream>
using namespace std;


int main() {
    float area, base, altura;

    cout << "Digite a base do retângulo, que você deseja calcular a área ";
    cin >> base;

    cout << "Agora digite a altura do retângulo ";
    cin >> altura;

    area = base*altura;

    cout << "A área do seu retângulo é de " << area;

    system("pause");
}