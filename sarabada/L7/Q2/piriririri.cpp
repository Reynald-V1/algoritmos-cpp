#include <iostream>
using namespace std;
/*Faça  uma  função  que  recebe  um  número  inteiro  por  parâmetro  e  retorna 
verdadeiro se ele for par e falso se for ímpar.*/

int pipi(int ni);

int main(){
      int nim;

      cout << "numero: ";
      cin >> nim;

      pipi(nim);
    }

int pipi (int ni){

if (ni%2==0)
{
      cout << "par";
}

else{
      if (ni%2!=0){
      cout << "impar";
    }
  }
}