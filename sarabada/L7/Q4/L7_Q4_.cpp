/*
4. Escreva um programa que leia um valor inteiro (maior do que 1 e menor ou igual a 10) 
e exiba a tabuada (at? 10) de multiplica??o do n?mero lido. 

Voc? dever? escrever as seguintes fun??es:
- int LeNumero(int n1,int n2)
L? um n?mero inteiro no intervalo especificado (n1, n2) e o retorna. 
Cada vez que for digitado um n?mero inv?lido (fora do intervalo especificado) a fun??o deve 
exibir a mensagem "N?mero inv?lido. Digite novamente!"

- void Tabuada( int n)
Recebe como par?metro um n?mero inteiro e exibe na tela a tabuada de multiplica??o 
at? 10 do n?mero lido. Exemplo: n?mero lido 5
5 x 1 = 5	5 x 2 = 10	....	5 x 10 = 50
*/

#include <iostream>

using namespace std;

int LeNumero(int n1, int n2);
void Tabuada(int n);

int main(){

	int val, numero1, numero2;

	cout << "\nDigite o primeiro numero do intervalo: ";
	cin >> numero1;
	cout << "\nDigite o segundo numero do intervalo: ";
	cin >> numero2;
	
	val = LeNumero(numero2, numero1);	
	
	Tabuada(val);
	
    cout << "\n\nFim de Programa\n";
    system("pause");
}

int LeNumero(int n1, int n2){
	int valor;
	if(n2<n1){
		valor = n1;
		n1 = n2;
		n2 = valor;
	}
	do{
		cout << "\nDigite um valor inteiro entre " << n1 << " e " << n2 << ": ";
		cin >> valor;
		if((valor<n1)||(valor>n2))
			cout << "\nNumero invalido. Digite novamente!";
	}while((valor<n1)||(valor>n2));	
	return valor;
}

void Tabuada(int n){
	int cont;
	cout << "\n\nTabuada do numero " << n;
	for(cont=1; cont<=10; cont++){
		cout << "\n" << n << " x " << cont << " = " << (n*cont);
	}
}
