//Yasmin Alves
//19.06.2020
#include <iostream>
#include <vector>
#include <stdio.h>
 
using namespace std;


 
int main() {
 
    int NC, n, k, i;
    
    cin >> NC; 

    for (int cont = 0; cont < NC; cont++) {

        cin >> n >> k; i = 0;

        vector <int> pessoas;

        for (int i = 1; i <= n; i++) { pessoas.push_back(i); }
        
        int tam = pessoas.size();

        while (tam > 1) {

            for (int j = 1; j <= k; j++) {

                if (i < tam) i ++;
                else if (i == tam ) i = 1;
                else i -= tam;
                
            }
            pessoas.erase(pessoas.begin()+(i-1));
            tam --;
            i--;
            
            
        }
    printf("Case %d: %d\n", cont + 1, pessoas[0]);
    pessoas.clear(); 

    }


    return 0;
}
