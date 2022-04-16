#include <iostream>
#include <string.h>
using namespace std;

struct video
{
    string nome;
    string desc;

    void inserir(string Inome, string Idesc){
         Inome = nome;
         Idesc = desc;
    }
};
void uploads();



int main(){
    int opc;
    string log, tit;


    cout << "login: ";
    cin  >> log;


    cout << "BEM VINDO AO SITE PPORNO GAY, PORO GAYPORNOGRAFIAS GRATUIRTASSX";
    cout << "\n" << "OQ TU QUER?";
    
    cout << "\nupload - 1\n";
    cout << "\ndownload - 2\n";
    cout << "\nHOT VIDES - 3\n";
    cout << "\nVIDEOS DO BLUEZAO - 4\n";
    cout << "\nvideos de usuarios - 5\n";
    cout << "\nlogout -6\n";
    
    do{
     cin >> opc;
  
    switch (opc)
    {
    case 1:
        uploads();
        cout << "carraeagno";
        for (int i = 0; i < 150; i++)
        {
            cout << ".";
        }
        cout << "\nvideo uploadado irmao eh isto\n";
        break;

    case 2:
    cout << "\nqual baixar\n";
    break;

    case 3:
    cout << "\nhot videosus\n";
    break;

    case 4:
    cout <<"\nbanido\n";
    break;

    case 5:
    cout << "\nvideos de usuarios\n";
    break;

    case 6:
    cout << "\nfechando...\n";
    break;

    default:cout << "\n??????????????????????????\n";
        break;
    }}while (opc>5 || opc<1);

}

void uploads(){
video upl;

    cout << "titulo do video ";
    cin >> upl.nome;
   
    cout << "descricao ";
    cin >> upl.desc;
    cin >> upl.nome;
    
}

