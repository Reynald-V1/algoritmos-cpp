#include <iostream>
#include <string.h>
using namespace std;

struct gato
{
    string nome;
    string raca;

    void ins(string Snome, string Sraca){
        Sraca = raca;
        Snome = nome;
    }

    void mos(){
        cout << raca;
        cout << nome;
    }
};

int main(){
gato gatimn;
string nome, raca;

gatimn.mos();


}