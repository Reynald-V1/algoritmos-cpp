#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
struct regist
{
    int idade;
    float altura;
};

void noReturn();
void porValor(); int porValorEX(int parametro);
void retornoUnic(); int retornoUnicEX(int parametro); int retornoUnicEX2(int parametro);
void vetorParam(); void vetorParamEX(int parametro[], int i);
void porRef(); void porRefEX(int *parametro);
void ponteiro(); void ponteiroEX(int *parametro);
void registro(struct regist regParametro);
void retornoDuplo(); void retornoDuploEX(int vetor[],int  i);

int main(){
   int opc;
   regist tu; 
  
  cout << "                 ______________Bem vindo______________\n"
       << "neste programa voce sera apresentado aos conceitos basicos no assunto de funcoes.\n"
          "selecione o assunto que desejar\n";

          do{
  cout << "                  _____Parametros de entrada_____\n"
          "1. Passagem de parametro por valor\n"
          "2. Passagem de parametro por referencia\n"
          "3. Funcao que recebe vetor como parametro\n" 
          "4. Funcao que recebe matriz como parametro\n" 
          "5 Funcao que recebe registro como parametro\n"
          "\n"
          "                  _____Retornos das funcoes_____\n"
          "6. Funcao sem retorno\n"
          "7. Funcao com retorno de um unico valor\n"  
          "8. Funcao com retorno de dois valores do mesmo tipo\n"
          "9. Funcao com retorno de dois valores de tipos diferentes\n\n"
          "0. Utilizacao de ponteiros\n\n"
          "-1. Sair\n\n";
          cout << "digite os numeros correspondentes ao assunto para ver o conteudo\n"
                  ">";
          cin >> opc;

          switch (opc)
          {
        
      case 1:
              cout << "\npassagem de parametros por valor\n";
              cout << "na passagem de parametros por valor a funcao deve receber\n"
                "os valores desejados digitando dentro dos parenteses os tipos e os nomes das variaveis\n"
                "que a funcao ira receber. As variaveis dentro dos parenteses serao seus parametros de\n"
                "entrada, e mesmo que variaveis tenham os mesmos nomes nos parametros de entrada elas sao independentes\n" 
                "das variaveis de qualquer outro escopo, mas podem armazenar uma copia dos valores delas ao usar a funcao dentro\n"
                "de qualquer outra funcao\n";
                int valor;
              cout << "para um exemplo a funcao a seguir ira adicionar +10 a qualquer valor digitado por voce:\n ";
              cin >> valor;
              cout << "\n";
              porValorEX(valor);

                cout << "\n\npara aplicar valores nos parametros voce deve chamar a funcao e substituir as variaveis\n"
                "dentro dos parenteses pelas variaveis no escopo na qual a funcao foi chamada\n"
                "exemplo: \n\n"
                "declaracao da funcao\n"
                "______________________________\n"
                "int funcao(int parametro){\n"
                "     cout << parametro + 10;}\n"
                "_______________________________\n\n";
                
                cout << "uso da funcao\n";
                cout<<"________________________________\n";
                cout<<"int main(){\n";

                   cout<<"int variavel;\n";

                   cout<<"funcao(variavel);};\n";
                cout<<"_________________________________\n";
                system("pause");
                break;


      case 2:
              cout << "\npassagem de parametros por referencia\n";
              porRef();
              system("pause");
              break;
      case 3:
              cout << "\nFuncao que recebe vetor como parametro\n";
              vetorParam();
              system("pause");
              break;

      case 4:
              cout << "\nFuncao que recebe matriz como parametro\n[incompleto]";
              system("pause");
              break;
      case 5:
              cout << "\nFuncao que recebe registro como parametro\n";
              cout << "nao ha muita diferenca em usar um registro e usar umaa variavel qualquer.\n"
                "voce deve criar um parametro com o tipo de registro que voce criou usando struct\n"
                "e criar uma variavel a ser recebida como parametro\n\n"
                "void funcao(registro regParametro)\n\n"
                "e utiliza-lo normalmente como registro quando estiver dentro da funcao\n"
                "para exemplo insira seu nome e sua idade\n\n";

              void registro(regist tu);

              system("pause");
              break;

      case 6:
              cout << "\nFuncao sem retorno\n";
                        noReturn();
              system("pause");
              break;
      
      case 7:
              cout << "\nFuncao com retorno de um unico valor\n";
                        retornoUnic();
                        
              system("pause");
              break;

      case 8:
      int vetor[2];
              cout << "\nFuncao com retorno de dois valores do mesmo tipo\n";

              retornoDuplo();

              cout << "assim retornando dois valores\n";
             
              system("pause");
              break;

      case 9:
              cout << "\nFuncao com retorno de dois valores de tipos diferentes[incompleto]\n";
              system("pause");
              break;

      case 0:
              cout << "\nUtilizacao de ponteiros\n";
                int val0;
                ponteiro();
                cout << "o valor digitado sera substituido por 0\n"
                        ">";
                cin  >> val0;
                cout << endl;
                ponteiroEX(&val0);
                cout << val0 << endl;
              system("pause");
              break;

       default:if(opc<-1 || opc>9){
        cout << "valor invalido";
        system("pause");
            break;
          }
    }   
}while(opc!=-1);
cout << "fim de programa";}       

