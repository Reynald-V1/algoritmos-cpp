#include <iostream>

using namespace std;
/* Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
função em um programa que lê n1 e n2 do usuário e imprime a soma.*/


int soma(int a, int b);

int main(){
    int n1, n2;

    cout << "valores: ";
    cin >> n1 >> n2;

    cout << soma(n1, n2);


}

int soma(int b, int a){

return (b+a);
}