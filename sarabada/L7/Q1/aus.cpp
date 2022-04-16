#include <iostream>
using namespace std;


float mediaProv=0, mediaTrab=0;

float comparador();
float media();

int main(){

float medR;

    cout << "insira as notas da prova \n";
   mediaProv = comparador();

   cout << "insira as notas dos trabalhos: \n";
   mediaTrab = comparador();

   cout << "media do trabalhos: ";
   medR = media();

   cout << medR;
}

float media(){
    float mediaReal;
    mediaReal = (mediaProv+mediaTrab) / 2;

return mediaReal;

}

float comparador(){

    float notaP1, notaP2, MedP;

    cout << "nota 1: ";
    cin >> notaP1;
    
    cout << "nota 2: "; 
    cin >> notaP2;

    if (notaP2>notaP1)
    {
        MedP=notaP2;
    }else{
        
            MedP = notaP1;
        
    }
    return MedP;
}