//passagem por valor | case 1
void porValor(){
        cout << "na passagem de parametros por valor a funcao deve receber\n"
                "os valores desejados digitando dentro dos parenteses os tipos e os nomes das variaveis\n"
                "que a funcao ira receber. As variaveis dentro dos parenteses serao seus parametros de\n"
                "entrada, e mesmo que variaveis tenham os mesmos nomes nos parametros de entrada elas sao independentes\n" 
                "das variaveis de qualquer outro escopo, mas podem armazenar uma copia dos valores delas ao usar a funcao dentro\n"
                "de qualquer outra funcao\n"
                "exemplo da estrutura:\n"
                "int funcao(int parametro){"
                        "}\n\n";
                system("pause");
        cout << "\n\npara aplicar valores nos parametros voce deve chamar a funcao e substituir as variaveis\n"
                "dentro dos parenteses pelas variaveis no escopo na qual a funcao foi chamada\n"
                "exemplo: \n\n"

                "int funcao(int parametro){"
                       "}"

                "int mani(){"

                   "int variavel;"

                   "funcao(variavel);};";

                system("pause");
        cout << "\n\no valor de var no escopo mani foi aplicado no parametro da funcao\n"
                "no caso\n" 
                "int funcao(parametro) se tornou int funcao(variavel)\n"
                "agora existe uma copia do valor de var dentro da funcao e agora e possivel usar\n"
                "aquele valor dentro da funcao.";
}
int porValorEX(int parametro){

      cout << parametro + 10;
      return 0;
}
//retorno unico | case 7
void retornoUnic(){
        int valor, resultado;
        cout << "para retornar o valor depois de modifica-la dentro da funcao ao main, deve\n"
                "ser usado o comando return [nome da variavel]\n"
                "+10 sera adicionado ao valor digitado para exemplo: \n";
                cin >> valor;
                
                resultado = retornoUnicEX(valor);
                cout << resultado << endl;
                cout << "pode-se criar uma variavel para armazenar o valor da soma e retorna-la\n"
                        "ou retornar a soma diretamente\n"
                        "      {var=parametro+10; return var} ou {return parametro+10;}\n\n";
                system("pause");
        cout << "\n\ncaso escreva 'return parametro' mesmo que tenha modificado o parametro o codigo\n"
                "ira retornar apenas o valor original do parametro\n"
                "e o valor modificado e descartado:\n";

                resultado = retornoUnicEX2(valor);
                cout << resultado << endl;
      

}
int retornoUnicEX(int parametro){
        return parametro+10;
}
int retornoUnicEX2(int parametro){
        parametro + 10;
        return parametro;
}
//função sem retorno | case 6
void noReturn(){
        cout << "um tipo de funcao que nao possui um retorno, ou seja, ela nao ira retornar nenhum tipo\n"
                "de valor quando for chamada, ela apenas ira executar o que ja existe dentro dela\n"
                "por exemplo: \n\n"
                "void func(){\n"
                "cout << 'fim de programa';}\n\n";
                system("pause");
        cout << "\nquando esta funcao for chamada ela ira apenas escrever 'fim de programa'.\n";
                
                
        cout << "Por nao possuir retorno e nao exigir parametros esse tipo"
                "de funcao e mais usada na criacao de menus em casos\n"
                "que o mesmo codigo se repete varias e varias vezes\n"
                "este mesmo texto esta sendo gerado por um void\n"
                "\n\n\n";

}
//vetor parametr | case 3
void vetorParam(){
int valor[5], i;
cout << "nao existe uma diferenca muito grande na utilizacao de vetores para referencia se comparada com por referencia.\n"
        "voce deve adicionar os sinais [] para que o parametro saiba que aquilo e um vetor\n"
        "e mais uma variavel ao lado que significa o tamanho do vetor\n"
        "'exemplo void funcao(vetor[], int tamanho);' vetores sao tratados como ponteiros\n"
        "entao nao possuem 'return' e so podem ser alocadas em voids\n\n"

        "o codigo a seguir ira armazenar 5 numeros e transformar numeros pares do um vetor em 0\n"
        "adicione seus valores: "; 
                vetorParamEX(valor, i);
}
void vetorParamEX(int parametro[], int i){
        
        
        for ( i = 0; i < 5; i++)
        {
                cin >> parametro[i];
        }
        
        
        for (int i = 0; i < 5; i++)
        {
        if (parametro[i]%2==0)
        {
               cout << "0 ";
        }
        else{
                cout << parametro[i] << " ";
        }
      }
    }
