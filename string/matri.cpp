#include <iostream>
#include <string.h>
using namespace std;

int main(){
int mat[5][3];

for (int i = 0; i < 5; i++)
{for (int j = 0; j < 2; j++)
    {
    cin >> mat[i][j];
    cout <<"\n";
    cout << mat[i][j];
    }
}

}