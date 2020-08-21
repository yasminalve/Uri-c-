//Yasmin Alves
//17.06.2020
#include <iostream>
#include <string>
 
using namespace std;


 
int main() {
 
    int N, L, C, pag = 1;
    string conto;

    while (cin >> N >> L >> C) {
        pag = 1;
        int carac = 0, linha = 1;


        for (int i = 0; i < N; i++) {
            cin >> conto;
            
            if ((carac + conto.size()) <= C) {
                carac = carac + 1 + conto.size(); if (i == (N - 1)) carac -= 1;
            } else {
                linha ++;
                carac = conto.size() + 1; if (i == (N - 1)) carac -= 1;
                if (linha > L) {
                    linha = 1;
                    pag++;
                }


            }
            
        }

        cout << pag << endl;
    }
 
    return 0;
}
