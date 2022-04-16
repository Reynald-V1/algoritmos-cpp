/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore
um algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para
isso, utilize duas funções: uma que determine o maior valor entre as notas (de
provas ou de trabalhos) e outra que calcule a média aritmética das duas maiores
notas.*/

#include <iostream>
using namespace std;
float Vnotas ();
float MediaAritmetica();

int main() {
  int maiorProva,maiorTrabalho, Mn, MA;

  cout<<"\nDigite as notas das provas:\n";
  Mn=Vnotas();
  maiorProva=Mn;
  cout<<"\nMaior nota nas provas: "<<maiorProva;

  cout<<"\n\nDigite as notas das trabalhos:\n";
  Mn=Vnotas();
  maiorTrabalho=Mn;
  cout<<"\nMaior nota nos trabalhos: "<<maiorTrabalho;
 
  cout<<"\n\nResultado final: "<<MA<<" pontos.";
}

float Vnotas ()
{
  float  nota1, nota2, x;

  cin >>nota1>>nota2;
  
  if (nota1>nota2)
  {
    x=nota1;
    return x;
  }
  else
  {
    x=nota2;
    return x;
  }
}
float MediaAritmetica (float maiorProva, float maiorTrabalho)
{
  float MA;

  MA=((maiorProva + maiorTrabalho)/2);
  return MA;
}