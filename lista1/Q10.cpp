/*
10.	Leia dois valores reais para as vari�veis A e B e efetue as opera��es 
de adi��o, subtra��o, multiplica��o e resto da divis�o de A por B, 
apresentando ao final os resultados obtidos. 
Em seguida leia dois valores l�gicos C e D e efetue 
as opera��es de nega��o (de cada um dos valores), conjun��o (E) e disjun��o (OU), 
apresentando ao final os resultados obtidos. 
*/

#include<iostream>
using namespace std;

int main(){
	float A, B;
	//int A2, B2;
	bool C, D;
	
	//entrada - leitura
	cout << "\n\tDigite dois valores reais para A e B: ";
	cin >> A >> B;
	
	
	cout << "\n\tA = " << A;
	
	//A2 = A;
	//B2 = B;
	
	// processamento e saida - efetue e apresente os resultados das opera��es 
	// de adi��o, subtra��o, multiplica��o e resto da divis�o de A por B
	cout << "\n\tA + B = " << (A+B);
	cout << "\n\tA - B = " << (A-B);
	cout << "\n\tA * B = " << (A*B);
	//cout << "\n\tResto da divisao das partes inteiras de A por B = " << (A2%B2);
	cout << "\n\tResto da divisao das partes inteiras de A por B = " << ((int)A%(int)B);
	
	//entrada (parte 2) - leitura de dois valores l�gicos
	cout << "\n\n\tDigite dois valores logicos (1-true, 0-false): ";
	cin >> C >> D;
	
	cout << "\n\tC = " << C;
	cout << "\n\tD = " << D;
	
	//processamento e sa�da - efetue e mostre os resultados 
	//das opera��es de nega��o (de cada um dos valores), conjun��o (E) e disjun��o (OU)
	cout << "\n\tNegacao de C (!C): " << !C;
	cout << "\n\tNegacao de D (!D): " << !D;
	cout << "\n\tConjuncao entre C e D (C&&D): " << (C&&D);
	cout << "\n\tDisjuncao entre C e D (C||D): " << (C||D);
	
	
	
}











