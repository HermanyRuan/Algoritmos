#include <iostream>

using namespace std;

int main() {
	
	int idade, anos, meses, dias;
	
	cout << "Vou pedir que voce me forne�a sua idade, dizendo a quantidade de anos, meses e dias" <<endl; 
	cout << "Digite apenas a quantiade de anos." <<endl;
	cin >> anos;
	
	cout << "Digite apenas a quantidade de meses." <<endl;
	cin >> meses;
	
	cout << "Digite apenas a quantidade de dias." <<endl;
	cin >> dias;
	
	anos = anos*365;
	meses = meses*30;
	
	idade = anos+meses+dias;
	
	cout << "Sua idade total em dias de " << idade << " dias.";
	
	system("pause");
	
}
