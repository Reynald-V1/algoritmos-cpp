/*
6. Elaborar um algoritmo que leia um vetor de 10 posi��es de inteiros e chame 
uma fun��o MinMax. Esta fun��o deve receber o vetor lido e, por refer�ncia, 
duas vari�veis inteiras, min e max. O objetivo da fun��o � buscar os valores 
do menor e maior elementos do vetor e atribuir �s vari�veis min e max respectivamente. 
*/

#include <iostream>

using namespace std;

void minMax(int vetor[], int *pMin, int *pMax);

int main(){

	int vetor[10], min, max, i;
	
	for(i=0; i<10; i++){
		cout << "\nDigite o elemento do vetor no indice " << i << ": ";
		cin >> vetor[i];
	}
	
	minMax(vetor, &min, &max);

	cout << "\n\nMenor elemento do vetor: " << min;
	cout << "\nMaior elemento do vetor: " << max;

    cout << "\n\nFim de Programa\n";
    system("pause");
}


void minMax(int vetor[], int *pMin, int *pMax){
	int i;
	*pMin = vetor[0];
	*pMax = vetor[0];
	
	for(i=1; i<10; i++){
		if(vetor[i]<*pMin)
			*pMin = vetor[i];
		if(vetor[i]>*pMax)
			*pMax = vetor[i];	
	}
}