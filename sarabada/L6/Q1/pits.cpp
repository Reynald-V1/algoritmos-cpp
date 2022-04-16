#include<iostream>
#include<string.h>
using namespace std;
struct Tanimal
{
    string nome;
    string raca;
    int idade;
};

int main(){
    int tipo, slot=10;
    Tanimal catioro, felino, passaro, lagarto, outro;
  
    cout << "\nselecione o tipo de animal\n";

    cout << "catioro......[1]\n"<< 
            "felino.......[2]\n"<<
            "passaro......[3]\n"<<
            "galinacio....[4]\n"<<
            "outro........[5]\n";
            do
            {
              
    cout << ">";
    cin >> tipo; 
    
switch (tipo)
    {
    case 1:
        cout << "\nnome do catioro\n";
        cin>> catioro.nome;
        cout << "\nraca do catioro\n";
        cin >> catioro.raca;
        cout << "\nidade do catioro\n";
        cin >> catioro.idade;
        cout << catioro.nome << "\n" <<catioro.raca << "\n" << catioro.idade;
        break;
    case 2:
        cout << "\nnome do felino\n";
        getline(cin, felino.nome);
        cout << "\nraca do felino\n";
        getline(cin, felino.raca);
        cout << "\nidade do felino\n";
        cin >> felino.idade;
        cout << felino.nome << "\n" << felino.raca << "\n" << felino.idade;
        break;
    case 3:
        cout << "\nnome do passaro\n";
        cin>> passaro.nome;
        cout << "\nraca do passaro\n";
        cin >> passaro.raca;
        cout << "\nidade do passaro\n";
        cin >> passaro.idade;
        cout << passaro.nome << "\n" << passaro.raca << "\n" << passaro.idade;
        break;
    case 4:
        cout << "\nnome do lagarto\n";
        cin >> lagarto.nome;
        cout << "\nraca de lagarto\n";
        cin >> lagarto.raca;
        cout << "\nidade do lagarto\n";
        cin >> lagarto.idade;
        cout << lagarto.nome << "\n" << lagarto.raca << "\n" << lagarto.idade;
        break;
    case 5: 
        cout << "\nnome do animal\n";
        cin >> outro.nome;
        cout << "\ntipo de animal\n";
        cin >> outro.raca;
        cout << "\nidade do animal\n";
        cin >> outro.idade;
        cout << outro.nome << "\n" << outro.raca << "\n" << outro.idade;
        break;

        default:
        cout << "\ninvalido\n";
        break;
    }
}while (tipo<1 || tipo>4);
            

    

        


}

/*- Crie a estrutura tAnimal: Registro tAnimal: 
nome: string 
raca: string 
idade: int 
- Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais; 
- Verifique e escreva o nome do animal mais velho; 
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para 
a busca. Se existir animal da raça procurada, informe seus dados (nome e idade);*/