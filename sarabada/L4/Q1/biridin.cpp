#include <iostream>
#include <windows.h>
using namespace std;


/* Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
código for 1, mostrar o vetor na ordem direta (do primeiro até o último),  se o código for 2, mostrar o vetor 
na ordem inversa (do último até o primeiro). */

int main(){

int vetor[20], i, ordem;


cout << "insira os 20 valores\n";
for ( i = 0; i < 20; i++)
{
    cout << "\n";
    cin >> vetor[i];
}

cout << "qual ordem deve ser mostrada?\n[1 para ordem direta]\n[2 para inversa]\n";
cin>>ordem;

switch (ordem)
    {
    case 1:  

        for ( i = 0; i < 20; i++)
        {
        cout << " " << vetor[i];
        }
        break;
    case 2:

        for ( i = 19; i > -1; i--)
        {
        cout << " ";
        cout << vetor[i];
        }
        break;

    default: cout << "comando invalido";
    break;
    }
}

/*
if (ordem ==2)
{
    for ( i = 20; i == 0; i--)
{
    cout << " ";
    cout << vetor[i];
  }
     }
       else{
            if (ordem==1){
              
            }else{
                cout << "comando invalido";
            }
        }
    }*/