//porRef | case 2
void porRef(){
        int valor;
        cout << "utilizando um ponteiro e armazenando a locacao de memoria de uma variavel. Assim podendo modifica-la\n"
        "diretamente pela memoria, logo, elas nao precisam de retorno, mas e necessario que seja dado\n"
        "o endereco de memoria dessa variavel a ser modificada para que o resultado modificado da variavel seja mostrado.\n"
        "para declarar um ponteiro e necessario declarar o tipo de variavel e colocar '*' antes de seu nome 'int *var'.\n"
        "E para mostrar o endereco da variavel usa-se o sinal &.\n\n"
        "Este tipo de funcao so pode ser armazenada em void";

        cout << "Agora o endereco da variavel 'valor' sera mostrado e entao"
                "\n+10 sera adicionado ao valor digitado para exemplo\n";

        
        cin >> valor;

        porRefEX(&valor);
        cout << valor << "\n\n\n"; 
        }
void porRefEX(int *parametro){
        *parametro = *parametro+10;
        cout << "\n";
        cout << &parametro;
        cout << "\n";

}
//ponteiro | case 0
void ponteiro(){
        cout << "ponteiros sao um tipo de variavel que podem armazenar o endereco de uma variavel.\n"
                "Eles usam o endereco de uma variavel para modifica-las diretamente mesmo que nao\n"
                "estejam no mesmo escopo, esse tipo de variavel e usada principalmente em funcoes\n";
}
void ponteiroEX(int *parametro){
        *parametro = 0;
}
//registro | case 5
void registro(struct regist regParametro){
        
        cout << "idade: ";
        cin >> regParametro.idade;
        cout << endl;
        cout << "altura: ";
        cin >> regParametro.altura;
        cout << regParametro.idade << endl;
        cout << regParametro.altura<< endl;
}
//retorno duplo | case 8
void retornoDuplo(){
        int vetor[2], i;
        cout << "e possivel retornar dois ou mais valores diferentes utilizando um vetor\n"
                "desde que eles sejam do mesmo tipo\n";
                retornoDuploEX(vetor, i);
                for ( i = 0; i < 2; i++)
                {
                  cout << vetor[i] << "\n";
                }
                        }
void retornoDuploEX(int vetor[],int  i){
        cout << "para exemplificar melhor ";
        for ( i = 0; i < 2; i++)
        {
               cout << "\ninsira um valor: ";
               cin >> vetor[i];
        }

}