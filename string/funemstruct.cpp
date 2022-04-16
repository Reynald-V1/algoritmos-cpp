#include <iostream>
#include <string.h>
using namespace std;

struct gato
{
    string nome;
    string raca;

    void ins(string Snome, string Sraca){
        cin >> raca;
        cin >> nome;
        Sraca = raca;
        Snome = nome;
    }

    void mos(){
        cout << raca << endl;
        cout << nome << endl;
    }
};

int main(){
gato gatimn;
string nome, raca;

gatimn.ins(nome, raca);

gatimn.mos();


}