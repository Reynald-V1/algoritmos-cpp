#include <iostream>
using namespace std;

/*Elabore  um  algoritmo  que  leia  um  vetor  de  15  posições  
de  números  inteiros  e  pergunte  ao  usuário  quais 
elementos  ele  deseja  ver:  se  os  elementos  que  estão  em
índices  pares  ou  se  os  elementos  que  estão  em 
índices ímpares. Mostre somente os elementos solicitados.*/

int main(){
   int vetor[6], i, ordem;
   

cout << "insira os valores";
   for ( i = 0; i < 6; i++)
   {
        cin >> vetor[i];
   }

   cout << "1 para indice par | 2 para impar";
   cin >> ordem;

   switch (ordem)
   {
   case 1:
    
    for (i = 0; i < 6; i++)
    {
       cout << vetor[i];
    }
    

     break;
   
   default: cout << "cu";
      break;
   }

  

}