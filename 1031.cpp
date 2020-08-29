//Yasmin Alves
//28.08.2020
#include <iostream>
#include <vector>
#include <stdio.h>
 
using namespace std;

int RelacaoPuloRegiao ( vector <int> pessoas, int k, int n);
 
int main() {
 
    int NC, n, k, i = 0;

    while (cin >> n && n > 0){
        k = 1;

        vector <int> pessoas;

        for (int cont = 1; cont <= n; cont++) { pessoas.push_back(cont); }

        while ( RelacaoPuloRegiao(pessoas, k, n) != 13) { 
            //k representa a menor quantidade de pulos
            k ++;
        } 
        cout << k << endl;
        pessoas.clear();
    }
    
    return 0;
}

int RelacaoPuloRegiao ( vector <int> pessoas, int k, int n) {

    int tam = pessoas.size(), i = 0;

    while (tam > 1) {
        
        for (int j = 1; j <= k; j++) {
            
            if (tam == n) {// pra retirar o primeiro 
            
            i = 0;
            
            } else {
                /*função que aumenta a posição x vezes (a qtd de pulos) até a posição limite (tam - 1) e 
                quando chega nela volta pro início*/

                if (i < (tam - 1)) i ++;
                else if (i == (tam - 1)) i = 0; 

            }
   
        }
        pessoas.erase(pessoas.begin()+ i); 
        // apaga o elemento da posição i e diminui o tamanho e a posição

        i--;tam --;

    }

    return pessoas[0];
}
