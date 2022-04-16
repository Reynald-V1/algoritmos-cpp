#include <iostream>
using namespace std;



int main(){
/* Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0.  Em seguida escreva o vetor final. */

int core, vetor[6], i;

do{
    cout << "insira os 20 valores\n";
        for ( i = 0; i < 6; i++)
        {
            cout << " ";
            cin >> vetor[i];
        }
        
    cout << "esta correto?\n";
        for ( i = 0; i < 6; i++)
        {
            cout << " ";
            cout << vetor[i];
        }
    cout << "\nsim - 1 | nao - 2\n";
    cin >> core;
    }
while(core==2);

for ( i = 0; i < 6; i++)
{
    if (vetor[i]%2 == 0){
        vetor[i] = 0;
    }
}
for ( i = 0; i < 6; i++)
        {
            cout << " ";
            cout << vetor[i];
        }




}
