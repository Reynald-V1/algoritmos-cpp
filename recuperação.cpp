#include<iostream>
#include <string.h>
using namespace std;

//Paulo Arthur Da Silva Reynaldo
int fMedia(float N1, float N2, float N3);
void fSituacao(struct aluno situacao);
void fmediageral(float medias[], int i, float *MediageralP);
struct aluno
{
    string nome= "nao definido";
    int idade=0;
    float notas[3]{0,0,0};
    float media=0;
    string situacao="nao definida";
};

int main(){
    aluno turma[10];
    float medias[10];
    int i, j, s, f;
    float MediaGeral;

    //percorrendo turma mostrando valores zerados
    for ( i = 0; i < 10; i++){
    cout << "nome: " << turma[i].nome << endl;
    cout << "idade: " << turma[i].idade<< endl;

        //percorrendo o vetor notas    
        for (j = 0; j < 3; j++){
        cout << "nota "<< j << ": " << turma->notas[j]<< endl;
        }
    
    cout << "media: " << turma[i].media<< endl;
    cout << "situacao: " << turma[i].situacao<< endl;
    cout << "\n\n\n";
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    //percorrendo turma para entrada de valores
    for ( i = 0; i < 10; i++){ 
    
    cout << "nome: "; cin >> turma[i].nome;
    cout << "idade: "; cin >> turma[i].idade;

        //percorrendo o vetor notas
        f=1;   
        for (j = 0; j < 3; j++){
        cout << "nota "<< f++ << ": "; cin >> turma->notas[j];}
        //preenchendo médias
        turma[i].media = fMedia(turma[i].notas[0], turma[i].notas[1], turma[i].notas[2]);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    //mostrando o registro modificado acessando os valores nas funções   
    cout << "nome: " << turma[i].nome << endl;
    cout << "idade: " << turma[i].idade<< endl;
    cout << "notas: " << turma[i].notas[0] << " | " << turma[i].notas[1] << " | " << turma[i].notas[2] << endl;
    cout << "media: " << turma[i].media<< endl;
    fSituacao(turma[i]);
    cout << "\n\n\n";
    }
    //registrando as medias da turma no vetor de medias
   for ( i = 0; i < 10; i++)
   {
       medias[i] = turma[i].media;
   }fmediageral(medias, i, &MediaGeral);
   //media geral da turma
   cout<< "media geral: " << MediaGeral;
   
}

//calculador da media
int fMedia(float N1, float N2, float N3){
    int opc;
    int somaari, somapond;
    //menu
    cout << "selecione o tipo de calculo desejado para sua media\n";
    cout << " _______________________________________________\n"
            "|                                               |\n"
            "|  1 - aritmetica                               |\n"
            "|-----------------------------------------------|\n"
            "|  2 - ponderada - pesos 2,3,4                  |\n" 
            "|_______________________________________________|\n\n>";

    //laço impedindo a entrada de um valor invalido
    do{
        cin >> opc;
        switch (opc)
        {
        //calculos da media 
        case 1:
        somaari = N1+N2+N3;
        somaari = somaari/3;
        return somaari;
            break;

        case 2:
        somapond=N1+N2+N3;
        somapond = somapond/3;
        return somapond;
            break;

        default: cout << "invalido, tente novamente. \n>";
            break;
        }
    }while (opc<1 || opc>2);
}   

//pegando a media e recolocando a situacao
void fSituacao(aluno situacao){
   if (situacao.media>=7)
   {
       situacao.situacao="aprovado";
       cout<<"aprovado";
   }else{
       if(situacao.media>=3 && situacao.media <7)
       {
           situacao.situacao="recuperacao";
           cout<<"recuperacao";
       }else{
           if (situacao.media<3)
           {
               situacao.situacao="reprovado";
               cout<<"reprovado";
           }
           
       }
       
   }
       
}
//calculando a nota geral da turma com todos os valores extraidos
void fmediageral(float medias[], int i, float *MediageralP){
MediageralP=0;

for (i = 0; i < 10; i++)
{
    *MediageralP = *MediageralP + medias[i]; 
    *MediageralP/10;
}
}





