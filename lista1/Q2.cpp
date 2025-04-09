#include <iostream>
using namespace std;


/*
Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações: número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira (contendo 10 cigarros). 
*/

int main(){
	int anos, qtd, precoCarteira, valorTotal, totalCigarros, precoPorCig;
	
	cout << "\n\tMe informe a quantos anos você fuma. ";
	cin >> anos;
	
	cout << "\n\tQuantos cigarros você fuma por dia? ";
	cin >> qtd;
	
	cout << "\n\tQuanto custa cada carteira de cigarro? ";
	cin >> precoCarteira;
	
	totalCigarros = anos*365*qtd;
	precoPorCig = precoCarteira/10;
	valorTotal = totalCigarros*precoPorCig;
	
	cout << "\n\tO valor total gasto com cigarros é de " << valorTotal << " reais.";
	
	return 0;
}
