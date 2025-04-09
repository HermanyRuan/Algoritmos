/*
10.	Leia dois valores reais para as variáveis A e B e efetue as operações 
de adição, subtração, multiplicação e resto da divisão de A por B, 
apresentando ao final os resultados obtidos. 
Em seguida leia dois valores lógicos C e D e efetue 
as operações de negação (de cada um dos valores), conjunção (E) e disjunção (OU), 
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
	
	// processamento e saida - efetue e apresente os resultados das operações 
	// de adição, subtração, multiplicação e resto da divisão de A por B
	cout << "\n\tA + B = " << (A+B);
	cout << "\n\tA - B = " << (A-B);
	cout << "\n\tA * B = " << (A*B);
	//cout << "\n\tResto da divisao das partes inteiras de A por B = " << (A2%B2);
	cout << "\n\tResto da divisao das partes inteiras de A por B = " << ((int)A%(int)B);
	
	//entrada (parte 2) - leitura de dois valores lógicos
	cout << "\n\n\tDigite dois valores logicos (1-true, 0-false): ";
	cin >> C >> D;
	
	cout << "\n\tC = " << C;
	cout << "\n\tD = " << D;
	
	//processamento e saída - efetue e mostre os resultados 
	//das operações de negação (de cada um dos valores), conjunção (E) e disjunção (OU)
	cout << "\n\tNegacao de C (!C): " << !C;
	cout << "\n\tNegacao de D (!D): " << !D;
	cout << "\n\tConjuncao entre C e D (C&&D): " << (C&&D);
	cout << "\n\tDisjuncao entre C e D (C||D): " << (C||D);
	
	
	
}











