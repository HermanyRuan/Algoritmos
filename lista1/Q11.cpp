/*11.	Leia três notas e três pesos, um para cada nota, 
calcule e escreva a média aritmética e a média ponderada das três notas 
e, nos dois casos, quanto falta para o aluno ser aprovado por média 
(considere a média para aprovação igual a 6,0).
*/

#include<iostream>
using namespace std;

int main(){
	float n1, n2, n3, mediaPond, mediaArit, p1, p2, p3;
	
	//entrada - notas e pesos
	cout << "\n\tDigite a primeira nota e o primeiro peso: ";
	cin >> n1 >> p1;
	cout << "\n\tDigite a segunda nota e o segundo peso: ";
	cin >> n2 >> p2;
	cout << "\n\tDigite a terceira nota e o terceiro peso: ";
	cin >> n3 >> p3;
	
	//processamento
	mediaArit = (n1+n2+n3)/3;
	mediaPond = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	
	//saida
	cout << "\n\tMedia Aritmetica = " << mediaArit;
	cout << "\n\tMedia Ponderada = " << mediaPond;
	
	if(mediaArit<6)
	cout << "\n\tFaltam " << (6-mediaArit) << " pontos para a aprovacao por media aritmetica";
	else{
	cout << "\n\tAprovado por ";
	cout << "media aritmetica";
	}
								
	if(mediaPond<6){
		cout << "\n\tFaltam " << (6-mediaPond) << " pontos para a aprovacao por media ponderada";
	}else{
		cout << "\n\tAprovado por media ponderada";
	}


}




