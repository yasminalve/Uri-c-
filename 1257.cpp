//Yasmin Alves
//11.07.2020
#include <iostream>
#include <stdio.h>
#include <string>

 
using namespace std;
 
int main() {

    int i, l, cont, tam;
    string palavra;
    cin >> i;

    for (int j = 0; j < i; j ++) {
        cont = 0;
        cin >> l;
        for (int k = 0; k < l; k++) {
            cin >> palavra;
            tam = palavra.size();
            for (int y = 0; y < tam; y++) {
                cont += (palavra[y] - 65 + k + y);
            }   
        }
        cout << cont << endl;;
        
    }
 
    return 0;
}
