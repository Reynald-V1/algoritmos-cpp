#include <iostream>
using namespace std;





 void vetorParam(); void vetorParamEX(int parametro[], int i);


int main(){
	
	void vetorparam();
}

void vetorParam(){
int valor[5], i;
cout << "nao existe uma diferenca muito grande na utilizacao de vetores para referencia.\n"
        "voce deve adicionar os sinais [] para que o parametro saiba que aquilo e um vetor"
        "o codigo a seguir ira transformar numeros pares de um  vetor em 0"
        "adicione seus valores: ";   
               vetorParamEX(valor, i);

        
}
void vetorParamEX(int parametro[], int i){
int valor[5];

        for (int i = 0; i < 5; i++)
        {cin >> valor[i];
        if (parametro[i]%2==0)
        {
            parametro[i]=0;

            cout << parametro[i];
        }
        
        }
        
     
     }


