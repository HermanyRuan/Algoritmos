/*5.	Leia o tempo de duração de um evento expresso em segundos, 
converta-o e mostre-o expresso em horas, minutos e segundos. 
*/

#include<iostream>
using namespace std;

int main(){
	int tempoSeg, horas, min, seg, restoSeg;
	
	//entrada - leia
	cout << "\n\tDigite o tempo de duracao do evento em segundos: ";
	cin >> tempoSeg;
	
	//processamento - converta expresso em horas, minutos e segundos
	horas = tempoSeg/3600;
	restoSeg = tempoSeg%3600;     //restSeg = tempoSeg-(horas*3600);
	min = restoSeg/60;
	seg = restoSeg%60;
	
	//saida - mostre
	cout << "\n\tDuracao final: " << horas << " horas, " << min << " min e " << seg << " seg";
	
}
