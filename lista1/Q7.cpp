#include <iostream>
using namespace std;

int main(){

    int C, F;
    cout << "\n\tDigite a temperatura em celsius que deseja converter para fahrenreit ";
    cin >> C;

    F = (9*C+160)/5;

    cout << "\n\tA temperatura convertida para fahrenreit é de " << F << " graus";

    system("pause");
}